#include <stdio.h>
//Aula de Introdução a Funções

int main (void) { // int main vazio: () ou void: (void) é a mesma coisa
// (main) é uma função

    void imprimaMensagem(void);

    imprimaMensagem(); //chama-se a função para o programa executa-la

return 0;
}

//Diferente de uma variável as funções são iniciadas fora da função (main)

void imprimaMensagem(void) {
// void que está na frente é o que eu quero que a função retorne
// "imprimaMensagem" é o nome da função

    printf("teste.\n");

}

/* OBS: Jogando a função depois do main pode causar erros
Por isso declara-se a função dentro do main e a escreve depois*/