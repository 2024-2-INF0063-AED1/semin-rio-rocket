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

### Literatura

Nesta seção, Apresentamos três fontes relevantes que fundamentam o desenvolvimento do sistema gerenciador de livros, destacando informações técnicas e inspiracionais.

Investimentos na Biblioteca Nacional: Impulsionando o Acesso à Informação
- Descrição: O artigo publicado pela Agência Brasil aborda os investimentos de R$ 30 milhões destinados à Biblioteca Nacional em 2023. O objetivo dos recursos é modernizar as instalações, ampliar o acesso ao acervo e priorizar iniciativas como digitalização e preservação de obras históricas.
- Contribuição para o tema: Esta fonte inspira a implementação de melhorias em bibliotecas digitais, destacando a relevância de um sistema robusto que facilite o acesso e a gestão de acervos. As iniciativas mencionadas alinham-se com os objetivos do projeto, especialmente no que diz respeito à organização e acessibilidade dos conteúdos.

Algoritmos de Ordenação em Python, Java e C: Otimização no Gerenciamento de Dados
- Descrição: Publicado no site FreeCodeCamp, o artigo apresenta explicações detalhadas sobre algoritmos de ordenação, como Bubble Sort, Quick Sort e Merge Sort, com exemplos práticos em Python, Java e C.
- Contribuição para o tema: Fornece embasamento técnico para otimizar a organização de dados no sistema gerenciador de livros. Aplicações diretas incluem a ordenação de listas de livros, usuários e funcionários, garantindo maior eficiência no processamento e na recuperação de informações.

Sistema de Gerenciamento para Biblioteca: Uma Abordagem Acadêmica
- Descrição: Este Trabalho de Conclusão de Curso, elaborado por Giovanne Marangoni Martins, explora o desenvolvimento de um sistema de gerenciamento para bibliotecas. Entre as funcionalidades destacadas estão o cadastro de livros, controle de empréstimos e devoluções, além da organização do acervo.
- Contribuição para o tema: A pesquisa oferece insights práticos para o desenvolvimento de sistemas similares, servindo como referência para funcionalidades essenciais no gerenciamento de bibliotecas, como as relacionadas ao controle de fluxos e organização de registros.

Análise comparativa:

As três fontes se complementam ao unir perspectivas inspiracionais, técnicas e práticas. Enquanto a modernização da Biblioteca Nacional ressalta a importância de um sistema eficiente e acessível, o artigo do FreeCodeCamp contribui com a base técnica para otimizar o desempenho do sistema. O trabalho acadêmico, por sua vez, apresenta funcionalidades práticas, criando um guia direto para a implementação de um gerenciador de bibliotecas. Essa integração sustenta o desenvolvimento do projeto em múltiplos níveis.

### Dataset
O sistema não depende de um dataset pré-existente, mas permitirá o cadastro dinâmico de livros pelos usuários. Cada entrada incluirá campos como:  
- Título  
- Autor  
- Gênero  
- Código de identificação (ID)  
- Status de empréstimo
  
Esses dados serão armazenados em listas para facilitar a consulta.
### Métodos
Os métodos revisados incluirão:
Serão utilizados listas para armazenagem de usuário e livros. Além disso, iremos estudar os métodos de ordenação para verificar qual seria o mais eficiente para o nosso projeto.
### Avaliação
Os resultados serão medidos utilizando métricas como:
- Complexidade Temporal: Analisando o tempo necessário para operações como inserção, remoção e busca em diferentes estruturas.
- Uso da Memória: Avaliando a eficiência do uso da memória pelas estruturas implementadas.
Essas métricas permitirão uma avaliação abrangente da eficácia do gerenciador de livros proposto sob a perspectiva das estruturas de dados.

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


## Referências

AGÊNCIA BRASIL. Biblioteca Nacional receberá este ano investimentos de R$ 30 milhões. Agência Brasil, Brasília, 2023. Disponível em: https://agenciabrasil.ebc.com.br/geral/noticia/2023-05/biblioteca-nacional-recebera-este-ano-investimentos-de-r-30-milhoes. Acesso em: 20 de novembro de 2024. 

FREECODECAMP. Algoritmos de ordenação explicados com exemplos em Python, Java e C. FreeCodeCamp, 2023. Disponível em: https://www.freecodecamp.org/portuguese/news/algoritmos-de-ordenacao-explicados-com-exemplos-em-python-java-e-c/.1 Acesso em: 21 de novembro de 2024.

MARTINS, Giovanne Marangoni. Sistema de gerenciamento para biblioteca. 2015. Trabalho de Conclusão de Curso (Tecnologia em Análise e Desenvolvimento de Sistemas) - Fundação Educacional do Município de Assis, Assis, 2015.


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
