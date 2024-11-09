

Bibi e Bibika estão jogando um jogo simples onde o juiz, a cada rodada, faz um desenho com vários círculos e setas ligando alguns deles.

Bibi deve contar a menor quantidade X de setas que precisam ser invertidas para existir ao menos um caminho de A até B e Bibika deve contar a menor quantidade Y de setas invertidas para existir ao menos um caminho no sentido contrário, de B até A. Ganha o jogo quem encontrar o menor valor. Caso não exista, independente da quantidade de setas invertidas, um caminho entre A > B ou B > A, o jogo termina empatado.

Como o juiz em algumas rodadas faz um desenho muito grande, fica bastante complicado checar a veracidade das respostas dadas pelas meninas. Sua tarefa é automatizar esse processo para ele.
 
Entrada

A primeira linha de cada caso de teste contêm quatro inteiros C ( 1 ≤ C ≤ 104 ) , S ( 0 ≤ S ≤ 5 x 105), A e B, ( 1 ≤ A, B ≤ C ), sendo C a quantidade de círculos, S a quantidade de setas, A e B os extremos do jogo. Cada uma das próximas S linhas contêm dois inteiros C1 e C2, representando uma seta ligando o círculo C1 ao círculo C2.
Saída

Para cada caso de teste, exiba o nome da vencedora e a quantidade Q de setas invertidas, no formato Bibi: Q ou Bibika: Q. Caso o jogo termine empatado, exiba Bibibibika.


entrada:
6 7 1 5
1 2
1 6
3 2
4 2
4 6
5 4
5 3 

3 2 1 2
1 2
2 3 

saida:
Bibika: 1

Bibi: 0