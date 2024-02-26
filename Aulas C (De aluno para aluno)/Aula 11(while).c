#include <stdio.h>
//Aula de Como Utilizar "while" 

int main (void) { // int main vazio: () ou void: (void) é a mesma coisa
    int contador = 1;
    // Enquanto contador for <=5 o "while" usará o printf e adicionará 1 à variavel contador
    while (contador <= 5) {

        printf ("%i\n", contador);
        ++contador;
    } 
    
return 0;
}