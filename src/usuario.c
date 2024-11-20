#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "usuario.h"

Usuario listaUsuarios[MAX_USUARIOS];

void inicializaUsuarios() {
    Usuario usuariosIniciais[] = {
        {1, "Julia Oliveira", "1234567891", "Rua GitHub"},
        {2, "Diogo Quintão", "1234567891", "Avenida GitLab"},
        {3, "Lucas Pereira", "1234567891", "Praça Git"}
    };
    
    int numUsuariosIniciais = sizeof(usuariosIniciais) / sizeof(usuariosIniciais[0]);
    for (int i = 0; i < numUsuariosIniciais && i < MAX_USUARIOS; i++) {
        listaUsuarios[i] = usuariosIniciais[i];
    }
}

bool cria_usuario() {
    int numUsuarios = sizeof(listaUsuarios) / sizeof(Usuario);
    if (numUsuarios >= MAX_USUARIOS) {
        return false;
    } else {
        return true;
    }
}

void exibe_usuario() {
    int numUsuarios = 0;
    while (numUsuarios < MAX_USUARIOS && listaUsuarios[numUsuarios].id != 0) {
        numUsuarios++;
    }
    printf("Número de usuários: %d\n", numUsuarios);

    for (int i = 0; i < numUsuarios; i++) {
        if (listaUsuarios[i].id > 0) {
            printf("%d - ", listaUsuarios[i].id);
            printf("%s - ", listaUsuarios[i].nome);
            printf("%s - ", listaUsuarios[i].endereco);
            printf("%s - ", listaUsuarios[i].telefone);
            printf("\n");
        }
    }
}

void atualiza_usuario() {
    // função atualizar usuario
}

void remove_usuario() {
    // função remover usuario
}