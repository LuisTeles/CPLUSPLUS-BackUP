

Em 1942, um estudo feito por Robert Tryon concluiu que os traços genéticos frequentemente podem contribuir para o comportamento, independente do meio ambiente. Para fazer isso Tryon criou uma experiência que testou a proficiência de gerações sucessivas de ratos em completar um labirinto, separando os que fizeram os menores números de erros em "brilhantes", e aqueles com mais erros em "medíocres". Dando continuidade a este processo durante sete gerações ele criou duas raças distintas de ratos: "brilhantes" e "medíocres".

O ratinho IBO é descendente da linhagem de ratos "brilhante", sendo o melhor de todos no desempenho deste experimento. Ele consegue entrar, pegar o queijo e sair de qualquer labirinto sem se perder, e sempre faz o caminho mais curto possível.

Sua tarefa neste problema é, dado o desenho do Labirinto e a posição do queijo, determinar por quantos pontos estrategicamente marcados por letras do alfabeto (ou palavras contendo somente letras) IBO deve passar para pegar o queijo (indicado pelo caractere '*') e sair, sempre partindo do ponto Entrada e terminando em Saida (sem acento). No exemplo abaixo, a sequência de IBO à partir da Entrada seria: A, F, J, *, I, M, K e Saida, o que resultaria em 8, que é a quantidade mínima de pontos pelos quais IBO deve passar para cumprir a sua tarefa. Se IBO tiver que passar por um ponto duas vezes (uma indo para o queijo e outra indo para a saída) isso conta como dois pontos visitados.

Entrada

A primeira linha de entrada contém dois inteiros Pontos (4 ≤ Pontos ≤ 4000) e Ligacoes (4 ≤ Ligacoes ≤ 5000) representando respectivamente o número de pontos estrategicamente marcados no labirinto e quantidade de ligações existentes entre estes pontos. Seguem as linhas que indicam cada uma das ligações entre estes pontos. As ligação entre dois pontos indica que qualquer um dos dois pode ser a origem.
Saída

Imprima um valor inteiro identificando a quantidade mínima de pontos do labirinto pelos quais IBO deve passar para cumprir a sua tarefa.
Exemplos de Entrada 	

16 20
Entrada A
A F
F C
C B
B D
C D
F J
J H
H G
J G
J *
* I
I L
L M
M K
K Saida
A K
C E
E I
I M


10 11
B A
Entrada A
B GT
GT H
H *
B *
* C
C I
I D
C D
D Saida
	
Exemplos de Saída
8

6