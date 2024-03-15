#include <stdio.h>
//  Aula de Declarar Vetores

int main () { // int main vazio: () ou void: (void) é a mesma coisa

    int vetor[5] = {1,2,3,4,5}; // entre os {} escreve-se a lista

    for (int i = 0 ; i < 5 ; i++){
        printf("%i\n", vetor[i]);
     }

return 0;
}