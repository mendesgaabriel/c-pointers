//referência: https://youtu.be/cg1mnWupbTE
#include <stdio.h>
#include <stdlib.h>
int main(){
	
	/*Sobre o valor de endereço armazenado
	por um ponteiro, podemos apenas
	SOMAR e SUBTRAIR valores INTEIROS. */
	
	/* "Por padrão, um número INTEIRO ocupa 4 bytes. */
	int *p = 0x5DC; //1500 em hexadecimal
	printf("p = %d\n", p);
	
	p++;
	printf("p = %d\n", p); //1504
	
	p = p +15; // + 15 * 4
	printf("p = %d\n", p); //1564
	
	p = p - 2; // - 2 * 4
	printf("p = %d\n", p); //1556
	
}
