#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "usuario.h"

Usuario listaUsuarios[MAX_USUARIOS];

void inicializaUsuarios() {
    Usuario usuariosIniciais[] = {
        {1, "Julia Oliveira", "Rua GitHub", "1234567891"},
        {2, "Diogo Quintão", "Avenida GitLab", "1234567891"},
        {3, "Lucas Pereira", "Praça Git", "1234567891"}
    };
    
    int numUsuariosIniciais = sizeof(usuariosIniciais) / sizeof(usuariosIniciais[0]);
    for (int i = 0; i < numUsuariosIniciais && i < MAX_USUARIOS; i++) {
        listaUsuarios[i] = usuariosIniciais[i];
    }
}

bool cria_usuario() {
    int numUsuarios = 0;
    while (numUsuarios < MAX_USUARIOS && listaUsuarios[numUsuarios].id != 0) {
        numUsuarios++;
    }
    
    if (numUsuarios >= MAX_USUARIOS) {
        printf("Limite de usuários atingido!\n");
        return false;
    }

    Usuario novoUsuario;
    printf("Digite o ID do novo usuário: ");
    scanf("%d", &novoUsuario.id);
    
    printf("Digite o nome: ");
    scanf(" %[^\n]", novoUsuario.nome);
    
    printf("Digite o telefone: ");
    scanf(" %[^\n]", novoUsuario.telefone);
    
    printf("Digite o endereço: ");
    scanf(" %[^\n]", novoUsuario.endereco);
    
    listaUsuarios[numUsuarios] = novoUsuario;
    return true;
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
    printf("\n");
}

bool usuario_cadastrado(int codUsuario) {
    if (codUsuario <= 0 || codUsuario > MAX_USUARIOS) {
        return false;
    }
    return listaUsuarios[codUsuario - 1].id > 0;
}

bool seleciona_usuario(int codUsuario) {
    if (usuario_cadastrado(codUsuario)) {
        printf("\nBem Vindo(a), %s\n\n", listaUsuarios[codUsuario - 1].nome);
        return true;
    } else {
        return false;
    }
}

void atualiza_usuario() {
    int codUsuario;
    printf("Digite o ID do usuário a ser atualizado: ");
    scanf("%d", &codUsuario);

    if (!usuario_cadastrado(codUsuario)) {
        return;
    }

    Usuario *usuario = &listaUsuarios[codUsuario - 1];

    printf("Atualizando informações de %s\n", usuario->nome);
    printf("Digite o novo nome (ou pressione Enter para manter): ");
    scanf(" %[^\n]", usuario->nome);

    printf("Digite o novo telefone: ");
    scanf(" %[^\n]", usuario->telefone);

    printf("Digite o novo endereço: ");
    scanf(" %[^\n]", usuario->endereco);

    printf("Informações atualizadas com sucesso!\n");
}

void remove_usuario() {
    int codUsuario;

    printf("Digite o ID do usuário a ser removido: ");
    scanf("%d", &codUsuario);

    if (!usuario_cadastrado(codUsuario)) {
        return;
    }

    Usuario *usuario = &listaUsuarios[codUsuario - 1];
    printf("Removendo usuário %s\n", usuario->nome);
    usuario->id = 0;
    printf("Usuário removido com sucesso!\n");
}