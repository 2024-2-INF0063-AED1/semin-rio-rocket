# Gerenciador de livros para bibliotecas (Biblioteca Manager)

## Autores 
- **Diogo de Paula Quintão** (202207108)
- **Júlia Oliveira Cardoso da Silva** (202206128)
- **Lucas Pereira Brito** (202201649)
  
## Resumo
Este documento apresenta o desenvolvimento de um sistema de gerenciamento de acervo bibliográfico para bibliotecas, empregando a linguagem de programação C.O projeto objetiva otimizar a consulta e organização do acervo, atendendo à demanda por maior eficiência e modernização.  Para tanto, foram utilizadas técnicas de listas, visando otimizar os processos de busca e cadastramento.

## Palavras-chave
Biblioteca, C, Estrutura de dados, Gerenciamento, Lista encadeada, Organização de Acervo

## Introdução
### Problema
O Sistema de Gerenciamento de Biblioteca é uma solução desenvolvida para otimizar a administração de acervos bibliográficos.  Considerando o aumento contínuo do volume de materiais e a necessidade de organização eficiente, bibliotecas enfrentam desafios na gestão de inventário, empréstimos e acesso à informação.  Este projeto visa fornecer uma ferramenta intuitiva e eficaz para aprimorar a administração de acervos, otimizando os processos de cadastramento, consulta, empréstimo e devolução de livros.

### Literatura

Esta seção apresenta três fontes que embasam o desenvolvimento do sistema de gerenciamento de livros: um investimento de R$ 30 milhões na Biblioteca Nacional em 2023, que destaca a importância da digitalização e organização de acervos; um artigo técnico sobre algoritmos de ordenação (Bubble Sort, Quick Sort e Merge Sort), útil para otimizar a organização de dados; e um TCC que aborda funcionalidades práticas de sistemas de bibliotecas, como cadastro, controle de empréstimos e organização do acervo.

### Dataset
O sistema utiliza um conjunto de dados preexistentes contendo mais de 100 livros, com a funcionalidade adicional de permitir o cadastramento dinâmico de novos livros pelos usuários.  Cada registro incluirá os seguintes campos: Título, Autor, Gênero, Código de Identificação (ID) e Status de Empréstimo.  A estrutura de dados escolhida para armazenamento é a lista encadeada, otimizando as operações de consulta.
### Métodos
Os métodos revisados incluirão o uso de listas como estrutura principal para o armazenamento de usuários e livros no sistema. Paralelamente, será realizada uma análise detalhada de diferentes algoritmos de ordenação, como Bubble Sort, Quick Sort e Merge Sort, a fim de identificar aquele que oferece o melhor desempenho e eficiência para as necessidades específicas do projeto. Essa abordagem garantirá uma organização eficiente dos dados e um processamento otimizado dentro do sistema gerenciador.

### Avaliação
A avaliação do sistema será baseada em métricas de desempenho e funcionalidade. Serão medidos o tempo médio de execução para consultas e operações de ordenação, bem como a eficiência do uso de memória. A usabilidade será avaliada por meio de testes com usuários, analisando a facilidade de cadastramento, consulta e organização de acervos. A precisão das operações de empréstimo e devolução também será monitorada para garantir a confiabilidade do sistema.

### Fundamentos Teóricos
Utilizando listas encadeadas para gerenciar registros de livros e usuários. O Bubble Sort foi implementado para ordenar livros por ID, aproveitando sua simplicidade. O sistema emprega alocação dinâmica de memória com malloc e free, e structs específicas para livros e usuários, organizando informações como título, autor, categoria, status e histórico de empréstimo.

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


#### **Resultados**
O **Biblioteca Manager** alcançou os objetivos propostos, entregando um sistema funcional para gerenciamento de acervos bibliográficos. Os principais resultados obtidos incluem:

| **Funcionalidade**              | **Resultado Obtido**                                                                                          |
|---------------------------------|--------------------------------------------------------------------------------------------------------------|
| **Cadastro de Livros**          | Permitiu a inclusão de livros com dados como título, autor, categoria e status, organizados em uma lista. |
| **Busca de Livros**             | Implementou uma busca  para localizar livros por título ou autor.       |
| **Empréstimos e Devoluções**    | Gerenciou com sucesso o status de empréstimos, alterando entre "disponível" e "indisponível" conforme necessário. |
| **Listagem por Categoria**      | Exibiu listas de livros categorizados, melhorando a organização e a acessibilidade do acervo.                |
| **Testes**       | Concluiu os testes relativos aos livros com sucesso, porém identificou problemas relacionados aos usuários. |

#### **Conclusões**
Durante o desenvolvimento, foram adquiridas valiosas lições tanto no âmbito técnico quanto na gestão do projeto. Entre os principais aprendizados, destacam-se:
- A importância de seguir convenções claras para os commits, promovendo maior rastreabilidade;
- O uso de branches feature para organizar o fluxo de trabalho e facilitar a colaboração;
- A relevância de criar bibliotecas separadas para modularidade e reutilização de código.

De modo geral, o Biblioteca Manager não apenas cumpriu os objetivos iniciais, mas também proporcionou aos desenvolvedores uma oportunidade prática de aplicar e consolidar conhecimentos teóricos. A experiência reforçou competências técnicas e colaborativas, preparando o grupo para enfrentar futuros desafios no campo da Engenharia de Computação.


## Referências

AGÊNCIA BRASIL. Biblioteca Nacional receberá este ano investimentos de R$ 30 milhões. Agência Brasil, Brasília, 2023. Disponível em: https://agenciabrasil.ebc.com.br/geral/noticia/2023-05/biblioteca-nacional-recebera-este-ano-investimentos-de-r-30-milhoes. Acesso em: 20 de novembro de 2024. 

FREECODECAMP. Algoritmos de ordenação explicados com exemplos em Python, Java e C. FreeCodeCamp, 2023. Disponível em: https://www.freecodecamp.org/portuguese/news/algoritmos-de-ordenacao-explicados-com-exemplos-em-python-java-e-c/.1 Acesso em: 21 de novembro de 2024.

MARTINS, Giovanne Marangoni. Sistema de gerenciamento para biblioteca. 2015. Trabalho de Conclusão de Curso (Tecnologia em Análise e Desenvolvimento de Sistemas) - Fundação Educacional do Município de Assis, Assis, 2015.
