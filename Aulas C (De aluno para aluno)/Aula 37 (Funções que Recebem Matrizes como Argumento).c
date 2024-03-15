#include <stdio.h>
//Aula de Funções que Recebem Matrizes como Argumento

int main (void) { // int main vazio: () ou void: (void) é a mesma coisa

    void funcaoprint (int x [] [3]);
    int matriz [3] [3] = {1,2,3,4,5,6,7,8,9};

// Ao chamarmos a funcao só precisamos chamar a matriz com seu nome
    funcaoprint (matriz);



return 0;
}

//Deve-se, NO MINIMO, informar a parte tridimensional da matriz
void funcaoprint (int x [] [3]) {

    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++){
            printf("%i ", x [i] [j]);
        }
        printf("\n");       
    }

}