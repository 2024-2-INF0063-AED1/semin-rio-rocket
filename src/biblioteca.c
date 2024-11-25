#include "biblioteca.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Ponteiro para o início da lista de livros
Livro* listaLivros = NULL;

void inicializarLivros() {
    adicionarLivro(1, "O Senhor dos Anéis", "J.R.R. Tolkien", "Fantasia", 1954, 1);
    adicionarLivro(2, "Dom Casmurro", "Machado de Assis", "Romance", 1899, 1);
    adicionarLivro(3, "O Pequeno Príncipe", "Antoine de Saint-Exupéry", "Infantil", 1943, 1);
    adicionarLivro(4, "O Hobbit", "J.R.R. Tolkien", "Fantasia", 1937, 1);
    adicionarLivro(5, "A Menina que Roubava Livros", "Markus Zusak", "Drama", 2005, 1);
    adicionarLivro(6, "O Código Da Vinci", "Dan Brown", "Suspense", 2003, 1);
    adicionarLivro(7, "O Diário de Anne Frank", "Anne Frank", "Biografia", 1947, 1);
    adicionarLivro(8, "O Alquimista", "Paulo Coelho", "Autoajuda", 1988, 1);
    adicionarLivro(9, "1984", "George Orwell", "Ficção Científica", 1949, 1);
    adicionarLivro(10, "A Culpa é das Estrelas", "John Green", "Romance", 2012, 1);
    adicionarLivro(11, "A Metamorfose", "Franz Kafka", "Ficção", 1915, 1);
    adicionarLivro(12, "O Perfume", "Patrick Süskind", "Suspense", 1985, 1);
    adicionarLivro(13, "O Iluminado", "Stephen King", "Terror", 1977, 1);
    adicionarLivro(14, "A Revolução dos Bichos", "George Orwell", "Fábula", 1945, 1);
    adicionarLivro(15, "A Moreninha", "Joaquim Manuel de Macedo", "Romance", 1844, 1);
    adicionarLivro(16, "O Guarani", "José de Alencar", "Romance", 1857, 1);
    adicionarLivro(17, "O Cortiço", "Aluísio Azevedo", "Naturalismo", 1890, 1);
    adicionarLivro(18, "Memórias Póstumas de Brás Cubas", "Machado de Assis", "Romance", 1881, 1);
    adicionarLivro(19, "O Alienista", "Machado de Assis", "Conto", 1882, 1);
    adicionarLivro(20, "O Primo Basílio", "Eça de Queirós", "Romance", 1878, 1);
    adicionarLivro(21, "O Ateneu", "Raul Pompeia", "Romance", 1888, 1);
    adicionarLivro(22, "O Mulato", "Aluísio Azevedo", "Romance", 1881, 1);
    adicionarLivro(23, "O Guarani", "José de Alencar", "Romance", 1857, 1);
    adicionarLivro(24, "O Cortiço", "Aluísio Azevedo", "Naturalismo", 1890, 1);
    adicionarLivro(25, "Memórias Póstumas de Brás Cubas", "Machado de Assis", "Romance", 1881, 1);
    adicionarLivro(26, "O Alienista", "Machado de Assis", "Conto", 1882, 1);
    adicionarLivro(27, "O Primo Basílio", "Eça de Queirós", "Romance", 1878, 1);
    adicionarLivro(28, "O Ateneu", "Raul Pompeia", "Romance", 1888, 1);
    adicionarLivro(29, "O Mulato", "Aluísio Azevedo", "Romance", 1881, 1);
    adicionarLivro(30, "O Guarani", "José de Alencar", "Romance", 1857, 1);
    adicionarLivro(31, "O Cortiço", "Aluísio Azevedo", "Naturalismo", 1890, 1);
    adicionarLivro(32, "Memórias Póstumas de Brás Cubas", "Machado de Assis", "Romance", 1881, 1);
    adicionarLivro(33, "O Alienista", "Machado de Assis", "Conto", 1882, 1);
    adicionarLivro(34, "O Primo Basílio", "Eça de Queirós", "Romance", 1878, 1);
    adicionarLivro(35, "O Ateneu", "Raul Pompeia", "Romance", 1888, 1);
    adicionarLivro(36, "O Mulato", "Aluísio Azevedo", "Romance", 1881, 1);
    adicionarLivro(37, "O Guarani", "José de Alencar", "Romance", 1857, 1);
    adicionarLivro(38, "O Cortiço", "Aluísio Azevedo", "Naturalismo", 1890, 1);
    adicionarLivro(39, "Memórias Póstumas de Brás Cubas", "Machado de Assis", "Romance", 1881, 1);
    adicionarLivro(40, "O Alienista", "Machado de Assis", "Conto", 1882, 1);
    adicionarLivro(41, "O Primo Basílio", "Eça de Queirós", "Romance", 1878, 1);
    adicionarLivro(42, "O Ateneu", "Raul Pompeia", "Romance", 1888, 1);
    adicionarLivro(43, "O Mulato", "Aluísio Azevedo", "Romance", 1881, 1);
    adicionarLivro(44, "O Guarani", "José de Alencar", "Romance", 1857, 1);
    adicionarLivro(45, "O Cortiço", "Aluísio Azevedo", "Naturalismo", 1890, 1);
    adicionarLivro(46, "Memórias Póstumas de Brás Cubas", "Machado de Assis", "Romance", 1881, 1);
    adicionarLivro(47, "O Alienista", "Machado de Assis", "Conto", 1882, 1);
    adicionarLivro(48, "O Primo Basílio", "Eça de Queirós", "Romance", 1878, 1);
    adicionarLivro(49, "O Ateneu", "Raul Pompeia", "Romance", 1888, 1);
    adicionarLivro(50, "O Mulato", "Aluísio Azevedo", "Romance", 1881, 1);
    adicionarLivro(51, "O Guarani", "José de Alencar", "Romance", 1857, 1);
    adicionarLivro(52, "O Cortiço", "Aluísio Azevedo", "Naturalismo", 1890, 1);
    adicionarLivro(53, "Memórias Póstumas de Brás Cubas", "Machado de Assis", "Romance", 1881, 1);
    adicionarLivro(54, "Cem Anos de Solidão", "Gabriel García Márquez", "Realismo Mágico", 1967, 1);
    adicionarLivro(55, "Harry Potter e a Pedra Filosofal", "J.K. Rowling", "Fantasia", 1997, 1);
    adicionarLivro(56, "O Nome do Vento", "Patrick Rothfuss", "Fantasia", 2007, 1);
    adicionarLivro(57, "A Divina Comédia", "Dante Alighieri", "Poesia", 1320, 1);
    adicionarLivro(58, "Dom Quixote", "Miguel de Cervantes", "Romance", 1605, 1);
    adicionarLivro(59, "Crime e Castigo", "Fiódor Dostoiévski", "Romance", 1866, 1);
    adicionarLivro(60, "O Grande Gatsby", "F. Scott Fitzgerald", "Romance", 1925, 1);
    adicionarLivro(61, "A Odisseia", "Homero", "Épico", -800, 1);
    adicionarLivro(62, "Orgulho e Preconceito", "Jane Austen", "Romance", 1813, 1);
    adicionarLivro(63, "O Processo", "Franz Kafka", "Ficção", 1925, 1);
    adicionarLivro(64, "Os Miseráveis", "Victor Hugo", "Romance", 1862, 1);
    adicionarLivro(65, "Guerra e Paz", "Lev Tolstói", "Romance Histórico", 1869, 1);
    adicionarLivro(66, "A Montanha Mágica", "Thomas Mann", "Romance", 1924, 1);
    adicionarLivro(67, "O Retrato de Dorian Gray", "Oscar Wilde", "Romance", 1890, 1);
    adicionarLivro(68, "O Apanhador no Campo de Centeio", "J.D. Salinger", "Romance", 1951, 1);
    adicionarLivro(69, "As Vinhas da Ira", "John Steinbeck", "Romance", 1939, 1);
    adicionarLivro(70, "Ulisses", "James Joyce", "Romance", 1922, 1);
    adicionarLivro(71, "Fahrenheit 451", "Ray Bradbury", "Ficção Científica", 1953, 1);
    adicionarLivro(72, "O Sol é para Todos", "Harper Lee", "Romance", 1960, 1);
    adicionarLivro(73, "O Lobo do Mar", "Jack London", "Aventura", 1904, 1);
    adicionarLivro(74, "A Insustentável Leveza do Ser", "Milan Kundera", "Romance", 1984, 1);
    adicionarLivro(75, "O Conde de Monte Cristo", "Alexandre Dumas", "Aventura", 1844, 1);
    adicionarLivro(76, "Anna Karenina", "Lev Tolstói", "Romance", 1877, 1);
    adicionarLivro(77, "O Homem Sem Qualidades", "Robert Musil", "Romance", 1930, 1);
    adicionarLivro(78, "Os Irmãos Karamázov", "Fiódor Dostoiévski", "Romance", 1880, 1);
    adicionarLivro(79, "Moby Dick", "Herman Melville", "Aventura", 1851, 1);
    adicionarLivro(80, "A Metamorfose", "Franz Kafka", "Ficção", 1915, 1);
    adicionarLivro(81, "O Som e a Fúria", "William Faulkner", "Romance", 1929, 1);
    adicionarLivro(82, "As Flores do Mal", "Charles Baudelaire", "Poesia", 1857, 1);
    adicionarLivro(83, "O Vermelho e o Negro", "Stendhal", "Romance", 1830, 1);
    adicionarLivro(84, "Madame Bovary", "Gustave Flaubert", "Romance", 1857, 1);
    adicionarLivro(85, "A Casa dos Espíritos", "Isabel Allende", "Realismo Mágico", 1982, 1);
    adicionarLivro(86, "O Amor nos Tempos do Cólera", "Gabriel García Márquez", "Romance", 1985, 1);
    adicionarLivro(87, "O Perfume", "Patrick Süskind", "Romance", 1985, 1);
    adicionarLivro(88, "O Médico e o Monstro", "Robert Louis Stevenson", "Terror", 1886, 1);
    adicionarLivro(89, "O Retrato da Rose Madder", "Stephen King", "Terror", 1995, 1);
    adicionarLivro(90, "It: A Coisa", "Stephen King", "Terror", 1986, 1);
    adicionarLivro(91, "A Revolução dos Bichos", "George Orwell", "Fábula", 1945, 1);
    adicionarLivro(92, "O Senhor das Moscas", "William Golding", "Romance", 1954, 1);
    adicionarLivro(93, "A Náusea", "Jean-Paul Sartre", "Romance", 1938, 1);
    adicionarLivro(94, "O Estrangeiro", "Albert Camus", "Romance", 1942, 1);
    adicionarLivro(95, "As Cidades Invisíveis", "Italo Calvino", "Ficção", 1972, 1);
    adicionarLivro(96, "O Nome da Rosa", "Umberto Eco", "Romance Histórico", 1980, 1);
    adicionarLivro(97, "Os Sertões", "Euclides da Cunha", "Romance", 1902, 1);
    adicionarLivro(98, "Grande Sertão: Veredas", "João Guimarães Rosa", "Romance", 1956, 1);
    adicionarLivro(99, "Vidas Secas", "Graciliano Ramos", "Romance", 1938, 1);
    adicionarLivro(100, "Macunaíma", "Mário de Andrade", "Romance", 1928, 1);
}

void adicionarLivro(int id, char* titulo, char* autor, char* categoria, int ano, int status) {
    // Criar novo livro
    Livro* novoLivro = (Livro*)malloc(sizeof(Livro));
    novoLivro->id = id;
    strcpy(novoLivro->titulo, titulo);
    strcpy(novoLivro->autor, autor);
    strcpy(novoLivro->categoria, categoria);
    novoLivro->ano = ano;
    novoLivro->status = status;
    novoLivro->proximo = NULL;

    // Adicionar à lista
    if (listaLivros == NULL) {
        listaLivros = novoLivro;
    } else {
        Livro* atual = listaLivros;
        while (atual->proximo != NULL) {
            atual = atual->proximo;
        }
        atual->proximo = novoLivro;
    }
    printf("Livro inserido com sucesso!\n");
}


void atualizarLivro(int id, char* titulo, char* autor, char* categoria, int ano, int status) {
    Livro* atual = listaLivros;
    while (atual != NULL) {
        if (atual->id == id) {
            strcpy(atual->titulo, titulo);
            strcpy(atual->autor, autor);
            strcpy(atual->categoria, categoria);
            atual->ano = ano;
            atual->status = status;
            printf("Livro atualizado com sucesso!\n");
            return;
        }
        atual = atual->proximo;
    }
    printf("Livro não encontrado!\n");
}

void removerLivro(int id) {
    Livro* atual = listaLivros;
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
        listaLivros = atual->proximo;
    } else {
        anterior->proximo = atual->proximo;
    }

    free(atual);
    printf("Livro removido com sucesso!\n");
}

void listarLivros() {
    Livro* atual = listaLivros;
    while (atual != NULL) {
        printf("ID: %d, Título: %s, Autor: %s, Categoria: %s, Ano: %d, Status: %s\n", atual->id, atual->titulo, atual->autor, atual->categoria, atual->ano, atual->status == 1 ? "Disponível" : "Indisponível");
        atual = atual->proximo;
    }
}

void buscarLivroPorId(int id) {
    Livro* atual = listaLivros;
    while (atual != NULL) {
        if (atual->id == id) {
            printf("ID: %d, Título: %s, Autor: %s, Categoria: %s, Ano: %d, Status: %d\n", atual->id, atual->titulo, atual->autor, atual->categoria, atual->ano, atual->status == 1 ? "Disponível" : "Indisponível");
            return;
        }
        atual = atual->proximo;
    }
    printf("Livro não encontrado!\n");
}

void buscarLivroPorTítulo(char* titulo) {
    Livro* atual = listaLivros;
    while (atual != NULL) {
        if (strcmp(atual->titulo, titulo) == 0) {
            printf("ID: %d, Título: %s, Autor: %s, Categoria: %s, Ano: %d, Status: %d\n", atual->id, atual->titulo, atual->autor, atual->categoria, atual->ano, atual->status == 1 ? "Disponível" : "Indisponível");
            return;
        }
        atual = atual->proximo;
    }
    printf("Livro não encontrado!\n");
}

void buscarLivroPorAutor(char* autor){}
void buscarLivroPorCategoria(char* categoria){}
void buscarLivroPorAno(int ano){}
void buscarLivroPorStatus(int status){}