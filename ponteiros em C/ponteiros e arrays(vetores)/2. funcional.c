//referência: https://youtu.be/w_BBUJWS-50
#include <stdio.h>
#include <stdlib.h>
int main(){
	/* O nome do array é apenas um ponteiro
	que aponta par ao primeiro elemento do array. */
	
	int vet[5] = {1, 2, 3, 4, 5};
	int *p = vet;
	
	int i;
	for(i=0; i<5; i++){
		printf("%d\n", *(p+i)); //mesma coisa que p[i]
	}
}
