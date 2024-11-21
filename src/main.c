#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include "biblioteca.h"
#include "usuario.h"

#define TAMANHO_INICIAL_TABELA_HASH 20

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int opcao;
    inicializarTabelaHash(TAMANHO_INICIAL_TABELA_HASH);
    inicializaUsuarios();
    inicializarLivros();

    while (1) {
        printf("----------------------------------------------------------\n");
        printf("Seja Bem-vindo ao Gerenciador de Livros para Bibliotecas!\n");
        printf("----------------------------------------------------------\n\n");
        printf("Escolha uma opção:\n");
        printf("----------------------------------------------------------\n");
        printf("Digite 1 para acessar conta de usuário\n");
        printf("Digite 2 para acessar conta de bibliotecário\n");
        printf("Digite 3 para acessar a lista de usuários\n");
        printf("Digite 0 para sair\n");
        printf("----------------------------------------------------------\n");
        printf("Escolha uma opção: ");
        
        if (scanf("%d", &opcao) != 1) { // Verifica se a entrada é válida
            while (getchar() != '\n'); // Limpa o buffer do stdin
            printf("Entrada inválida! Tente novamente.\n");
            continue;
        }

        switch (opcao) {
            case 1:
                while (1) {
                    printf("Digite 1 para criar uma conta de usuário\n");
                    printf("Digite 2 para acessar uma conta de usuário\n");
                    printf("Digite 0 para sair\n");
                    printf("\nEscolha uma opção: ");

                    if (scanf("%d", &opcao) != 1) {
                        while (getchar() != '\n');
                        printf("Entrada inválida! Tente novamente.\n");
                        continue;
                    }

                    switch (opcao) {
                        case 1:
                            cria_usuario();
                            break;
                        case 2:
                            exibe_usuario();
                            break;
                        case 0:
                            printf("Saindo...\n");
                            return 0;
                        default:
                            printf("Opção inválida! Tente novamente.\n");
                    }
                }
                break;

            case 2:
                while (1) {
                    printf("Acessando conta de bibliotecário...\n\n");
                    printf("Escolha uma opção:\n");
                    printf("Digite 1 para adicionar um livro\n");
                    printf("Digite 2 para remover um livro\n");
                    printf("Digite 3 para listar todos os livros\n");
                    printf("Digite 0 para sair\n");
                    printf("\nEscolha uma opção: ");

                    if (scanf("%d", &opcao) != 1) {
                        while (getchar() != '\n');
                        printf("Entrada inválida! Tente novamente.\n");
                        continue;
                    }

                    switch (opcao) {
                        case 1: {
                            int id, ano, status;
                            char titulo[100], autor[100], categoria[100];
                            printf("Digite o ID do livro: ");
                            scanf("%d", &id);
                            printf("Digite o título do livro: ");
                            scanf(" %[^\n]", titulo);
                            printf("Digite o autor do livro: ");
                            scanf(" %[^\n]", autor);
                            printf("Digite a categoria do livro: ");
                            scanf(" %[^\n]", categoria);
                            printf("Digite o ano do livro: ");
                            scanf("%d", &ano);
                            printf("Digite o status do livro (1 para disponível, 0 para emprestado): ");
                            scanf("%d", &status);
                            adicionarLivro(id, titulo, autor, categoria, ano, status);
                            break;
                        }
                        case 2: {
                            int id;
                            printf("Digite o ID do livro a ser removido: ");
                            scanf("%d", &id);
                            removerLivro(id);
                            break;
                        }
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
                break;

            case 3:
                exibe_usuario();
                break;

            case 0:
                printf("Saindo...\n");
                return 0;

            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    }

    return 0;
}