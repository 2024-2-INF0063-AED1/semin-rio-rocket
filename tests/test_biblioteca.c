#include <stdlib.h>
#include "unity.h"
#include "biblioteca.h"
#include <string.h>

void setUp(void) {
    listaLivros = NULL;
    inicializarLivros();
}

void tearDown(void) {
    Livro *atual = listaLivros;
    while (atual != NULL) {
        Livro *temp = atual;
        atual = atual->proximo;
        free(temp);
    }
    listaLivros = NULL;
}

void test_inicializacao_biblioteca(void) {
    TEST_ASSERT_NOT_NULL(listaLivros);
    TEST_ASSERT_EQUAL_STRING("O Senhor dos Anéis", listaLivros->titulo);
    TEST_ASSERT_EQUAL_STRING("Dom Casmurro", listaLivros->proximo->titulo);
    TEST_ASSERT_EQUAL_STRING("O Pequeno Príncipe", listaLivros->proximo->proximo->titulo);
}

void test_adicionar_livro(void) {
    adicionarLivro(4, "1984", "George Orwell", "Distopia", 1949, 1);
    Livro *livro = buscarLivroPorTitulo("1984");
    TEST_ASSERT_NOT_NULL(livro);
    TEST_ASSERT_EQUAL_STRING("1984", livro->titulo);
    TEST_ASSERT_EQUAL_STRING("George Orwell", livro->autor);
}

void test_remover_livro(void) {
    removerLivro(1);
    Livro *livro = buscarLivroPorTitulo("O Senhor dos Anéis");
    TEST_ASSERT_NULL(livro);
}

void test_atualizar_livro(void) {
    atualizarLivro(2, "Dom Casmurro", "Machado de Assis", "Romance", 1899, 0);
    Livro *livro = buscarLivroPorTitulo("Dom Casmurro");
    TEST_ASSERT_NOT_NULL(livro);
    TEST_ASSERT_EQUAL_INT(0, livro->disponivel);
}

void test_buscar_livro_por_titulo(void) {
    Livro *livro = buscarLivroPorTitulo("O Pequeno Príncipe");
    TEST_ASSERT_NOT_NULL(livro);
    TEST_ASSERT_EQUAL_STRING("O Pequeno Príncipe", livro->titulo);
}

void test_emprestar_devolver_livro(void) {
    emprestarLivro(3);
    Livro *livro = buscarLivroPorTitulo("O Pequeno Príncipe");
    TEST_ASSERT_NOT_NULL(livro);
    TEST_ASSERT_EQUAL_INT(0, livro->disponivel);

    devolverLivro(3);
    livro = buscarLivroPorTitulo("O Pequeno Príncipe");
    TEST_ASSERT_NOT_NULL(livro);
    TEST_ASSERT_EQUAL_INT(1, livro->disponivel);
}

void test_verificar_emprestimo(void) {
    emprestarLivro(3);
    bool emprestado = verificarEmprestimo(3);
    TEST_ASSERT_TRUE(emprestado);

    devolverLivro(3);
    emprestado = verificarEmprestimo(3);
    TEST_ASSERT_FALSE(emprestado);
}

void test_buscar_por_status(void) {
    ListaLivros *disponiveis = buscarPorStatus(1);
    TEST_ASSERT_NOT_NULL(disponiveis);
    TEST_ASSERT_EQUAL_STRING("O Senhor dos Anéis", disponiveis->livro->titulo);
    TEST_ASSERT_EQUAL_STRING("Dom Casmurro", disponiveis->proximo->livro->titulo);
    TEST_ASSERT_EQUAL_STRING("O Pequeno Príncipe", disponiveis->proximo->proximo->livro->titulo);
}

int main(void) {
    UNITY_BEGIN();
    
    RUN_TEST(test_inicializacao_biblioteca);
    RUN_TEST(test_adicionar_livro);
    RUN_TEST(test_remover_livro);
    RUN_TEST(test_atualizar_livro);
    RUN_TEST(test_buscar_livro_por_titulo);
    RUN_TEST(test_emprestar_devolver_livro);
    RUN_TEST(test_verificar_emprestimo);
    RUN_TEST(test_buscar_por_status);
    
    return UNITY_END();
}