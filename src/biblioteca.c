#include <stdio.h>
#include <string.h>
#include "biblioteca.h"

Livro biblioteca[MAX_LIVROS];
int contadorLivros = 0;

void adicionarLivro() {
    if (contadorLivros >= MAX_LIVROS) {
        printf("Capacidade máxima de livros atingida!\n");
        return;
    }

    printf("Qual o nome do livro?\n");
    fgets(biblioteca[contadorLivros].nome, 100, stdin);
    strtok(biblioteca[contadorLivros].nome, "\n");

    printf("Qual o autor do livro?\n");
    fgets(biblioteca[contadorLivros].autor, 100, stdin);
    strtok(biblioteca[contadorLivros].autor, "\n");

    printf("Qual o ano de lançamento do livro?\n");
    scanf("%d", &biblioteca[contadorLivros].ano);
    while (getchar() != '\n'); // Limpa o buffer do stdin

    strcpy(biblioteca[contadorLivros].status, "Disponível");
    contadorLivros++;
    printf("Livro adicionado com sucesso!\n");
}

void removerLivro() {
    int indice;

    if (contadorLivros == 0) {
        printf("Nenhum livro para remover!\n");
        return;
    }

    printf("Digite o número do livro a ser removido (1 a %d): ", contadorLivros);
    scanf("%d", &indice);
    while (getchar() != '\n'); // Limpa o buffer do stdin

    if (indice < 1 || indice > contadorLivros) {
        printf("Índice inválido!\n");
        return;
    }

    for (int i = indice - 1; i < contadorLivros - 1; i++) {
        biblioteca[i] = biblioteca[i + 1];
    }

    contadorLivros--;
    printf("Livro removido com sucesso!\n");
}

void listarLivros() {
    if (contadorLivros == 0) {
        printf("Nenhum livro cadastrado!\n");
        return;
    }

    printf("Listando todos os livros...\n");
    for (int i = 0; i < contadorLivros; i++) {
        printf("Livro %d: %s, Autor: %s, Ano: %d\n, Disponibilidade: %s\n",
               i + 1, biblioteca[i].nome,
               biblioteca[i].autor, biblioteca[i].ano, biblioteca[i].status);
    }
}

void inicializarLivros() {
    Livro livrosIniciais[] = {
        {"O Senhor dos Anéis", "J.R.R. Tolkien", "Fantasia", 1954, "Disponível"},
        {"Harry Potter e a Pedra Filosofal", "J.K. Rowling", "Fantasia", 1997, "Disponível"},
        {"Dom Quixote", "Miguel de Cervantes", "Clássico", 1605, "Disponível"},
        {"Orgulho e Preconceito", "Jane Austen", "Romance", 1813, "Disponível"},
        {"O Apanhador no Campo de Centeio", "J.D. Salinger", "Ficção", 1951, "Disponível"},
        {"1984", "George Orwell", "Distopia", 1949, "Disponível"}
    };

    int numLivros = sizeof(livrosIniciais) / sizeof(livrosIniciais[0]);
    for (int i = 0; i < numLivros && contadorLivros < MAX_LIVROS; i++) {
        biblioteca[contadorLivros++] = livrosIniciais[i];
    }
}