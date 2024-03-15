#include <stdio.h>
//Aula de Lista de Exercícios Facebook (1)

int main (void) { // int main vazio: () ou void: (void) é a mesma coisa

    int n1, n2;

    printf ("Digite 2 numeros inteiros:\n");
    scanf ("%i %i", &n1, &n2);

    if (n2 == 0)
        printf ("Divisão por zero não permitido.\n");
    else {
        if (n1 % n2 ==0)
            printf ("%i e divisivel por %i. \n", n1, n2);
        else    
            printf ("%i nao e divisivel por %i. \n", n1, n2);
    }

return 0;
}