#include <stdio.h>
//Aula de Introdução Ponteiros(Pratica)

int main (void) { // int main vazio: () ou void: (void) é a mesma coisa

    int x ; //Pedimos à memória um espaço para aramazenar um valor inteiro
    x = 10; //Definimos o valor 

    printf ("%i\n", &x); // ao colocar o "&" antes do x, printamos seu endereço na memória

    int *ponteiro; //Criamos um ponteiro que aponta um valor inteiro, no momento ele não está apontando para nenhum lugar
    ponteiro = &x; //Dizemos que esse ponteiro está aponta para o endereço de memória da variavel x

    printf ("%i\n", *ponteiro); // ao usarmos o * iremos printar o valor da memória
    printf ("%i\n", ponteiro); // sem o * printaremos o endereço da memória

    // COM --- * --- ACESSAMOS O ----VALOR---- DA MEMÓRIA
return 0;
}