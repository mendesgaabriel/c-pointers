//referencia: https://youtu.be/SJzd9x2S2yg
#include <stdlib.h>
#include <stdio.h>
int main(){
	
	/* Ponteiros n�o incializados apontam
	para um lugar indefinido. */
	int *p;
		printf("%d\n", &p);
	/*Um ponteiro pode ter um valor especial
	NULL, que � o endere�o de nenhum lugar. */
	*p = 0;
		printf("%d \n", &p);
}
