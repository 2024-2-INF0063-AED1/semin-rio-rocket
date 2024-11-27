#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include "biblioteca.h"
#include "usuario.h"

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    int opcao;
    inicializaUsuarios();
    inicializarLivros();

    while (1)
    {
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

        if (scanf("%d", &opcao) != 1)
        { // Verifica se a entrada é válida
            while (getchar() != '\n')
                ; // Limpa o buffer do stdin
            printf("Entrada inválida! Tente novamente.\n");
            continue;
        }

        switch (opcao)
        {
        case 1:
            while (1)
            {
                printf("Digite 1 para criar uma conta de usuário\n");
                printf("Digite 2 para acessar uma conta de usuário\n");
                printf("Digite 0 para sair\n");
                printf("\nEscolha uma opção: ");

                if (scanf("%d", &opcao) != 1)
                {
                    while (getchar() != '\n')
                        ;
                    printf("Entrada inválida! Tente novamente.\n");
                    continue;
                }

                switch (opcao)
                {
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
            while (1)
            {
                printf("Acessando conta de bibliotecário...\n\n");
                printf("Escolha uma opção:\n");
                printf("Digite 1 para adicionar um livro\n");
                printf("Digite 2 para remover um livro\n");
                printf("Digite 3 para listar todos os livros\n");
                printf("Digite 4 para buscar um livro por ID\n");
                printf("Digite 5 para buscar um livro por título\n");
                printf("Digite 6 para buscar um livro por autor\n");
                printf("Digite 7 para buscar um livro por categoria\n");
                printf("Digite 8 para buscar um livro por ano\n");
                printf("Digite 9 para buscar um livro por status\n");
                printf("Digite 0 para sair\n");
                printf("\nEscolha uma opção: ");

                if (scanf("%d", &opcao) != 1)
                {
                    while (getchar() != '\n')
                        ;
                    printf("Entrada inválida! Tente novamente.\n");
                    continue;
                }

                switch (opcao)
                {
                case 1:
                {
                    int id, ano, status;
                    char titulo[100], autor[100], categoria[100];
                    printf("Digite o ID do livro: ");
                    while (scanf("%d", &id) != 1 || id <= 0)
                    {
                        while (getchar() != '\n')
                            ;
                        printf("ID inválido. Digite um número positivo: ");
                    }
                    while (getchar() != '\n')
                        ;
                    printf("Digite o título do livro: ");
                    scanf(" %[^\n]", titulo);
                    printf("Digite o autor do livro: ");
                    scanf(" %[^\n]", autor);
                    printf("Digite a categoria do livro: ");
                    scanf(" %[^\n]", categoria);
                    printf("Digite o ano do livro: ");
                    while (scanf("%d", &ano) != 1 || ano <= 0)
                    {
                        while (getchar() != '\n')
                            ;
                        printf("Ano inválido. Digite um número positivo: ");
                    }
                    printf("Digite o status do livro (1 para disponível, 0 para emprestado): ");
                    while (scanf("%d", &status) != 1 || (status != 0 && status != 1))
                    {
                        while (getchar() != '\n')
                            ;
                        printf("Status inválido. Digite 0 ou 1: ");
                    }
                    adicionarLivro(id, titulo, autor, categoria, ano, status);
                    break;
                }
                case 2:
                {
                    int id;
                    printf("Digite o ID do livro a ser removido: ");
                    while (scanf("%d", &id) != 1 || id <= 0)
                    {
                        while (getchar() != '\n')
                            ;
                        printf("ID inválido. Digite um número positivo: ");
                    }
                    removerLivro(id);
                    break;
                }

                case 3:
                {
                    if (listaLivros == NULL)
                    {
                        printf("A lista de livros está vazia.\n");
                    }
                    else
                    {
                        listarLivros();
                    }
                    break;
                }
                case 4:
                {
                    int id;
                    printf("Digite o ID do livro a ser buscado: ");
                    while (scanf("%d", &id) != 1 || id <= 0)
                    {
                        while (getchar() != '\n')
                            ;
                        printf("ID inválido. Digite um número positivo: ");
                    }
                    buscarLivroPorId(id);
                    break;
                }
                case 5:
                {
                    char titulo[100];
                    printf("Digite o título do livro a ser buscado: ");
                    while (getchar() != '\n')
                        ;
                    scanf(" %[^\n]", titulo);
                    buscarLivroPorTitulo(titulo);
                    break;
                }
                case 6:
                {
                    char autor[100];
                    printf("Digite o autor do livro a ser buscado: ");
                    while (getchar() != '\n')
                        ;
                    scanf(" %[^\n]", autor);
                    buscarLivroPorAutor(autor);
                    break;
                }
                case 7:
                {
                    char categoria[100];
                    printf("Digite a categoria do livro a ser buscado: ");
                    while (getchar() != '\n')
                        ;
                    scanf(" %[^\n]", categoria);
                    buscarLivroPorCategoria(categoria);
                    break;
                }
                case 8:
                {
                    int ano;
                    printf("Digite o ano do livro a ser buscado: ");
                    while (scanf("%d", &ano) != 1 || ano <= 0)
                    {
                        while (getchar() != '\n')
                            ;
                        printf("Ano inválido. Digite um número positivo: ");
                    }
                    buscarLivroPorAno(ano);
                    break;
                }
                case 9:
                {
                    int status;
                    printf("Digite o status do livro a ser buscado (1 para disponível, 0 para emprestado): ");
                    while (scanf("%d", &status) != 1 || (status != 0 && status != 1))
                    {
                        while (getchar() != '\n')
                            ;
                        printf("Status inválido. Digite 0 ou 1: ");
                    }
                    buscarLivroPorStatus(status);
                    break;
                }
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

            printf("Deseja selecionar um usuário?\n");
            printf("0 - Não\n1 - Sim\n");

            if (scanf("%d", &opcao) != 1) {
                while (getchar() != '\n');
                printf("Entrada inválida! Tente novamente.\n");
                continue;
            }
            
            if (opcao == 1) {
                printf("Digite o código do usuário: ");

                if (scanf("%d", &opcao) != 1) {
                    while (getchar() != '\n');
                    printf("Entrada inválida! Tente novamente.\n");
                    continue;
                }

                if (usuario_cadastrado(opcao)) {
                    seleciona_usuario(opcao);
                } else {
                    printf("Usuário inválido!\n\n");
                }
            }
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