#include <stdio.h>
//Aula de Introdução de Vetores

int main (void) { // int main vazio: () ou void: (void) é a mesma coisa

// numero dentro das chaves representa a quantidade de 'blocos' do vetor
// esse vetor consegue armazenar 5 valores dentro deles
// esse vetor também pode ser de outros tipos de variaveis (Char, float, double, etc)

    int nota[5];
    nota[0] = 10; // O primeiro bloco do vetor é SEMPRE o bloco '0'
    nota[1] = 5;
    nota[2] = 4;
    nota[3] = 2;
    nota[4] = 7;

    printf("%i\n", nota[0]); //printa '10'

return 0;
}
/* se mandarmos o programa printar um vetor que não foi definido, 
receberemos um número aleatório que está armazenado na mamória e causará um ERRO */