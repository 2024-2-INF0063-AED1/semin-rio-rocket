#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "../include/usuario.h"

// Declaração do array de usuários
Usuario listaUsuarios[MAX_USUARIOS];

// Função para inicializar a lista de usuários com alguns dados iniciais
void inicializaUsuarios() {
    // Dados iniciais dos usuários
    Usuario listaUsuarios[] = {
        {1, "Julia Oliveira", "Rua GitHub", "1234567891"},
        {2, "Diogo Quintão", "Avenida GitLab", "1234567891"},
        {3, "Lucas Pereira", "Praça Git", "1234567891"}
    };
    
    // Calcula o número de usuários iniciais
    int numlistaUsuarios = sizeof(listaUsuarios) / sizeof(listaUsuarios[0]);
    // Copia os dados iniciais para a lista de usuários
    for (int i = 0; i < numlistaUsuarios && i < MAX_USUARIOS; i++) {
        listaUsuarios[i] = listaUsuarios[i];
    }
}

// Função para criar um novo usuário
bool cria_usuario() {
    int numUsuarios = 0;
    // Conta o número de usuários existentes
    while (numUsuarios < MAX_USUARIOS && listaUsuarios[numUsuarios].id != 0) {
        numUsuarios++;
    }
    
    // Verifica se o limite de usuários foi atingido
    if (numUsuarios >= MAX_USUARIOS) {
        printf("Limite de usuários atingido!\n");
        return false;
    }

    // Cria um novo usuário
    Usuario novoUsuario;
    printf("Digite o ID do novo usuário: ");
    scanf("%d", &novoUsuario.id);
    
    printf("Digite o nome: ");
    scanf(" %[^\n]", novoUsuario.nome);
    
    printf("Digite o telefone: ");
    scanf(" %[^\n]", novoUsuario.telefone);
    
    printf("Digite o endereço: ");
    scanf(" %[^\n]", novoUsuario.endereco);
    
    // Adiciona o novo usuário à lista
    listaUsuarios[numUsuarios] = novoUsuario;
    return true;
}

// Função para exibir todos os usuários
void exibe_usuario() {
    int numUsuarios = 0;
    // Conta o número de usuários existentes
    while (numUsuarios < MAX_USUARIOS && listaUsuarios[numUsuarios].id != 0) {
        numUsuarios++;
    }
    printf("Número de usuários: %d\n", numUsuarios);

    // Exibe os dados de cada usuário
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

// Função para verificar se um usuário está cadastrado
bool usuario_cadastrado(int codUsuario) {
    if (codUsuario <= 0 || codUsuario > MAX_USUARIOS) {
        return false;
    }
    return listaUsuarios[codUsuario - 1].id > 0;
}

// Função para selecionar um usuário pelo ID
bool seleciona_usuario(int codUsuario) {
    if (usuario_cadastrado(codUsuario)) {
        printf("\nBem Vindo(a), %s\n\n", listaUsuarios[codUsuario - 1].nome);
        return true;
    } else {
        return false;
    }
}

// Função para atualizar os dados de um usuário
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

// Função para remover um usuário
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