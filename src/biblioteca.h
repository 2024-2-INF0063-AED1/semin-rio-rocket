#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#define MAX_LIVROS 100

typedef struct {
    char nome[100];
    char autor[100];
    char categoria[100];
    int ano;
    char status[100];
} Livro;

extern Livro biblioteca[MAX_LIVROS];
extern int contadorLivros;

void adicionarLivro();
void removerLivro();
void listarLivros();
void inicializarLivros();

#endif