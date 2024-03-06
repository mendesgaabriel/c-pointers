//referência: https://youtu.be/bqw-GebrvEU
#include <stdio.h>
#include <stdlib.h>
 int main() {
    /*Ponteiro genérico: */
    void *pp;
    int *p1, p2 = 10;

    p1 = &p2;
    pp = &p2; //endereço de INT

    printf("Endereço em pp: %p \n", pp);

    pp = &p1; //Endereço de INT*
    printf("Endereço em pp: %p \n", pp);

    pp = p1; //endereço de int
    printf("Endereço em pp: %p \n", pp);
}
