Faça um programa que leia o nome e o número de matrícula de vários alunos e os armazene em um vetor de structs.

Depois, o programa deve ler o nome de um aluno e fazer uso da função de busca binária (que você deve modificar) para verificar se este aluno está ou não no vetor. Se estiver, o programa deve mostrar o nome e o número de matricula dele. Se não, o programa deve mostrar a mensagem "Aluno nao encontrado".

int binaria(int vetor[], int tamanho, int x)
{
	bool achou; // var aux p/ busca
	int baixo, meio, alto; // var aux
	baixo = 0;
	alto = tamanho - 1;
	achou = false;
	while ((baixo <= alto) && (achou == false))
	{
		meio = (baixo + alto) / 2;
		if (x < vetor[meio])
			alto = meio - 1;
		else if (x > vetor[meio])
			baixo = meio + 1;
		else
			achou = true;
	}
	if (achou)
		return meio;
	else
		return -1;
}



Entrada

A entrada consiste de várias linhas:

- a primeira linha contém o nome do primeiro aluno

- a segunda linha, seu número de matrícula. 

- nas linhas subsequentes, teremos o nome e o número de matrícula dos demais alunos.

- a entrada dos dados dos alunos termina quando for digitada a palavra "fim"

- Na última linha da entrada, será inserido o nome do aluno a ser procurado.
Saída
Na saída, o programa deve mostrar o nome e o número de atrícula do aluno procurado, ou uma mensagem dizendo que este não foi encontrado, caso contrário.

| **Exemplo de entrada** | **Exemplo de saída**          |
|-------------------------|-------------------------------|
| Ana Maria              | Aluno: Beto Carrero          |
| 243                    | Matricula: 123               |
| Beto Carrero           |                               |
| 123                    |                               |
| Daniela Freitas        |                               |
| 1047                   |                               |
| fim                    |                               |
| Beto Carrero           |                               |
|-------------------------|-------------------------------|
| Ana Maria              | Aluno nao encontrado         |
| 243                    |                               |
| Beto Carrero           |                               |
| 123                    |                               |
| Daniela Freitas        |                               |
| 1047                   |                               |
| fim                    |                               |
| Jonatas Freitas        |                               |

resolva o problema voce esta restringido a usar as bibliotecas iostream e string 

e não sao permitidas mudanças na função fornecida acima 