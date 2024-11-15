#include <stdio.h>
#include <windows.h>
#include "biblioteca.h"
#include "usuario.h"

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int opcao;
    inicializarLivros();

    while (1) { 
        printf("----------------------------------------------------------\n");
        printf("Seja Bem-vindo ao Gerenciador de Livros para Bibliotecas!\n");
        printf("----------------------------------------------------------\n\n");
        printf("Escolha uma opção:\n");
        printf("----------------------------------------------------------\n");
        printf("Digite 1 para acessar conta de usuário\n");
        printf("Digite 2 para acessar conta de bibliotecário\n");
        printf("Digite 0 para sair\n");
        printf("----------------------------------------------------------\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("Acessando conta de usuário...\n");
            break; 
        }
        else if (opcao == 2) {
            printf("Acessando conta de bibliotecário...\n\n");
            
            while (1) {
                printf("Escolha uma opção:\n");
                printf("Digite 1 para adicionar um livro\n");
                printf("Digite 2 para remover um livro\n");
                printf("Digite 3 para listar todos os livros\n");
                printf("Digite 0 para sair\n");

                printf("\nEscolha uma opção:");
                scanf("%d", &opcao);
                while (getchar() != '\n'); // Limpa o buffer do stdin

                switch (opcao) {
                    case 1:
                        adicionarLivro();
                        printf("\n");
                        break;
                    case 2:
                        removerLivro();
                        printf("\n");
                        break;
                    case 3:
                        listarLivros();
                        printf("\n");
                        break;
                    case 0:
                        printf("Saindo...\n");
                        return 0;
                    default:
                        printf("Opção inválida! Tente novamente.\n");
                        printf("\n");
                }
            }
        }
        else if (opcao == 0) {
            printf("Saindo...\n");
            return 0;
        }
        else {
            printf("Opção inválida! Tente novamente.\n");
            printf("\n");
        }
    }

    return 0;
}
