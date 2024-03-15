#include <stdio.h>
//Aula de Como Utilizar "if else"

int main (void) { // int main vazio: () ou void: (void) é a mesma coisa

int idade;
printf ("Favor informar idade:\n");
scanf ("%i", &idade);

if (idade < 18) {
// se a condição do "if" for verdadeira, ele executa o comando em parenteses
    printf("De Menor");

} 
else //OBS: esse "{}" não é necessário caso só haja 1 linha de comando
// se a condição do "if" não for verdadeira, ele executa o comando do "else"
    printf("De Maior");

return 0;
}