//referência: https://youtu.be/C7IMFxeefLk
#include <stdio.h>

int main(){
	int n, *p; /* (*) declaração de um ponteiro
	exclusivamente para armazenar endereços de memória. */
	
	n = 3;
	
	p = &n; //atribuindo a P, o endereço de n
	
	printf("%d\n", p);
	printf("%u\n", p);
}
