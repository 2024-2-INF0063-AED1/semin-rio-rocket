#include <stdlib.h>
#include "unity.h"
#include "usuario.h"
#include <string.h>

void setUp(void) {
    inicializaUsuarios();
}

void tearDown(void) {
    // Se necessário, adicione código para limpar após cada teste
}

void test_inicializaUsuarios(void) {
    TEST_ASSERT_EQUAL_INT(1, listaUsuarios[0].id);
    TEST_ASSERT_EQUAL_STRING("Julia Oliveira", listaUsuarios[0].nome);
    TEST_ASSERT_EQUAL_STRING("Rua GitHub", listaUsuarios[0].endereco);
    TEST_ASSERT_EQUAL_STRING("1234567891", listaUsuarios[0].telefone);

    TEST_ASSERT_EQUAL_INT(2, listaUsuarios[1].id);
    TEST_ASSERT_EQUAL_STRING("Diogo Quintão", listaUsuarios[1].nome);
    TEST_ASSERT_EQUAL_STRING("Avenida GitLab", listaUsuarios[1].endereco);
    TEST_ASSERT_EQUAL_STRING("1234567891", listaUsuarios[1].telefone);

    TEST_ASSERT_EQUAL_INT(3, listaUsuarios[2].id);
    TEST_ASSERT_EQUAL_STRING("Lucas Pereira", listaUsuarios[2].nome);
    TEST_ASSERT_EQUAL_STRING("Praça Git", listaUsuarios[2].endereco);
    TEST_ASSERT_EQUAL_STRING("1234567891", listaUsuarios[2].telefone);
}

void test_cria_usuario(void) {
    bool criado = cria_usuario(4, "Ana Silva", "Rua Bitbucket", "9876543210");
    TEST_ASSERT_TRUE(criado);
    TEST_ASSERT_EQUAL_INT(4, listaUsuarios[3].id);
    TEST_ASSERT_EQUAL_STRING("Ana Silva", listaUsuarios[3].nome);
    TEST_ASSERT_EQUAL_STRING("Rua Bitbucket", listaUsuarios[3].endereco);
    TEST_ASSERT_EQUAL_STRING("9876543210", listaUsuarios[3].telefone);
}

void test_remove_usuario(void) {
    remove_usuario(1);
    TEST_ASSERT_EQUAL_INT(0, listaUsuarios[0].id);
}

void test_buscar_usuario_por_id(void) {
    Usuario *usuario = buscar_usuario_por_id(2);
    TEST_ASSERT_NOT_NULL(usuario);
    TEST_ASSERT_EQUAL_INT(2, usuario->id);
    TEST_ASSERT_EQUAL_STRING("Diogo Quintão", usuario->nome);
}

void test_atualiza_usuario(void) {
    atualiza_usuario(3, "Lucas Pereira", "Praça GitHub", "1234567890");
    Usuario *usuario = buscar_usuario_por_id(3);
    TEST_ASSERT_NOT_NULL(usuario);
    TEST_ASSERT_EQUAL_STRING("Praça GitHub", usuario->endereco);
    TEST_ASSERT_EQUAL_STRING("1234567890", usuario->telefone);
}

int main(void) {
    UNITY_BEGIN();
    
    RUN_TEST(test_inicializaUsuarios);
    RUN_TEST(test_cria_usuario);
    RUN_TEST(test_remove_usuario);
    RUN_TEST(test_buscar_usuario_por_id);
    RUN_TEST(test_atualiza_usuario);
    
    return UNITY_END();
}