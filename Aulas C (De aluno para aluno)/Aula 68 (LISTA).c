#include <stdio.h>
// Aula de Lista Concatenada

// https://youtu.be/bCaHRCKZZlc?list=PLa75BYTPDNKZWYypgOFEsX3H2Mg-SzuLW

int main (void) { // int main vazio: () ou void: (void) é a mesma coisa

    struct lista{
        int valor;
        struct lista *proximo; // esse ponteiro receberá o endereço de memória de outra struct lista
    };

    struct lista m1, m2, m3;
    struct lista *gancho = &m1; // ponteiro gancho recebe end. de mem. de m1

    m1.valor = 10;
    m3.valor = 20;
    m2.valor = 30;

    m1.proximo = &m2;
    m2.proximo = &m3;
    m3.proximo = (struct lista *)0; // m3.proximo aponta para uma struct lista* de valor NULL

    //vamos acessar nossa lista em ordem

    while(gancho != ((struct lista*) 0)) {
        printf ("%i\n", gancho->valor);
        gancho = gancho->proximo;
    }


return 0;
}