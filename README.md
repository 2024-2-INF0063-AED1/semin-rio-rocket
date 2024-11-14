# Gerenciador de livros para bibliotecas (Biblioteca Manager)

## Introdução
O **Biblioteca Manager** é um sistema desenvolvido para facilitar o gerenciamento de acervos bibliográficos em bibliotecas. Com o crescimento contínuo da quantidade de livros e a necessidade de organização eficaz, as bibliotecas enfrentam desafios como controle de inventário, gestão de empréstimos e facilidade de acesso à informação. Este projeto busca oferecer uma solução intuitiva e eficiente para melhorar a administração de acervos, otimizando o processo de cadastro, consulta, empréstimo e devolução de livros.

A implementação do **Biblioteca Manager** visa beneficiar bibliotecários, usuários e administradores, garantindo uma interface amigável e funcionalidades que simplificam a rotina da biblioteca, promovendo maior controle e organização.

## Fundamentos téoricos
 O **Biblioteca Manager** foi desenvolvido com base em técnicas e algoritmos fundamentais da programação, utilizando a linguagem C para garantir eficiência no controle de memória e no processamento das operações. A seguir, são descritos os principais mecanismos e técnicas utilizadas, bem como as formas de avaliação do sistema:
 

## Metodologia

Para o desenvolvimento do **Biblioteca Manager**, foram seguidos os seguintes passos:
1. Planejamento e Levantamento de Requisitos:
    - Inicialmente, foi realizada uma análise dos problemas comuns enfrentados pelas bibliotecas no gerenciamento de acervos e empréstimos. A partir dessa análise, foram identificadas as funcionalidades essenciais do sistema, tais como:
      - Cadastro de livros;
      - Classificação dos livros por categorias (por exemplo, ficção, ciência, história);
      - Empréstimo e devolução de livros;
      - Consulta e busca de livros por título ou autor.


2. Definição das Estruturas de Dados:
    - Para representar as informações dos livros e dos usuários, foram utilizadas estruturas de dados em C (structs). As principais estruturas definidas foram:
      - **Livro**: contendo informações como título, autor, categoria, status de disponibilidade e identificador único (ID).
      - **Usuário**: armazenando dados do usuário que efetua o empréstimo, como nome e identificador.
    - Além disso, foi criada uma lista de livros para armazenar o acervo da biblioteca.
3. Desenvolvimento do Sistema:
    - O sistema foi implementado utilizando a linguagem de programação C, escolhida devido à sua eficiência e controle de memória, o que permite o gerenciamento eficaz de dados.
    - Foram criadas funções para realizar as principais operações:
      - **Adicionar Livro**: permite o cadastro de novos livros no sistema.
      - **Listar Livros por Categoria**: apresenta os livros disponíveis em determinada categoria.
      - **Empréstimo de Livro**: permite que um usuário solicite o empréstimo de um livro, alterando seu status para indisponível.
      - **Devolução de Livro**: permite a devolução de um livro, tornando-o disponível novamente para empréstimo.
      - **Busca de Livros**: possibilita a consulta de livros por título ou autor.
4. Testes e Validação:
    O sistema foi testado em diferentes cenários para garantir o funcionamento correto das funcionalidades implementadas. Foram realizados testes de cadastro, consulta, empréstimo e devolução de livros, bem como testes de busca por diferentes critérios.
