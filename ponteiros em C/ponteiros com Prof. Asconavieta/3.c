//refer�ncia: https://youtu.be/C7IMFxeefLk
#include <stdio.h>
#include <stdlib.h>
int main(){
	float x, *px, a;
	
	x = 2.5;
	px = &x; //atribuindo � PX o endere�o de x.
	a = *px; /* atribuindo � A o valor apontado para PX 
				    o valor apontado � PX � 2.5			*/
	
	printf("%f\n", a);
}
