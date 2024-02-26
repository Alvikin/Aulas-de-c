#include <stdio.h>
//Aula de Operações Matemáticas

int main (void) { // int main vazio: () ou void: (void) é a mesma coisa

    int minhaidade = 23;
    int maeidade = 48;
    int paiidade = 49;
    int irmaidade = 17;
    paiidade = 35;

    int idadetotal;

    idadetotal = maeidade * minhaidade / paiidade + irmaidade;

    /* "+" é soma "-" é subtração "*" é multiplicação "/" é divisão */

    printf ("%i\n", idadetotal);

    return 0;
}