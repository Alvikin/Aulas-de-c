#include <stdio.h>
#include <stdbool.h>
//Aula de Revisão Tipos de Variáveis

int main () { // int main vazio: () ou void: (void) é a mesma coisa

    // char variavelchar = 'a'; //armazena um caractere
    // printf ("%c\n", variavelchar);
    // scanf ("%c\n", variavelchar);
    // printf ("%c\n", variavelchar);

    // bool variavelbool = true; 
    // printf ("%i\n", variavelbool);

    // int variavelint = 10;
    // printf ("%i\n", variavelint);
    // scanf ("%i", &variavelint);
    // printf ("%i\n", variavelint);

    // long int variavellongint = 478453218796; 
    //variaveis int longas são usadas para definir numeros de grandezas maiores
    //o computador reserva mais memória para este tipo de variavel

    // const int variavelconstint = 10;
    //esse tipo de variavel inteira não pode ser alterada
    //ela é uma "CONSTANTE"
    //um exemplo é o valor de "pi" que é sempre o mesmo, 3,14

    // float variavelfloat = 10.10; //armazena numeros decimais
    // printf ("%f\n", variavelfloat);
    // scanf ("%f", &variavelfloat);
    // printf ("%f\n", variavelfloat);

    double variaveldouble = 10.21; //ela tem uma precisão maior comparada à float
    printf ("%f\n", variaveldouble); //caso a precisão após a virgula seja melhor
    scanf ("%f", &variaveldouble);
    printf ("%f\n", variaveldouble);

    //unsigned int x = -15; //o "UNSIGNED" limita à variavel a valores positivos

return 0; 
}