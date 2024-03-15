#include <stdio.h>
//Aula de Utilização de Variáveis do Tipo float

int main (void) { // int main vazio: () ou void: (void) é a mesma coisa

int num1 = 5;
float num2 = 2;
float resultado = num1 / num2;

printf ("%f\n", resultado);

/* Como a variável "resultado" é inteira (int),
o compilador não imprime sua parte decimal, por isso
,a variável "resultado", recebe o valor "2" na divisão
*/

/*Agora mudaremos o tipo das variáveis num1 e resultado
para float. Também é necessário mudar o printf. 
De %i para %f */

return 0; 
}
