#include <stdio.h>
// Aula de Manipulando Vetores

int main (void) { // int main vazio: () ou void: (void) é a mesma coisa

    float notas[5] = {0};
    float total = 0;
    float media = 0;

    printf ("insira 5 notas:\n");

    for (int i = 0; i < 5; i++){
        scanf ("%f", &notas[i]); // 5 scans para 5 notas
    }

    for (int i = 0; i < 5; i++)
        total += notas[i];
    
    media = total / 5;

    printf("A media do aluno e %f", media);

return 0;
}