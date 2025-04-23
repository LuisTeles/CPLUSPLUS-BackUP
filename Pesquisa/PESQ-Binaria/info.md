Com o avanço da tecnologia, muitos empresas adotaram o método do cartão magnético para controle de acesso aos seus ambientes. Você deve construir um programa verifica se uma ID( identificação) tem acesso ao ambiente. Antes de ser informado a ID, será informado a lista de IDS que possuem acesso ao ambiente.

Obs: A verificação de acesso deve ser rápida. Portanto, use busca binária.
Entrada
A entrada consiste em vários números inteiros, que devem ser inseridos no vetor. O final da entrada é sinalizado pelo número -1, que não deve ser inserido no vetor. Considere que não haverá mais do que 20 elementos. Após o número -1, será informado a ID que deseja verificar se tem acesso ou não.
Saída
Na saída, o programa deve mostrar "Possui acesso" caso a ID esteja na lista de IDS autorizadas ou "Nao possui acesso", caso não tenha acesso.

| Exemplo de entrada | Exemplo de saída       |
|--------------------|------------------------|
| 1 3 5 7 10 13 -1 9 | Nao possui acesso      |
| 1 3 5 7 10 13 -1 3 | Possui acesso          |
