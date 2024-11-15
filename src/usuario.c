#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "usuario.h"

Usuario listaUsuarios[MAX_USUARIOS];

void inicializaUsuarios() {
    listaUsuarios[0].id = 1;
    strcpy(listaUsuarios[0].nome, "Julia Oliveira");
    strcpy(listaUsuarios[0].telefone, "62999999999");
    strcpy(listaUsuarios[0].endereco, "Av c 5");

    listaUsuarios[1].id = 2;
    strcpy(listaUsuarios[1].nome, "Diogo Quintão");
    strcpy(listaUsuarios[1].telefone, "62988888888");
    strcpy(listaUsuarios[1].endereco, "Jao");

    listaUsuarios[2].id = 3;
    strcpy(listaUsuarios[2].nome, "Lucas Pereira");
    strcpy(listaUsuarios[2].telefone, "62977777777");
    strcpy(listaUsuarios[2].endereco, "Universitario");
}

bool cria_usuario(){
    int numUsuarios = sizeof(listaUsuarios) / sizeof(Usuario);
    if (numUsuarios >= MAX_USUARIOS ){
        return false;
    }else{
        return true;
    }

}

void exibe_usuario() {


}

void atualiza_usuario()
{
    // função atualizar usuario
}

void remove_usuario()
{
    // função remover usuario
}
