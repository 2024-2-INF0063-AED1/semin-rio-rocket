#include <stdio.h>
#include <windows.h>
#include <string.h>

#define MAX_LIVROS 100

typedef struct
{
    char nome[100];
    char autor[100];
    int ano;
} Livro;

Livro biblioteca[MAX_LIVROS];
int contadorLivros = 0;

void adicionarLivro()
{
    if (contadorLivros >= MAX_LIVROS)
    {
        printf("Capacidade máxima de livros atingida!\n");
        return;
    }

    printf("Qual o nome do livro? ");
    scanf("%s", biblioteca[contadorLivros].nome);
    printf("Qual o autor do livro? ");
    scanf("%s", biblioteca[contadorLivros].autor);
    printf("Qual o ano de lançamento do livro? ");
    scanf("%d", &biblioteca[contadorLivros].ano);

    contadorLivros++;
    printf("Livro adicionado com sucesso!\n");
}

void removerLivro()
{
    printf("Removendo um livro...\n");
    // Lógica para remover um livro
}

void listarLivros()
{
    printf("Listando todos os livros...\n");
    for (int i = 0; i < contadorLivros; i++)
    {
        printf("Livro %d: %s, Autor: %s, Ano: %d\n", i + 1, biblioteca[i].nome, biblioteca[i].autor, biblioteca[i].ano);
    }
}

void livros(Livro livro1, Livro livro2, Livro livro3, Livro livro4, Livro livro5, Livro livro6);

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    int opcao;

    printf("Seja Bem-vindo ao Gerenciador de Livros para Bibliotecas!\n");
    printf("Digite 1 para adicionar um livro\n");
    printf("Digite 2 para remover um livro\n");
    printf("Digite 3 para listar todos os livros\n");
    printf("Digite 0 para sair\n");

    Livro livro1 = {"O Senhor dos Anéis", "J.R.R. Tolkien", 1954};
    Livro livro2 = {"Harry Potter e a Pedra Filosofal", "J.K. Rowling", 1997};
    Livro livro3 = {"Dom Quixote", "Miguel de Cervantes", 1605};
    Livro livro4 = {"Orgulho e Preconceito", "Jane Austen", 1813};
    Livro livro5 = {"O Apanhador no Campo de Centeio", "J.D. Salinger", 1951};
    Livro livro6 = {"1984", "George Orwell", 1949};

    livros(livro1, livro2, livro3, livro4, livro5, livro6);

    while (1)
    {
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
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

    return 0;
}

void livros(Livro livro1, Livro livro2, Livro livro3, Livro livro4, Livro livro5, Livro livro6)
{
    biblioteca[contadorLivros++] = livro1;
    biblioteca[contadorLivros++] = livro2;
    biblioteca[contadorLivros++] = livro3;
    biblioteca[contadorLivros++] = livro4;
    biblioteca[contadorLivros++] = livro5;
    biblioteca[contadorLivros++] = livro6;
}
