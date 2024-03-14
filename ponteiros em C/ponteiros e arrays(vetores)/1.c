//referência: https://youtu.be/w_BBUJWS-50
#include <stdio.h>
#include <stdlib.h>
int main(){
	
	/* Array: conjunto de dados
	armazenados de forma sequencial. */
	
	int vet[5] = {1, 2, 3, 4, 5};
	int *p = vet;
	
	int i;
	for(i = 0; i<5; i++){
		printf("%d\n ", p[i]);
	}
}
