#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

typedef struct Livro {
    int id;
    char titulo[100];
    char autor[100];
    char categoria[100];
    int ano;
    int status; // 1 para disponível, 0 para emprestado
    struct Livro* proximo;
} Livro;

void inicializarTabelaHash(int tamanhoInicial);
void redimensionarTabelaHash();
void inicializarLivros();
Livro* criarLivro(int id, char* titulo, char* autor, char* categoria, int ano, int status);
void adicionarLivro(int id, char* titulo, char* autor, char* categoria, int ano, int status);
void atualizarLivro(int id, char* titulo, char* autor, char* categoria, int ano, int status);
void removerLivro(int id);
void listarLivros();

#endif