//refer�ncia: https://youtu.be/cg1mnWupbTE
#include <stdio.h>
#include <stdlib.h>
int main(){
	/*Ponteiros podem ser comparados usando:
	==, !=, >, <, >= e <= */
	int *p, *p1, x, y;
	p = &x;
	p1 = &y;
	
	/*descobrindo se p aponta para o mesmo endere�o de p1.
	como sabemos que X � uma vari�vel diferente de Y, logo, diferentes. */
	if(p == p1){
		printf("Ponteiros iguais.\n");
	}
	else{
		printf("Ponteiros diferentes.\n");
	}
	
}
