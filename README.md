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
### Dataset
O sistema não depende de um dataset pré-existente, mas permitirá o cadastro dinâmico de livros pelos usuários. Cada entrada incluirá campos como:  
- Título  
- Autor  
- Gênero  
- Código de identificação (ID)  
- Status de empréstimo  

Esses dados serão armazenados em listas ou árvores binárias para facilitar a consulta.

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
