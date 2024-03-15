#include <stdio.h> 
//Aula de Conceito e Criação de Variáveis em C

int main (void) { // int main vazio: () ou void: (void) é a mesma coisa

    int minhaidade; //foi reservado um espaço na memória para um número inteiro com esse apelido
    //isso cria uma variável de números inteiros    

    minhaidade = 23; //valor designado à variável

    printf ("Minha idade é = %i. \n", minhaidade);
    /* %i sinaliza para o computador que uma variável inteira 
    será usada dentro do printf */
    
return 0;
}