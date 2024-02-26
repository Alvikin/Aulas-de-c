#include <stdio.h>
//Aula de Como Utilizar "switch"

int main (void) { // int main vazio: () ou void: (void) é a mesma coisa

    int i;

/* O comando "switch" é uma forma de simplicar um programa que teria vários "else if" 
com o "switch", escolhemos uma variável e nos casos: perguntamos o valor dela para
saber se eles serão executados */

    printf ("Insira um numero inteiro de 1 a 5\n");
    scanf ("%i", &i);

/*  O "break" faz com que o programa pare de executar o comando "switch"
fazendo com que pule a execução de todos os cases que vem depois dele.
O "break só acontece caso UM dos cases seja executado" */

    switch (i) {
        case 1: //caso o valor da variavel "i" seja "1" executa o printf ("primeiro")
            printf ("primeiro\n");
            break;
        case 2: //caso o valor da variavel "i" seja "2" executa o printf ("segundoo")
            printf ("segundo\n");
            break;
        case 3:
            printf ("terceiro\n");
            break;
        case 4:
            printf ("quarto\n");
            break;
        case 5:
            printf ("quinto\n");
            break;
        default: //Caso a variavel "i" não esteja em nenhum dos "cases", o programa executa a opção padrão (default)
            printf ("opçao nao valida\n");
            break;
    }

/* Não são aceitas expressões condicionais no comando switch…case, somente são 
aceitos valores constantes.

Esta é um diferença bem grande quando comparado ao comando if…else.

Portanto caso tenha que testar uma condição você terá que usar 
if…else ao invés do switch…case. */

return 0;
}