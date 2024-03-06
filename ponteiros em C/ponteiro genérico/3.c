//referência: https://youtu.be/bqw-GebrvEU
#include <stdio.h>
#include <stdlib.h>
int main(){
    /*Antes de acessar o conteúdo é preciso
     * converter o ponteiro genérico par ao tipo
     * de ponteiro com qual se deseja trabalhar. */

    void *pp;
    int p2 = 10;

    pp = &p2; //endereço de int

    printf("Conteúdo: %d\n", *pp); //ERRO

    printf("Conteúdo: %d\n", * (int*)pp); //convertendo para int*
}