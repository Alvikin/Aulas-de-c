#include <stdio.h>
//Aula de Desafio | Como Calcular o Fatorial de Um Número

int main (void) { // int main vazio: () ou void: (void) é a mesma coisa

    int fatorial = 5;
    int resposta = 1;

    for ( ; fatorial >= 1; --fatorial) {

        resposta *= fatorial; //isso é o mesmo que escrever: "resposta = resposta * fatorial"

        /* Primeiro, resposta vale 1 que é multiplicado por 5, agora "resposta vale 5"
        Então, na próxima multiplicação, resposta, que agora vale 5, irá multiplicar
        4 por 5. Assim por diante até obtermos a resposta do nosso fatorial */
    }

    printf ("O fatorial e %i\n", resposta);

return 0;
}