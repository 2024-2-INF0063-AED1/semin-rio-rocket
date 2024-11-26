#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

typedef enum {
    INDISPONIVEL = 0,
    DISPONIVEL = 1
} StatusLivro;
typedef struct Livro {
    int id;
    char titulo[100];
    char autor[100];
    char categoria[100];
    int ano;
    StatusLivro status;
    struct Livro *proximo;
} Livro;

extern Livro* listaLivros;

const char* obterStatusTexto(StatusLivro status);
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