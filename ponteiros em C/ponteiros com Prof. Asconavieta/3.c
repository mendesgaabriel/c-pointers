//referência: https://youtu.be/C7IMFxeefLk
#include <stdio.h>
#include <stdlib.h>
int main(){
	float x, *px, a;
	
	x = 2.5;
	px = &x; //atribuindo à PX o endereço de x.
	a = *px; /* atribuindo à A o valor apontado para PX 
				    o valor apontado à PX é 2.5			*/
	
	printf("%f\n", a);
}
