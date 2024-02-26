#include <stdio.h>
//Aula de Função scanf | Obter Dados/Valores do Usuário
int main (void) { // int main vazio: () ou void: (void) é a mesma coisa

    int base;
    int altura;
    int area;

    printf ("Digite o valor da base:");
    scanf ("%i", &base);

// %i no scanf representa que o usuário ira escrever um inteiro
// & no scanf avisa que esse número vai para uma variável
// scanf recebe um valor do usuário

    printf ("Digite o valor da altura:");
    scanf ("%i", &altura);

    area = base * altura;

    printf ("o valor da area do retangulo e = %i", area);
}