#include <stdio.h>

//https://youtu.be/7YHjxBvrvvw?list=PLa75BYTPDNKZWYypgOFEsX3H2Mg-SzuLW

//Aula de PONTEIROS E FUNÇÕES

int main (void) { // int main vazio: () ou void: (void) é a mesma coisa

    int teste = 1;
    int *pteste = &teste; 

    teste_variavel (teste);
    teste_ponteiro (pteste); // passamos o ponteiro sem o " * " pois a função recebe um 
                             // endereço de memória, se passarmos com o " * " , estaremos
                             // passando o VALOR que esse ponteiro aponta

/* Na função teste_ponteiro, nós estamos utilizando O ENDEREÇO DE MEMÓRIA DA VARIAVEL COMO
PARÂMETRO.

Observamos que na linha 10 o ponteiro "pteste" recebe o endereço de memória da variável teste
assim, ao usarmos o pteste na função de incremento, a função irá incrementar o valor do 
endereço de memória que pteste aponta. 
Como pteste aponta para o endereço de memória da variável teste, então o valor da variavel
teste será alterado.
Não há necessidade de retornar nada da função, pois a alteração é feita direto no valor salvo
no endereço de memória  */                            
    printf("%i\n", teste);

return 0;
}

void teste_variavel (int x){ //função que incrementa 1 à variavel inteira inserida
    ++x;
}

void teste_ponteiro (int *px){ //função que incrementa 1 ao VALOR do endereço de memória apontado pelo ponteiro inserido
    ++*px;                     // no caso aqui, o pteste aponta para teste
}
// Utilizamos ponteiros para criar funções mais eficientes
// com ponteiros criamos programas que usam muito menos recursos do computador