# Gerenciador de livros para bibliotecas (Biblioteca Manager)

## Autores 
- **Diogo de Paula Quintão** (202207108)
- **Júlia Oliveira Cardoso da Silva** (202206128)
- **Lucas Pereira Brito** (202201649)
  
## Resumo
Este relatório apresenta o desenvolvimento de um sistema de gerenciamento de livros para bibliotecas, utilizando a linguagem de programação C. O projeto visa facilitar consultas e organização do acervo, atendendo a uma necessidade crescente de eficiência, especialmente em bibliotecas públicas, como a Biblioteca Nacional, que recentemente recebeu um investimento significativo para modernização. Técnicas como listas e árvores binárias são aplicadas para otimizar buscas e cadastros.

## Palavras-chave
Árvores Binárias, Biblioteca, C, Gerenciamento, Organização de Acervo

## Introdução
### Problema
O Biblioteca Manager é um sistema desenvolvido para facilitar o gerenciamento de acervos bibliográficos em bibliotecas. Com o crescimento contínuo da quantidade de livros e a necessidade de organização eficaz, as bibliotecas enfrentam desafios como controle de inventário, gestão de empréstimos e facilidade de acesso à informação. Este projeto busca oferecer uma solução intuitiva e eficiente para melhorar a administração de acervos, otimizando o processo de cadastro, consulta, empréstimo e devolução de livros.

### Dataset
O sistema não depende de um dataset pré-existente, mas permitirá o cadastro dinâmico de livros pelos usuários. Cada entrada incluirá campos como:  
- Título  
- Autor  
- Gênero  
- Código de identificação (ID)  
- Status de empréstimo
### Métodos
Os métodos revisados incluirão:
Serão utilizados listas para armazenagem de usuário e livros. Além disso, iremos estudar os métodos de ordenação para verificar qual seria o mais eficiente para o nosso projeto.


Esses dados serão armazenados em listas ou árvores binárias para facilitar a consulta.

## Fundamentos téoricos
 O **Biblioteca Manager** foi desenvolvido com base em técnicas e algoritmos fundamentais da programação, utilizando a linguagem C para garantir eficiência no controle de memória e no processamento das operações. A seguir, são descritos os principais mecanismos e técnicas utilizadas, bem como as formas de avaliação do sistema:
 

## Metodologia

| **Etapa**                         | **Descrição**                                                                                                           |
|------------------------------------|-------------------------------------------------------------------------------------------------------------------------|
| **1. Planejamento e Levantamento de Requisitos** | - Análise de problemas comuns no gerenciamento de acervos e empréstimos.                                               |
|                                      | - Definição de funcionalidades essenciais do sistema:                                                                  |
|                                      |   - Cadastro de livros;                                                                                                |
|                                      |   - Classificação por categorias (e.g., ficção, ciência, história);                                                    |
|                                      |   - Empréstimo e devolução de livros;                                                                                  |
|                                      |   - Consulta e busca por título ou autor.                                                                              |
| **2. Definição das Estruturas de Dados**       | - Uso de **structs** para modelar as informações:                                                                      |
|                                      |   - **Livro**: armazena título, autor, categoria, status (disponível/indisponível) e identificador único (ID).          |
|                                      |   - **Usuário**: contém nome e identificador do usuário.                                                               |
|                                      | - Implementação de uma lista de livros para gerenciar o acervo da biblioteca.                                          |
| **3. Desenvolvimento do Sistema**             | - Implementação em C, focando em eficiência e controle de memória.                                                    |
|                                      | - Desenvolvimento das seguintes funcionalidades:                                                                       |
|                                      |   - **Adicionar Livro**: cadastro de novos livros;                                                                     |
|                                      |   - **Listar Livros por Categoria**: exibe livros disponíveis em uma categoria específica;                             |
|                                      |   - **Empréstimo de Livro**: permite que usuários solicitem empréstimos, alterando o status para indisponível;          |
|                                      |   - **Devolução de Livro**: registra a devolução, tornando o livro disponível novamente;                               |
|                                      |   - **Busca de Livros**: consulta livros por título ou autor.                                                          |
| **4. Testes e Validação**                     | - Realização de testes para validar as funcionalidades em diferentes cenários:                                         |
|                                      |   - Cadastro, consulta, empréstimo e devolução de livros;                                                              |
|                                      |   - Busca de livros por critérios variados (título e autor).                                                           |




## Instalação

1. Clone o repositório:
    ```bash
    git clone https://github.com/2024-2-INF0063-AED1/semin-rio-rocket.git
    ```
2. Acesse o diretório do projeto:
    ```bash
    cd semin-rio-rocket
    ```
## Contribuição

1. Faça um fork do projeto.
2. Crie uma nova branch:
    ```bash
    git checkout -b feature/nova-funcionalidade
    ```
3. Faça as alterações desejadas e commit:
    ```bash
    git commit -m 'Adiciona nova funcionalidade'
    ```
4. Envie para o repositório remoto:
    ```bash
    git push origin feature/nova-funcionalidade
    ```
5. Abra um Pull Request.
## Licença

Este projeto está licenciado sob a Licença MIT - veja o arquivo [LICENSE](LICENCE) para mais detalhes.
