#include <stdio.h>
//Aula de Manipulando Matrizes

int main (void) { // int main vazio: () ou void: (void) é a mesma coisa

    int matriz [5][5] = {{  1,  2,  3,  4,  5},
                         {  6,  7,  8,  9, 10},
                         {11, 12, 13, 14,  15},
                         {16, 17, 18, 19,  20},
                         {21, 22, 23, 24,  25}};

// Fazendo um cilco for que vai printar essa matriz:

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++){
            printf ("%i ", matriz [i][j]);
        }
        printf ("\n");
    }
// PARA CADA NOVA DIMENSÃO DE UMA MATRIZ, SERÁ NECESSÁRIO MAIS UM CICLO PARA PRINTA-LA
return 0;
}