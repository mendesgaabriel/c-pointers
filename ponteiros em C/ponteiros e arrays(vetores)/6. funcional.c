//refer�ncia: https://youtu.be/w_BBUJWS-50
#include <stdio.h>
#include <stdlib.h>
int main(){
	/* Cada elemento do array pode
	apontar para um endere�o de mem�ria,
	seja ele de uma vari�vel ou de um array. */
	
	int *pvet[2];
	int x = 10, y[2] = {20, 30};
	pvet[0] = &x;
	pvet[1] = y;
	
	printf("pvet[0]: %p\n", pvet[0]); //&x
	printf("pvet[1]: %p\n", pvet[1]); //&y[0]
	
	printf("*pvet[0]: %d\n", *pvet[0]); //x
	printf("pvet[1] [1]: %d\n", pvet[1][1]); //y[1]
	
}
