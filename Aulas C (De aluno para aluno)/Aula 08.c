#include <stdio.h>
//Aula de Variáveis Tipo float e char

int main (void) { // int main vazio: () ou void: (void) é a mesma coisa

    int inteira = 10;
    float decimal = 10.5;
    char caractere = 'a';

// Float declara variáveis decimais
// Char permite armazenar caracteres nas variáveis

printf ("%i\n", inteira);
printf ("%f\n", decimal);
printf ("%c\n", caractere);

// Para imprimir variáveis decimais (tipo float) no printf usamos o %f
// Para imprimir variáveis de carateres (tipo char) no printf usamos o %c

return 0; 
}
