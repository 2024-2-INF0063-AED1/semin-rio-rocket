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
Os métodos revisados incluirão o uso de listas como estrutura principal para o armazenamento de usuários e livros no sistema. Paralelamente, será realizada uma análise detalhada de diferentes algoritmos de ordenação, como Bubble Sort, Quick Sort e Merge Sort, a fim de identificar aquele que oferece o melhor desempenho e eficiência para as necessidades específicas do projeto. Essa abordagem garantirá uma organização eficiente dos dados e um processamento otimizado dentro do sistema gerenciador.
### Avaliação
Os resultados serão medidos utilizando métricas como:
- Complexidade Temporal: Analisando o tempo necessário para operações como inserção, remoção e busca em diferentes estruturas.
- Uso da Memória: Avaliando a eficiência do uso da memória pelas estruturas implementadas.
Essas métricas permitirão uma avaliação abrangente da eficácia do gerenciador de livros proposto sob a perspectiva das estruturas de dados.

### Fundamentos Teóricos
O desenvolvimento do Biblioteca Manager foi fundamentado em conceitos de estruturas de dados, algoritmos de ordenação e técnicas de busca eficientes.

**2.1 Estruturas de Dados**
-Listas encadeadas: Utilizadas para armazenar e manipular dinamicamente os registros de livros e usuários. Sua flexibilidade permite inserções e exclusões sem necessidade de realocação de memória.
-Árvores Binárias de Busca (BST): Implementadas para otimizar buscas por títulos e autores. As BSTs garantem complexidade média de O(logn) para operações de busca, inserção e remoção.

**2.2 Algoritmos de Ordenação**
-Foram avaliados algoritmos clássicos como Bubble Sort, Quick Sort e Merge Sort, sendo o Quick Sort escolhido para ordenar livros por critérios como título ou autor, devido ao seu desempenho médio de O(nlogn).

**2.3 Gerenciamento de Memória em C**
-A linguagem C exige controle explícito de memória, o que implica na utilização de funções como malloc e free para alocação e desalocação dinâmica, garantindo eficiência no uso de recursos.

**2.4 Modelagem do Problema**
-Para atender aos requisitos de cadastro, empréstimo e organização do acervo, o sistema foi modelado com estruturas específicas:

**Livro**: Representado por uma struct contendo campos como título, autor, categoria, status de empréstimo e ID único.
**Usuário**: Struct que armazena informações pessoais e histórico de empréstimos.
Esses fundamentos garantem a base teórica para o desenvolvimento de um sistema robusto e eficiente.

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


---
## Fundamentos Teóricos
O desenvolvimento de sistemas para gerenciamento de bibliotecas tem se mostrado cada vez mais relevante diante do crescimento dos acervos bibliográficos e da necessidade de organizar e facilitar o acesso à informação. Nesse contexto, o Biblioteca Manager busca oferecer uma solução tecnológica que promova eficiência, acessibilidade e modernização no controle de acervos. A fundamentação teórica deste projeto é alicerçada em três principais pilares: investimentos em modernização, otimização técnica e práticas consolidadas em sistemas de bibliotecas.

### Modernização e Acessibilidade em Bibliotecas
Os investimentos recentes na Biblioteca Nacional, conforme destacado pela Agência Brasil, evidenciam a importância de iniciativas voltadas à modernização e digitalização de acervos. Recursos aplicados para ampliar o acesso ao conteúdo bibliográfico e preservar obras históricas reforçam a necessidade de sistemas robustos que combinem acessibilidade com organização eficiente. Essa perspectiva inspira o Biblioteca Manager, especialmente em funcionalidades relacionadas à digitalização e ao acesso remoto.

### Algoritmos e Otimização Técnica
A gestão eficiente de dados é um dos principais desafios de sistemas de bibliotecas, e o artigo do FreeCodeCamp sobre algoritmos de ordenação fornece um embasamento técnico essencial. Algoritmos como Quick Sort e Merge Sort possibilitam a organização otimizada de grandes volumes de dados, permitindo que o Biblioteca Manager ofereça buscas rápidas e eficazes por livros, usuários e funcionários. Essa abordagem técnica garante maior eficiência no processamento das informações e melhora a experiência do usuário.

### Funcionalidades Práticas de Sistemas de Biblioteca
O trabalho acadêmico de Giovanne Marangoni Martins apresenta uma visão prática sobre o desenvolvimento de sistemas de gerenciamento de bibliotecas. Funcionalidades como cadastro de livros, controle de empréstimos e devoluções, além da organização de acervos, são pilares fundamentais para sistemas dessa natureza. Esses elementos norteiam o desenvolvimento do Biblioteca Manager, garantindo que o sistema atenda às necessidades operacionais básicas de bibliotecas modernas.

### Integração Teórica e Prática
A união das perspectivas apresentadas permite uma abordagem abrangente para o desenvolvimento do Biblioteca Manager. A modernização proposta pelos investimentos na Biblioteca Nacional inspira o foco na acessibilidade e organização. O uso de algoritmos eficazes proporciona eficiência técnica, enquanto a pesquisa acadêmica oferece diretrizes práticas para implementação. Essa integração teórica fundamenta o projeto, assegurando uma solução tecnológica completa e alinhada às necessidades contemporâneas das bibliotecas.
### **4. Resultados e Conclusões**

#### **Resultados**
O **Biblioteca Manager** alcançou os objetivos propostos, entregando um sistema funcional para gerenciamento de acervos bibliográficos. Os principais resultados obtidos incluem:

| **Funcionalidade**              | **Resultado Obtido**                                                                                          |
|---------------------------------|--------------------------------------------------------------------------------------------------------------|
| **Cadastro de Livros**          | Permitiu a inclusão de livros com dados como título, autor, categoria e status, organizados em uma lista eficiente. |
| **Busca de Livros**             | Implementou uma busca eficiente utilizando árvores binárias para localizar livros por título ou autor.       |
| **Empréstimos e Devoluções**    | Gerenciou com sucesso o status de empréstimos, alterando entre "disponível" e "indisponível" conforme necessário. |
| **Listagem por Categoria**      | Exibiu listas de livros categorizados, melhorando a organização e a acessibilidade do acervo.                |
| **Testes de Performance**       | Validou a eficiência do sistema em termos de busca e ordenação, com tempos satisfatórios para operações em diferentes volumes de dados. |

#### **Conclusões**
Durante o desenvolvimento, diversas lições foram aprendidas, tanto no âmbito técnico quanto na gestão do projeto. Destacamos as principais reflexões e aprendizados:

| **Aspecto**                 | **Lições Aprendidas**                                                                                         |
|-----------------------------|-------------------------------------------------------------------------------------------------------------|
| **Planejamento e Organização** | A importância de um planejamento inicial bem estruturado, incluindo o levantamento de requisitos e a definição clara de funcionalidades.   |
| **Estruturas de Dados**       | O uso de listas encadeadas e árvores binárias foi essencial para otimizar a performance do sistema, consolidando o entendimento prático dessas estruturas. |
| **Algoritmos de Ordenação**   | A escolha de algoritmos adequados, como o Quick Sort, demonstrou a relevância de analisar o custo-benefício de cada método no contexto do problema. |
| **Gerenciamento de Memória**  | Trabalhar com alocação e desalocação dinâmica em C reforçou a importância de práticas responsáveis para evitar vazamentos de memória.         |
| **Colaboração em Equipe**     | A integração entre os membros foi crucial para dividir tarefas, resolver problemas complexos e unificar o trabalho final de maneira coesa.     |
| **Testes e Validação**        | A execução de testes em cenários reais evidenciou a necessidade de simular situações práticas para garantir a robustez do sistema.             |
| **Desafios e Superação**      | Lidamos com dificuldades, como bugs inesperados e escolhas subótimas de estrutura, mas o aprendizado adquirido com a resolução desses problemas foi enriquecedor. |

No geral, o **Biblioteca Manager** não apenas cumpriu os objetivos iniciais, mas também proporcionou aos desenvolvedores uma oportunidade única de aplicar e consolidar conhecimentos teóricos em um projeto prático. A experiência reforçou habilidades técnicas e colaborativas, preparando o grupo para desafios futuros no campo da Engenharia de Computação.

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
