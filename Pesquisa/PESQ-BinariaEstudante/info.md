Na cidade de Morangoleste, existe um dormitório enorme. Acredita-se que existem cerca de 10.000 estudantes morando ali. Imagine se eles fossem procurar um estudante de forma sequencial, gastariam muito tempo. Então, o responsável pelo dormitório teve uma ideia: armazenar os números de matrícula em um sistema, e a posição em que a matrícula ficasse seria o número do corredor em que o estudante deveria ficar.
Entrada
A entrada consiste de 3 linhas:

- a primeira irá conter um único número inteiro N (1<=N<=10000), que indica a quantidade de alunos;

- a segunda linha tem N inteiros, que correspondem aos números de matrículas de cada aluno. Estas serão inseridas em ordem crescente.

- a terceira linha terá apenas um inteiro X, referente à matrículado que do aluno o qual se quer saber o corredor em que irá ficar.
Saída
Na saída, o programa deve mostrar "Corredor Y",em que Y é o corredor que está o estudante. Caso não seja encontrado o mesmo, deve-se mostrar "Nao localizado".

| Exemplo de entrada | Exemplo de saída       |
|---------------------|------------------------|
| 4                   | Corredor 0            |
| 567 1011 1241 9932  |                        |
| 567                 |                        |
|---------------------|------------------------|
| 6                   | Nao localizado        |
| 963 1552 1562 2135 2883 3060 |               |
| 1526                |                        |


