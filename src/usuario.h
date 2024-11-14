#ifndef USUARIO_H
#define USUARIO_H

typedef struct {
    int id;               
    char nome[100];       
    char endereco[150];   
    char telefone[15];    
} Usuario;

void exibe_usuario();

void atualiza_usuario();

void remove_usuario();

#endif 
