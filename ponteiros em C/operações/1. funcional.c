//refer�ncia: https://youtu.be/cg1mnWupbTE
#include <stdio.h>
#include <stdlib.h>
int main(){
	/*Atribui��o: um ponteiro s� pode
	receber o endere�o de uma vari�vel 
	do mesmo tipo do ponteiro */
	
	int *p, *p1, x = 10;
	float y = 20.0;
	
	p = &x;
	printf("*p: %d\n", *p);
	
	p1 = p;
	printf("*p1: %d \n", *p1);
	
	p = &y; //ERRADO
	
	
}
