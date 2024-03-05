//referencia: https://youtu.be/SJzd9x2S2yg
#include <stdio.h>
#include <stdlib.h>
int main(){
	/* O operador asterisco (*) permite
	modificar o conteúdo da posição
	de memória apontada. */
	int x = 10; //variável
	int *p; //ponteiro
	
	//ponteiro p aponta para a variável x
	p = &x;
	
			    //como funciona dentro da memória:
/* 	posição	#15 - x = 10
	posição	#16 - 		   
	posição	#17 - 
	posição	#18 - *p = #15
*/
	
	printf("x = %d\n", x);
	*p = 12;
			    //como funciona dentro da memória:
/* 	posição	#15 - x = 12
	posição	#16 - 		   
	posição	#17 - 
	posição	#18 - *p = 12
*/
	printf("*p = %d\n", *p);
	printf("x = %d\n", x);
}
