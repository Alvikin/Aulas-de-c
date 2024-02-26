#include <stdio.h>
//Aula de Introdução Matrizes (Matrizes bidimensionais)

int main () { // int main vazio: () ou void: (void) é a mesma coisa

// Matrizes possuem linhas e colunas ou mais, enquanto os vetores só possuem linhas

int matriz [3] [3] = {{1 ,2 ,3},    //  colunas: || ---- linhas: -----
                      {4, 5, 6},
                      {7, 8, 9}};

printf ("%i", matriz [0][5]);

// outra forma de escrever matrizes:

int matriz2 [3] [3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

return 0;
}