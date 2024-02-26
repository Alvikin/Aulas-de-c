#include <stdio.h>
//Aula de Comportamento de Argumentos com Funções

/* Quando se passa uma variavel para uma função, ao chamar a função, o compilador
fará uma cópia daquela variável, ou seja, agora temos duas variáveis iguais, porém
INDEPENDENTES.
Sabendo disso, ao executarmos esse programa, veremos que o "X" que está dentro do
MAIN será printado com valor de 10, em vez de 20. Mesmo chamando a função que 
alteraria seu valor antes do printf. Ao mesmo tempo teremos a cópia desse x que 
será printada pela função e terá o valor de 20.
Para alterarmos o valor do x original, teriamos que dar a função um RETORNO. */

/* Já o vetor funciona de outra forma, nós não estamos copiando o vetor e passando
ele para a função. No caso do vetor, estamos passando seu endereço na memória.
Por isso, ao alterar seu valor dentro da função, também será alterado seu valor
fora dela */

int main (void) { // int main vazio: () ou void: (void) é a mesma coisa

    void funcaoPrint (int x, int vetor[]);
    int x = 10;
    int vetor[3] = {10}; //O primeiro membro do vetor vale 10

    funcaoPrint (x, vetor);

    printf ("Variavel int na funcao principal = %i \n", x);
    printf ("Vetor na funcao principal = %i \n", vetor[1]);

return 0;
}

void funcaoPrint (int x, int vetor[]){

    x = x + 10;
    vetor[1] = 20;

    printf ("variavel int na funcao print = %i \n", x);
    printf ("Vetor na funcao print = %i \n\n", vetor[1]);

}

