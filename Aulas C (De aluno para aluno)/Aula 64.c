// https://youtu.be/pQYP-kgLf3k?list=PLa75BYTPDNKZWYypgOFEsX3H2Mg-SzuLW

#include <stdio.h>

//Aula de Ponteiros à Estruturas

int main (void) { // int main vazio: () ou void: (void) é a mesma coisa

    struct horario{
        int hora;
        int min;
        int s;
    };

    struct horario agora; 
    struct horario *depois; 
    depois = &agora; 

    depois->hora = 20;
    depois->min = 20;
    depois->s = 50; 

    int somatorio = 100;

    struct horario antes;

    antes.hora = somatorio + depois->s;

    printf("\n%i: %i: %i\n\n", agora.hora, agora.min, agora.s);

    printf("%i: %i: %i\n\n", antes.hora, antes.min, antes.s);

    

return 0;
}