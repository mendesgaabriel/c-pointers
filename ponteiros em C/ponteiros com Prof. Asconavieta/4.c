//refer�ncia: https://youtu.be/C7IMFxeefLk
#include <stdio.h>
int main(){
	
	/*� poss�vel alterar o valor de uma vari�vel de forma indireta.
	Basta que seu endere�o esteja armazenado em um ponteiro. */
	
	int n, *p;
	
	n = 3;
	p = &n;
	*p = 7; /* O endere�o apontado por P(n), recebe o valor 7.
		+O (*) em P, aponta para seu CONTE�DO, e N�O endere�o. */
	
	printf("%d\n", n); // 7;
}
