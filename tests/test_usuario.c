#include <stdlib.h>
#include "./Unity/unity.h"
#include "../include/usuario.h"
#include <string.h>

Usuario meusUsuarios[3];

void setUp(void) {
    inicializaUsuarios();
}

void tearDown(void) {
    // Se necessário, adicione código para limpar após cada teste
}

void inicializa() {
    Usuario meusUsuarios[] = {
        {1, "Julia Oliveira", "Rua GitHub", "1234567891"},
        {2, "Diogo Quintão", "Avenida GitLab", "1234567891"},
        {3, "Lucas Pereira", "Praça Git", "1234567891"}
    };    
}

void test_inicializaUsuarios(void) {
    TEST_ASSERT_EQUAL_INT(1, listaUsuarios[0].id);
}

int main(void) {
    UNITY_BEGIN();
    
    RUN_TEST(test_inicializaUsuarios);
    
    return UNITY_END();
}