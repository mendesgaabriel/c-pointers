//referencia: https://youtu.be/SJzd9x2S2yg
#include <stdio.h>
#include <stdlib.h>
int main(){
	/* Para acessar o valor da vari�vel
	apontada por um ponteiro, basta
	usar o operador asterisco (*) .*/
	int x = 10; //vari�vel
	int *p; //ponteiro
	
	//ponteiro p aponta para a vari�vel x
	p = &x;
	
		    //como funciona dentro da mem�ria:
/* 	posi��o	#12 - x = 10
	posi��o	#13 - 		   
	posi��o	#14 - 
	posi��o	#15 - *p = #12
*/
	
	printf("x = %d\n", x);
	printf("p = %d\n", p);
	printf("*p = %d\n", *p); //imprimindo 10, valor guardado dentro do endere�o de X
}
