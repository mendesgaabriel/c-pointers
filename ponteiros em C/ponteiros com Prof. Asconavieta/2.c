//referência: https://youtu.be/C7IMFxeefLk
#include <stdio.h>
#include <stdlib.h>

int main(){
	
	/*O operador (&) não pode ser aplicado a constantes
	e expressoes.
	Exemplos ERRADOS:
	&3, &(x+1) = ERRO 
	
	int *px;
	float x;
	
	x = 2.5;
	
	px = &x; = inconsistência de tipos. x = float. | px = int */
	
	//um exemplo CORRETO:
	float x, *px;
	x = 2.5;
	
	px = &x;
	printf("%f\n", *px);
}
