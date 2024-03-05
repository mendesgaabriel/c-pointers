//referencia: https://youtu.be/SJzd9x2S2yg
#include <stdio.h>
#include <stdlib.h>
int main(){
	/* Podemos apontar o ponteiro para uma
	variável que já exista no programa. */
	
	int x = 10; //variável
	int *p; //ponteiro
	
	//ponteiro p aponta para a variável x
	p = &x;
	    //como funciona dentro da memória:
/* 	posição	#12 - x = 10
	posição	#13 - 		   
	posição	#14 - 
	posição	#15 - *p = #12
*/
	printf("x = %d\n", x);
	printf("&x = %d\n", &x);
	printf("p = %d\n", p);
	
}
