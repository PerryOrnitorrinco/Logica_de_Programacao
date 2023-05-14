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



*/