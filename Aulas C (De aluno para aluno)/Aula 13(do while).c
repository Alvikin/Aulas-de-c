#include <stdio.h>
//Aula de Como Utilizar "do while"

int main (void) { // int main vazio: () ou void: (void) é a mesma coisa

    int i = 0;

    while (i != 0) {
        printf ("teste\n");
    }

    do {
        printf ("Teste 2\n");
    } while (i != 0);

/* A diferença do "do while" para o "while", é que, no "do", ele executa o comando
e depois verifica se sua condição é cumprida para continuar executando, enquanto
no "while" ele verifica se a sua condição é cumprida antes de começar a executar
o comando */

return 0;
}