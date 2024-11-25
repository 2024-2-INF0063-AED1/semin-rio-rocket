#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

typedef struct Livro {
    int id;
    char titulo[100];
    char autor[100];
    char categoria[100];
    int ano;
    int status; // 1 para disponível, 0 para emprestado
    struct Livro *proximo;
} Livro;

extern Livro* listaLivros;

void inicializarLivros();
void adicionarLivro(int id, char* titulo, char* autor, char* categoria, int ano, int status);
void atualizarLivro(int id, char* titulo, char* autor, char* categoria, int ano, int status);
void removerLivro(int id);
void listarLivros();
void buscarLivroPorId(int id);
void buscarLivroPorTitulo(char* titulo);
void buscarLivroPorAutor(char* autor);
void buscarLivroPorCategoria(char* categoria);
void buscarLivroPorAno(int ano);
void buscarLivroPorStatus(int status);


#endif