#include <stdio.h>
//Aula de Funções que Chamam Outras Funções

//Criando um programa que calcula numero de valores absolutos
int main (void) { // int main vazio: () ou void: (void) é a mesma coisa

    float somaDeDigitos (float num1, float num2);
    float a, b , soma;
    printf ("Digite 2 numeros: ");
    scanf ("%f", &a);
    scanf ("%f", &b);

    soma = somaDeDigitos(a, b);
    // Função "somaDeDigitos" recebe "a" e "b" nos lugares de num1 e num2

    printf ("A soma dos digitos eh %f\n", soma);

return 0;
}

float somaDeDigitos (float num1, float num2){

    float ValorAbsoluto (float x);

    if (num1 < 0) {
        num1 = ValorAbsoluto(num1);
    }
    if (num2 < 0) {
        num2 = ValorAbsoluto(num2);
    }

return num1 + num2;
}

float ValorAbsoluto (float x){

return x * -1;
}