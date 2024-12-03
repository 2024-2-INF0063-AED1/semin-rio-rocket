# Nome do executável principal
TARGET = gerenciador_de_livros

# Diretórios
SRC_DIR = src
INCLUDE_DIR = include
TEST_DIR = tests
UNITY_DIR = $(TEST_DIR)/Unity

# Compilador e flags
CC = gcc
CFLAGS = -Wall -Wextra -I$(INCLUDE_DIR) -I$(UNITY_DIR) -std=c99 -g

# Arquivos fonte do projeto
SRCS = $(SRC_DIR)/main.c $(SRC_DIR)/biblioteca.c $(SRC_DIR)/usuario.c
OBJS = $(SRCS:.c=.o)

# Arquivos de teste
TEST_SRCS = $(TEST_DIR)/test_biblioteca.c $(TEST_DIR)/test_usuario.c $(UNITY_DIR)/unity.c
TEST_OBJS = $(TEST_SRCS:.c=.o)

# Nome do executável de testes
TEST_TARGET = run_tests

# Detectar o sistema operacional
ifeq ($(OS),Windows_NT)
    RM = del /Q
    SEP = \\
    RUN_TESTS = $(TEST_TARGET).exe
else
    RM = rm -f
    SEP = /
    RUN_TESTS = ./$(TEST_TARGET)
endif

# Regra padrão
all: $(TARGET)

# Compilação do executável principal
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

# Compilação dos arquivos objeto
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Regra para executar o programa principal
run: $(TARGET)
	./$(TARGET)

# Compilação e execução dos testes
test: $(TEST_OBJS) $(OBJS)
	$(CC) $(CFLAGS) -o $(TEST_TARGET) $^
	$(RUN_TESTS)

# Limpar arquivos compilados
clean:
	-$(RM) $(subst /,$(SEP),$(OBJS)) $(subst /,$(SEP),$(TEST_OBJS)) $(TARGET) $(RUN_TESTS)

# Limpar apenas os testes
clean-tests:
	-$(RM) $(subst /,$(SEP),$(TEST_OBJS)) $(RUN_TESTS)
