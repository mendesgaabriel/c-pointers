//refer�ncia: https://youtu.be/cg1mnWupbTE
#include <stdio.h>
#include <stdlib.h>
int main(){
	/* As opera��es de adi��o e subtra��o
	no endere�o dependem do tipo de dado
	que o ponteiro aponta. */
	
	int *p = 0x5DC; //1500
	char *c = 0x5DC; //1500
	/*char ocupa apenas 1 BYTE na mem�ria, e n�o 4, como o INT. */
	
	printf("p = %d\n c = %d\n", p, c);
	p++; //1504
	c++; //1501
	
	printf("p = %d\n c = %d\n", p, c);
}
