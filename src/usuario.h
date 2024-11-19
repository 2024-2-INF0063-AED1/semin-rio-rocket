#include <stdbool.h>

#ifndef USUARIO_H
#define USUARIO_H
#define MAX_USUARIOS 100

typedef struct {
    int id;               
    char nome[100];       
    char endereco[150];   
    char telefone[15];    
} Usuario;

extern Usuario listaUsuarios[MAX_USUARIOS];

void inicializaUsuarios ();

// Funções para manipulação de usuários
bool cria_usuario(); // Retorna true se o usuário foi criado com sucesso
void exibe_usuario();
void atualiza_usuario();
void remove_usuario();

#endif 
