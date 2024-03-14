//referência: https://youtu.be/C7IMFxeefLk
#include <stdio.h>
int main(){
	
	/*É possível alterar o valor de uma variável de forma indireta.
	Basta que seu endereço esteja armazenado em um ponteiro. */
	
	int n, *p;
	
	n = 3;
	p = &n;
	*p = 7; /* O endereço apontado por P(n), recebe o valor 7.
		+O (*) em P, aponta para seu CONTEÚDO, e NÃO endereço. */
	
	printf("%d\n", n); // 7;
}
