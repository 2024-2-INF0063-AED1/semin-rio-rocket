#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include "biblioteca.h"
#include "usuario.h"

#define SENHA_PADRAO "admin123"

void menuUsuario(int idUsuario)
{
    int opcao;
    while (1)
    {
        printf("\n=== Menu do Usuário ===\n");
        printf("1. Visualizar todos os livros\n");
        printf("2. Buscar livros\n");
        printf("3. Emprestar livro\n");
        printf("4. Devolver livro\n");
        printf("0. Voltar\n");
        printf("Escolha uma opção: ");

        if (scanf("%d", &opcao) != 1)
        {
            while (getchar() != '\n')
                ;
            printf("Entrada inválida!\n");
            continue;
        }

        switch (opcao)
        {
        case 1:
            listarLivros();
            break;
        case 2:
        {
            printf("\n=== Buscar Livros ===\n");
            printf("1. Buscar por título\n");
            printf("2. Buscar por autor\n");
            printf("3. Buscar por categoria\n");
            printf("0. Voltar\n");
            printf("Escolha uma opção: ");

            int opcaoBusca;
            scanf("%d", &opcaoBusca);

            char termo[100];
            switch (opcaoBusca)
            {
            case 1:
                printf("Digite o título: ");
                scanf(" %[^\n]", termo);
                buscarLivroPorTitulo(termo);
                break;
            case 2:
                printf("Digite o autor: ");
                scanf(" %[^\n]", termo);
                buscarLivroPorAutor(termo);
                break;
            case 3:
                printf("Digite a categoria: ");
                scanf(" %[^\n]", termo);
                buscarLivroPorCategoria(termo);
                break;
            }
            break;
        }
        case 3:
        {
            int idLivro;
            printf("Digite o ID do livro para empréstimo: ");
            scanf("%d", &idLivro);
            emprestarLivro(idLivro, idUsuario);
            break;
        }
        case 4:
        {
            int idLivro;
            printf("Digite o ID do livro para devolução: ");
            scanf("%d", &idLivro);
            devolverLivro(idLivro, idUsuario);
            break;
        }
        case 0:
            return;
        default:
            printf("Opção inválida!\n");
        }
    }
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    int opcao, idUsuario = 0;
    inicializaUsuarios();
    inicializarLivros();

    while (1)
    {
        printf("\n=== Sistema de Biblioteca ===\n");
        printf("1. Acessar como Usuário\n");
        printf("2. Acessar como Bibliotecário\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");

        if (scanf("%d", &opcao) != 1)
        {
            while (getchar() != '\n')
                ;
            printf("Entrada inválida!\n");
            continue;
        }

        switch (opcao)
        {
        case 1:
        {
            int opcaoUsuario;
            do
            {
                printf("\n=== Acesso de Usuário ===\n");
                printf("1. Login\n");
                printf("2. Cadastro\n");
                printf("3. Exibir usuários\n");
                printf("0. Voltar\n");
                printf("Escolha uma opção: ");

                scanf("%d", &opcaoUsuario);

                switch (opcaoUsuario)
                {
                case 1:
                {
                    printf("Digite seu ID: ");
                    scanf("%d", &idUsuario);
                    if (seleciona_usuario(idUsuario))
                    {
                        menuUsuario(idUsuario);
                    }
                    break;
                }
                case 2:
                    cria_usuario();
                    break;
                case 3:
                    exibe_usuario();
                    break;
                case 0:
                    break;
                default:
                    printf("Opção inválida!\n");
                }
            } while (opcaoUsuario != 0);
            break;
        }
        case 2:
        {
            int opcaoBibliotecario;
            char senha[10];
            printf("\n=== Acesso de Bibliotecário ===\n");
            printf("Digite a senha de acesso: ");
            scanf("%9s", &senha);

            if (strcmp(senha, SENHA_PADRAO) == 0)
            {
                do
                {
                    printf("\n=== Menu do Bibliotecário ===\n");
                    printf("1. Visualizar todos os livros\n");
                    printf("2. Buscar livros\n");
                    printf("3. Adicionar livro\n");
                    printf("4. Atualizar livro\n");
                    printf("5. Remover livro\n");
                    printf("6. Visualizar livros emprestados\n");
                    printf("0. Voltar\n");
                    printf("Escolha uma opção: ");

                    scanf("%d", &opcaoBibliotecario);

                    switch (opcaoBibliotecario)
                    {
                    case 1:
                        listarLivros();
                        break;
                    case 2:
                    {
                        printf("\n=== Buscar Livros ===\n");
                        printf("1. Buscar por título\n");
                        printf("2. Buscar por autor\n");
                        printf("3. Buscar por categoria\n");
                        printf("4. Buscar por ano\n");
                        printf("5. Buscar por status\n");
                        printf("0. Voltar\n");
                        printf("Escolha uma opção: ");

                        int opcaoBusca;
                        scanf("%d", &opcaoBusca);

                        char termo[100];
                        int ano, status;
                        switch (opcaoBusca)
                        {
                        case 1:
                            printf("Digite o título: ");
                            scanf(" %[^\n]", termo);
                            buscarLivroPorTitulo(termo);
                            break;
                        case 2:
                            printf("Digite o autor: ");
                            scanf(" %[^\n]", termo);
                            buscarLivroPorAutor(termo);
                            break;
                        case 3:
                            printf("Digite a categoria: ");
                            scanf(" %[^\n]", termo);
                            buscarLivroPorCategoria(termo);
                            break;
                        case 4:
                            printf("Digite o ano: ");
                            scanf("%d", &ano);
                            buscarLivroPorAno(ano);
                            break;
                        case 5:
                            printf("Digite o status (0 para indisponível, 1 para disponível): ");
                            scanf("%d", &status);
                            buscarLivroPorStatus(status);
                            break;
                        }
                        break;
                    }
                    case 3:
                    {
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
                        printf("Digite o status do livro (0 para indisponível, 1 para disponível): ");
                        scanf("%d", &status);
                        adicionarLivro(id, titulo, autor, categoria, ano, status);
                        break;
                    }
                    case 4:
                    {
                        int id, ano, status;
                        char titulo[100], autor[100], categoria[100];
                        printf("Digite o ID do livro: ");
                        scanf("%d", &id);
                        printf("Digite o novo título do livro: ");
                        scanf(" %[^\n]", titulo);
                        printf("Digite o novo autor do livro: ");
                        scanf(" %[^\n]", autor);
                        printf("Digite a nova categoria do livro: ");
                        scanf(" %[^\n]", categoria);
                        printf("Digite o novo ano do livro: ");
                        scanf("%d", &ano);
                        printf("Digite o novo status do livro (0 para indisponível, 1 para disponível): ");
                        scanf("%d", &status);
                        atualizarLivro(id, titulo, autor, categoria, ano, status);
                        break;
                    }
                    case 5:
                    {
                        int id;
                        printf("Digite o ID do livro para remoção: ");
                        scanf("%d", &id);
                        removerLivro(id);
                        break;
                    }
                    case 6:
                    {
                        StatusLivro status = INDISPONIVEL;
                        buscarLivroPorStatus(status);
                        break;
                    }
                    case 0:
                        break;
                    }
                } while (opcaoBibliotecario != 0);
            }
            else
            {
                printf("Senha inválida!\n");
            }
            break;
        }
        case 0:
            printf("Saindo...\n");
            return 0;
        default:
            printf("Opção inválida!\n");
        }
    }
    return 0;
}