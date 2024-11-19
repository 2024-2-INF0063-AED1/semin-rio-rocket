#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#define MAX_LIVROS 100

typedef struct {
    int id;
    char nome[100];
    char autor[100];
    char categoria[100];
    int ano;
    bool status; // 1 para disponível, 0 para emprestado
} Livro;

// Declaração do array de livros e contador global
extern Livro biblioteca[MAX_LIVROS];
extern int contadorLivros;

// Funções para manipulação da biblioteca
void adicionarLivro();
void removerLivro();
void listarLivros();
void inicializarLivros();

#endif