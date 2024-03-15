#include <stdio.h>
//Aula de Como utilizar Operador Condicional " ? : "

int main () { // int main vazio: () ou void: (void) é a mesma coisa

    int n1 = 10;
    int n2 = 20;

    int resposta;

    n1 < n2 ? printf ("sim\n") : printf ("nao\n");

// o primeiro printf reprensenta o que acontece se a pergunta for verdade e o segundo mentira

    n1 < n2 ? (resposta = 10) : (resposta = 15);
    printf("%i\n", resposta);

return 0;
}