#include <stdbool.h>

#ifndef USUARIO_H
#define USUARIO_H
#define MAX_USUARIOS 10

typedef struct {
    int id;               
    char nome[100];       
    char endereco[150];   
    char telefone[15];    
} Usuario;

extern Usuario listaUsuarios[MAX_USUARIOS];

void inicializaUsuarios ();

bool cria_usuario();

void exibe_usuario();

void atualiza_usuario();

void remove_usuario();

#endif 
