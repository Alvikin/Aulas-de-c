#include <stdio.h>
//Aula de Como Inverter um número | Operador Resto %

int main (void) { // int main vazio: () ou void: (void) é a mesma coisa

    int n, cifra;

    printf ("Digite um numero:\n");
    scanf ("%i", &n);

    if (n >= 0) {
        do {
            cifra = n % 10;
            printf ("%i", cifra);
             n /= 10;
        } while (n != 0);
    }
//Enqunanto o n não for 0 o ciclo continuará rodando

    else if (n < 1) {
        n = n * -1;

        printf("-");

        do {
            cifra = n % 10;
            printf ("%i", cifra);
             n /= 10;
        } while (n != 0);
    }
return 0;
}