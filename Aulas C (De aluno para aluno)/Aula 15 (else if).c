#include <stdio.h>
//Aula de Como Utilizar Múltiplos "else if"

int main (void) { // int main vazio: () ou void: (void) é a mesma coisa

int idade;
    printf ("informar idade\n");
    scanf ("%i", &idade);

    if (idade <= 5)
        printf("bebê\n");
    else if (idade > 5 && idade <= 10)
        printf("Criança\n");
    else if (idade > 10 && idade <= 18)
        printf("Adolescente\n");
    else if (idade > 18 && idade <= 50)
        printf("Adulto\n");
    else
        printf("Idoso\n");
    
    







return 0;
}