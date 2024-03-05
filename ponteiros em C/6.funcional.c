//referencia: https://youtu.be/SJzd9x2S2yg
#include <stdio.h>
#include <stdlib.h>
int main(){
	/* O operador asterisco (*) permite
	modificar o conte�do da posi��o
	de mem�ria apontada. */
	int x = 10; //vari�vel
	int *p; //ponteiro
	
	//ponteiro p aponta para a vari�vel x
	p = &x;
	
			    //como funciona dentro da mem�ria:
/* 	posi��o	#15 - x = 10
	posi��o	#16 - 		   
	posi��o	#17 - 
	posi��o	#18 - *p = #15
*/
	
	printf("x = %d\n", x);
	*p = 12;
			    //como funciona dentro da mem�ria:
/* 	posi��o	#15 - x = 12
	posi��o	#16 - 		   
	posi��o	#17 - 
	posi��o	#18 - *p = 12
*/
	printf("*p = %d\n", *p);
	printf("x = %d\n", x);
}
