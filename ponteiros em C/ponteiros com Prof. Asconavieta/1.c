//refer�ncia: https://youtu.be/C7IMFxeefLk
#include <stdio.h>

int main(){
	int n, *p; /* (*) declara��o de um ponteiro
	exclusivamente para armazenar endere�os de mem�ria. */
	
	n = 3;
	
	p = &n; //atribuindo a P, o endere�o de n
	
	printf("%d\n", p);
	printf("%u\n", p);
}
