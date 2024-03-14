//referência: https://youtu.be/w_BBUJWS-50
#include <stdio.h>
#include <stdlib.h>
int main(){
	/*Acessando o endereço
	de um elemento do array. */
	
	int vet[5] = {1, 2, 3, 4, 5};
	
	printf("&vet[2] = %d\n", &vet[2]);
	printf("&vet[2] = %d\n", (vet+2));
	
}
