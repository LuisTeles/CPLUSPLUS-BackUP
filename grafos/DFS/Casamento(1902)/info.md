

A Sociedade Brasileira Casamenteira (SBC) perguntou a todas as pessoas solteiras do país se estavam apaixonadas e por quem estavam apaixonadas. Curiosamente, cada pessoa solteira respondeu que estava apaixonada por exatamente uma outra pessoa, mas que tinha vergonha de declarar seus sentimentos. Dispondo agora dessas informações, a SBC deseja formar casamentos, para que as pessoas vivam mais felizes. Se uma pessoa A1 é apaixonada por uma pessoa A2 e a pessoa A2 também é apaixonada pela pessoa A1, é claro que a SBC pode formar o casamento {A1, A2}. Contudo, se A1 é apaixonada por A2, mas A2 é apaixonada por A3, que é apaixonada por A4… que é apaixonada por Ak, sendo que Ak é apaixonada por A1, também é possível formar o casamento {A1, A2, …, Ak}, já que, recentemente, foi aprovado o casamento poligâmico no Brasil. Mais formalmente, a SBC pode formar o casamento {A1, …, Ak} se e somente se k ≥ 2, a pessoa Ak é apaixonada pela pessoa A1 e, para todo i ∈ {2, …, k}, a pessoa Ai - 1 é apaixonada pela pessoa Ai.

Ajude a SBC a formar o maior número possível de casamentos.
Entrada

A entrada é composta por no máximo 105 linhas e finalizada por fim de arquivo. Cada linha da entrada consiste dos nomes de duas pessoas A e B, indicando que a pessoa A é apaixonada pela pessoa B. Cada nome de pessoa é uma cadeia de no mínimo 1 e no máximo 10 letras do alfabeto latino, sem diacríticos.
Saída

Seu programa deve imprimir numa linha um único inteiro, representando o maior número de casamentos que é possível a SBC formar.
Exemplos de Entrada 	

Carlos Carla
Carla Carlos
Amanda Armando
Armando Artemis
Artemis Amanda

Louis Louise
Louise Lucas
Lucas Luke
Luke Louise
Lilica Lucas
	
Exemplos de Saída
2

1