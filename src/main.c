#include <stdio.h>
#include <windows.h>
#include "biblioteca.h"
#include "usuario.h"

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int opcao;
    printf("----------------------------------------------------------\n");
    printf("Seja Bem-vindo ao Gerenciador de Livros para Bibliotecas!\n");
    printf("----------------------------------------------------------\n\n");
    printf("Escolha uma opção:\n");
    printf("----------------------------------------------------------\n");
    printf("Digite 1 para acessar conta de usuário\n");
    printf("Digite 2 para acessar conta de bibliotecário\n");
    printf("Digite 0 para sair\n");
    printf("----------------------------------------------------------\n");
    scanf("%d", &opcao);
    inicializarLivros();
    if (opcao == 1) {
        printf("Acessando conta de usuário...\n");
    } else if (opcao == 2) {
        printf("Acessando conta de bibliotecário...\n\n");
        printf("Escolha uma opção:\n");
        printf("Digite 1 para adicionar um livro\n");
        printf("Digite 2 para remover um livro\n");
        printf("Digite 3 para listar todos os livros\n");
        printf("Digite 0 para sair\n");

        while (1) {
            printf("\nEscolha uma opção: ");
            scanf("%d", &opcao);
            while (getchar() != '\n'); // Limpa o buffer do stdin

            switch (opcao) {
                case 1:
                    adicionarLivro();
                    break;
                case 2:
                    removerLivro();
                    break;
                case 3:
                    listarLivros();
                    break;
                case 0:
                    printf("Saindo...\n");
                    return 0;
                default:
                    printf("Opção inválida! Tente novamente.\n");
            }
        }
    } else if (opcao == 0) {
        printf("Saindo...\n");
        return 0;
    } else {
        printf("Opção inválida! Tente novamente.\n");
    }

    return 0;
}