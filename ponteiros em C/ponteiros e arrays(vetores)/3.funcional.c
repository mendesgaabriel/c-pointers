//refer�ncia: https://youtu.be/w_BBUJWS-50
#include <stdio.h>
#include <stdlib.h>
int main(){
	/*A nota��o de colchetes � apenas
	uma simplifica��o da aritm�tica
	de ponteiros com acesso ao conte�do. */
	
	int vet[5] = {1, 2, 3, 4, 5};
	
	printf("vet[2] = %d\n", vet[2]);
	printf("vet[2] = %d\n", *(vet+2));
	
}
