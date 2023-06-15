/* Sintaxe:
	
	Sintaxe são as regras da linguagem de programação, que devem ser seguidas para que o programa funcione
	corretamente, como por exemplo a utilização de ';' 	no fechamento das funções, ou chamada de bibliotecas
	utilizando '#include <>'.
	
Semantica:
	
	Semântica é a Lógica da mensagem à ser repassada, é o sentido que a mensagem tem que passar.


Lista de Erros:

-------------------------------------------------------------------------------------------------------------------

Makefile.win has changed. Reload from disk? -- Erro dado ao compilar um programa que foi modificado. Feche e abra
o programa e deve resolver.

-------------------------------------------------------------------------------------------------------------------

Erro: C:\Users\'nomeUsuario'\Desktop\'nomePasta'\'nomeArquivo'.o	'nomeArquivo'.c:(.text+0x0): multiple
definition of `main'
Erro: C:\Users\'nomeUsuario'\Desktop\'nomePasta'\Makefile.win	recipe for target ''nomeDoProjeto'.exe' failed

Quer dizer que há uma função "main" duplicada no projeto. Um PROJETO no DEV C++ não suporta mais de um arquivo
com a função 'main' sendo executada ao mesmo tempo. Ao excluir um dos arquivos, o problema para de ser exibido.

-------------------------------------------------------------------------------------------------------------------

Erro: Alguns 'scanf' estão sendo ignorados pelo programa, mesmo não apresentando erro na hora da compilação: Eu havia
solicitado que o usuário inserisse com o que o mesmo trabalha e coloquei apenas '%s', fazendo com que o scanf lê-se
apenas a primeira palavra, pois o formato '%s' lê apenas uma sequência de caracteres ininterruptos, sendo que na
informação solicitada, possivelmente haveria a digitação de um 'espaço'. 
Resolvi isso trocando o formato '%s' por '[^\n]', que lê toda uma sequência de caracteres, até mesmo a tecla espaço,
até que encontre uma tecla de quebra de linha, o 'Enter'. Feito a troca, evidenciou-se que o scanf que estava funcionando:
o de trabalho, parou de funcionar, porém o scanf que estava sendo ignorado: o que perguntava sobre filhos, foi executado
pelo programa e que, o scanf sobre escolaridade ainda continuava ignorado, porém, isso foi resolvido colocando o comando
getchar(); após cada um dos scanf que solicitasse uma sequência de caracteres, para que o buffer fosse limpo e o scanf
seguinte não lesse o 'Enter' como a resposta.

------------------------------------------------------------------------------------------------------------------------

Erro: Value required as left operand of assignment: É um erro sintático de comparação e atribuição. Para se atribuir um valor
à uma variável, utiliza-se apenas um sinal de Igual (=) e para se comparar um valor de uma varíavel, utiliza-se dois sinais de
Igual (==). Assim que o sinal for trocado para o correto - provavelmente está tentando atribuir um valor (=) quando o objetivo é
comparar um valor (==), por exemplo no IF - o erro sumirá.

-----------------------------------------------------------------------------------------------------------------------------

Erro: a label can only be part of a statement and a declaration is not a statement: Erro ocorre quando você tenta declarar uma
varíavel em um local que não é permitido a ação. Para corrigir esse erro, basta mover a declaração da varíavel, para um local
em que é permitida sua declaração, como o inicio do programa, por exemplo.


*/