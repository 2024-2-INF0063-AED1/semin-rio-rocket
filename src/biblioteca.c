#include "biblioteca.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Variáveis globais para o tamanho da tabela hash e o número de elementos
static int tableSize;
static int numElementos;

// Tabela hash (array de ponteiros para Livros)
static Livro** tabelaHash;

// Função de hashing
int hashFunction(int id) {
    return (id * 2654435761 % 4294967296) % tableSize; // Método de Knuth
}

// Inicializar a tabela hash
void inicializarTabelaHash(int tamanhoInicial) {
    tableSize = tamanhoInicial;
    numElementos = 0;
    tabelaHash = (Livro**)malloc(tableSize * sizeof(Livro*));
    for (int i = 0; i < tableSize; i++) {
        tabelaHash[i] = NULL;
    }
}

// Redimensionar a tabela hash
void redimensionarTabelaHash() {
    int novoTamanho = tableSize * 2;
    Livro** novaTabelaHash = (Livro**)malloc(novoTamanho * sizeof(Livro*));
    for (int i = 0; i < novoTamanho; i++) {
        novaTabelaHash[i] = NULL;
    }

    // Re-hash todos os elementos na nova tabela
    for (int i = 0; i < tableSize; i++) {
        Livro* atual = tabelaHash[i];
        while (atual != NULL) {
            Livro* proximo = atual->proximo;
            int hashIndex = atual->id % novoTamanho;
            atual->proximo = novaTabelaHash[hashIndex];
            novaTabelaHash[hashIndex] = atual;
            atual = proximo;
        }
    }

    free(tabelaHash);
    tabelaHash = novaTabelaHash;
    tableSize = novoTamanho;
}

// Criar um novo livro
Livro* criarLivro(int id, char* titulo, char* autor, char* categoria, int ano, int status) {
    Livro* novoLivro = (Livro*)malloc(sizeof(Livro));
    novoLivro->id = id;
    strcpy(novoLivro->titulo, titulo);
    strcpy(novoLivro->autor, autor);
    strcpy(novoLivro->categoria, categoria);
    novoLivro->ano = ano;
    novoLivro->status = status;
    novoLivro->proximo = NULL;
    return novoLivro;
}

// Carregar os livros inicias
void inicializarLivros() {
    adicionarLivro(1, "O Senhor dos Anéis", "J.R.R. Tolkien", "Fantasia", 1954, 1);
    adicionarLivro(2, "1984", "George Orwell", "Distopia", 1949, 1);
    adicionarLivro(3, "Dom Casmurro", "Machado de Assis", "Romance", 1899, 1);
    adicionarLivro(4, "A Revolução dos Bichos", "George Orwell", "Satira", 1945, 1);
    adicionarLivro(5, "O Hobbit", "J.R.R. Tolkien", "Fantasia", 1937, 1);
    adicionarLivro(6, "Memórias Póstumas de Brás Cubas", "Machado de Assis", "Romance", 1881, 1);
    adicionarLivro(7, "A Máquina do Tempo", "H.G. Wells", "Ficção Científica", 1895, 1);
    adicionarLivro(8, "Cem Anos de Solidão", "Gabriel García Márquez", "Realismo Mágico", 1967, 1);
    adicionarLivro(9, "O Pequeno Príncipe", "Antoine de Saint-Exupéry", "Infantil", 1943, 1);
    adicionarLivro(10, "Drácula", "Bram Stoker", "Terror", 1897, 1);
    adicionarLivro(11, "Moby Dick", "Herman Melville", "Aventura", 1851, 1);
    adicionarLivro(12, "As Aventuras de Sherlock Holmes", "Arthur Conan Doyle", "Mistério", 1892, 1);
    adicionarLivro(13, "O Conde de Monte Cristo", "Alexandre Dumas", "Aventura", 1844, 1);
    adicionarLivro(14, "Jane Eyre", "Charlotte Brontë", "Romance", 1847, 1);
    adicionarLivro(15, "Frankenstein", "Mary Shelley", "Terror", 1818, 1);
    adicionarLivro(16, "Os Miseráveis", "Victor Hugo", "Drama", 1862, 1);
    adicionarLivro(17, "A Divina Comédia", "Dante Alighieri", "Poesia", 1320, 1);
    adicionarLivro(18, "O Morro dos Ventos Uivantes", "Emily Brontë", "Romance", 1847, 1);
    adicionarLivro(19, "Alice no País das Maravilhas", "Lewis Carroll", "Fantasia", 1865, 1);
    adicionarLivro(20, "O Grande Gatsby", "F. Scott Fitzgerald", "Romance", 1925, 1);

    printf("Livros iniciais carregados com sucesso.\n");
}

// Inserir um livro na tabela hash
void adicionarLivro(int id, char* titulo, char* autor, char* categoria, int ano, int status) {
    if (numElementos >= tableSize) {
        redimensionarTabelaHash();
    }

    int hashIndex = hashFunction(id);
    Livro* atual = tabelaHash[hashIndex];

    // Verificar se o ID já existe
    while (atual != NULL) {
        if (atual->id == id) {
            printf("Erro: Um livro com o ID %d já existe.\n", id);
            return;
        }
        atual = atual->proximo;
    }

    Livro* novoLivro = criarLivro(id, titulo, autor, categoria, ano, status);

    if (tabelaHash[hashIndex] == NULL) {
        tabelaHash[hashIndex] = novoLivro;
    } else {
        // Encadeamento para tratar colisões
        atual = tabelaHash[hashIndex];
        while (atual->proximo != NULL) {
            atual = atual->proximo;
        }
        atual->proximo = novoLivro;
    }
    numElementos++;
    printf("Livro inserido com sucesso!\n");
}

// Buscar um livro pelo ID
Livro* buscarLivro(int id) {
    int hashIndex = hashFunction(id);
    Livro* atual = tabelaHash[hashIndex];

    while (atual != NULL) {
        if (atual->id == id) {
            return atual;
        }
        atual = atual->proximo;
    }
    return NULL;
}

// Atualizar um livro
void atualizarLivro(int id, char* titulo, char* autor, char* categoria, int ano, int status) {
    Livro* livro = buscarLivro(id);
    if (livro != NULL) {
        strcpy(livro->titulo, titulo);
        strcpy(livro->autor, autor);
        strcpy(livro->categoria, categoria);
        livro->ano = ano;
        livro->status = status;
        printf("Livro atualizado com sucesso!\n");
    } else {
        printf("Livro não encontrado!\n");
    }
}

// Remover um livro
void removerLivro(int id) {
    int hashIndex = hashFunction(id);
    Livro* atual = tabelaHash[hashIndex];
    Livro* anterior = NULL;

    while (atual != NULL && atual->id != id) {
        anterior = atual;
        atual = atual->proximo;
    }

    if (atual == NULL) {
        printf("Livro não encontrado!\n");
        return;
    }

    if (anterior == NULL) {
        tabelaHash[hashIndex] = atual->proximo;
    } else {
        anterior->proximo = atual->proximo;
    }

    free(atual);
    numElementos--;
    printf("Livro removido com sucesso!\n");
}

// Mostrar todos os livros na tabela
void listarLivros() {
    for (int i = 0; i < tableSize; i++) {
        Livro* atual = tabelaHash[i];
        while (atual != NULL) {
            printf("ID: %d, Título: %s, Autor: %s, Categoria: %s, Ano: %d, Status: %d\n",
                   atual->id, atual->titulo, atual->autor, atual->categoria, atual->ano, atual->status);
            atual = atual->proximo;
        }
    }
}