#include <stdio.h>
//Aula de

int main (void) { // int main vazio: () ou void: (void) é a mesma coisa

    int x = 10;
    int *ponteiro; //Cria=se um ponteiro que ainda não aponta pra nada
    ponteiro = &x; //Pontiero aponta no endereço de memória de X

    int y = 20;
    *ponteiro = y; //Valor do ponteiro é igual à Y

    printf("%i %i\n", x, y);

return 0;
}