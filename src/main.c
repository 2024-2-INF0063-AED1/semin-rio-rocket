 1   #include <stdio.h>
 2   #include <string.h>
 3   
 4   #define MAX_LIVROS 100
 5   
 6   typedef struct
 7   {
 8       char nome[100];
 9       char autor[100];
10       int ano;
11   } Livro;
12   
13   Livro biblioteca[MAX_LIVROS];
14   int contadorLivros = 0;
15   
16   void adicionarLivro()
17   {
18       if (contadorLivros >= MAX_LIVROS)
19       {
20           printf("Capacidade máxima de livros atingida!\n");
21           return;
22       }
23   
24       printf("Qual o nome do livro?\n");
25       fgets(biblioteca[contadorLivros].nome, 100, stdin);
26       strtok(biblioteca[contadorLivros].nome, "\n"); 
27   
28       printf("Qual o autor do livro?\n");
29       fgets(biblioteca[contadorLivros].autor, 100, stdin);
30       strtok(biblioteca[contadorLivros].autor, "\n");
31   
32       printf("Qual o ano de lançamento do livro?\n");
33       scanf("%d", &biblioteca[contadorLivros].ano);
34       while (getchar() != '\n'); 
35   
36       contadorLivros++;
37       printf("Livro adicionado com sucesso!\n");
38   }
39   
40   void removerLivro()
41   {
42       int indice;
43       if (contadorLivros == 0)
44       {
45           printf("Nenhum livro para remover!\n");
46           return;
47       }
48       
49       printf("Digite o número do livro a ser removido (1 a %d): ", contadorLivros);
50       scanf("%d", &indice);
51       while (getchar() != '\n'); 
52       
53       if (indice < 1 || indice > contadorLivros)
54       {
55           printf("Índice inválido!\n");
56           return;
57       }
58       
59       
60       for (int i = indice - 1; i < contadorLivros - 1; i++)
61       {
62           biblioteca[i] = biblioteca[i + 1];
63       }
64       contadorLivros--;
65       printf("Livro removido com sucesso!\n");
66   }
67   
68   void listarLivros()
69   {
70       if (contadorLivros == 0)
71       {
72           printf("Nenhum livro cadastrado!\n");
73           return;
74       }
75       
76       printf("Listando todos os livros...\n");
77       for (int i = 0; i < contadorLivros; i++)
78       {
79           printf("Livro %d: %s, Autor: %s, Ano: %d\n", 
80                  i + 1, biblioteca[i].nome, 
81                  biblioteca[i].autor, biblioteca[i].ano);
82       }
83   }
84   
85   void inicializarLivros()
86   {
87       
88       Livro livro1 = {"O Senhor dos Anéis", "J.R.R. Tolkien", 1954};
89       Livro livro2 = {"Harry Potter e a Pedra Filosofal", "J.K. Rowling", 1997};
90       Livro livro3 = {"Dom Quixote", "Miguel de Cervantes", 1605};
91       Livro livro4 = {"Orgulho e Preconceito", "Jane Austen", 1813};
92       Livro livro5 = {"O Apanhador no Campo de Centeio", "J.D. Salinger", 1951};
93       Livro livro6 = {"1984", "George Orwell", 1949};
94       
95       
96       if (contadorLivros < MAX_LIVROS) biblioteca[contadorLivros++] = livro1;
97       if (contadorLivros < MAX_LIVROS) biblioteca[contadorLivros++] = livro2;
98       if (contadorLivros < MAX_LIVROS) biblioteca[contadorLivros++] = livro3;
99       if (contadorLivros < MAX_LIVROS) biblioteca[contadorLivros++] = livro4;
100      if (contadorLivros < MAX_LIVROS) biblioteca[contadorLivros++] = livro5;
101      if (contadorLivros < MAX_LIVROS) biblioteca[contadorLivros++] = livro6;
102  }
103  
104  int main()
105  {
106      int opcao;
107      
108      printf("Seja Bem-vindo ao Gerenciador de Livros para Bibliotecas!\n");
109      printf("Digite 1 para adicionar um livro\n");
110      printf("Digite 2 para remover um livro\n");
111      printf("Digite 3 para listar todos os livros\n");
112      printf("Digite 0 para sair\n");
113      
114      inicializarLivros(); 
115      
116      while (1)
117      {
118          printf("\nEscolha uma opção: ");
119          scanf("%d", &opcao);
120          while (getchar() != '\n'); 
121          
122          switch (opcao)
123          {
124          case 1:
125              adicionarLivro();
126              break;
127          case 2:
128              removerLivro();
129              break;
130          case 3:
131              listarLivros();
132              break;
133          case 0:
134              printf("Saindo...\n");
135              return 0;
136          default:
137              printf("Opção inválida! Tente novamente.\n");
138          }
139      }
140      
141      return 0;
142  }
