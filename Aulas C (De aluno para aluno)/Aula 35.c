#include <stdio.h>
//Aula de Funções Recursivas

/* Funções Recursivas são funções que se repetem em um loop */

int main (void) { // int main vazio: () ou void: (void) é a mesma coisa

int fatorial (int x);
int numero, resultado;

printf ("Digite um numero inteiro:");
scanf ("%i", &numero);

resultado = fatorial (numero);
//Função Fatorial recebe "numero"

printf ("O fatorial eh %i", resultado);

return 0;
}

int fatorial (int x){

    int resultado;

    if(x == 00){
        resultado = 1;
    }else{
        resultado = x * fatorial(x - 1);
    }

return resultado;
}

/*** IMPORTANTE ***/

/* Quando temos uma função recursiva, quando estamos dentro da função e chamamos ela
mesma, o programa cria uma copia da função que deve ser resolvida antes da função
que fez o chamado inicial */
