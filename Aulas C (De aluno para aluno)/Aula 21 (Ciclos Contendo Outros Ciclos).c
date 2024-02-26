#include <stdio.h>
// Aula de Ciclos Contendo Outros Ciclos

int main () { // int main vazio: () ou void: (void) é a mesma coisa
// A cada "volta" do ciclo maior, o ciclo menor é completo
// Ou seja sempre que o for de cima rodar 1 vez, printando "volta i"
// O ciclo for de baixo vai rodar 10 vezes printando ponto 1 - 10

    for (int i = 1; i <= 10 ; i++) {

        printf ("**Volta %i**\n", i);

        for (int j = 1; j <= 10; j++) {

            printf ("Ponto %i\n", j);
        }
        printf ("\n");
    }
return 0;
}