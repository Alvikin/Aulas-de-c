#include <stdio.h>
//Aula de Formatação de Output

int main (void) { // int main vazio: () ou void: (void) é a mesma coisa

    int intVar = 9999999;
    int intVar2 = 10;
    

    //Formatação de variáveis inteiras
    //Colocar um número antes da letr (ex: %5d) diz quantos espaços seram dados antes do numero ser imprimido
    printf("Variavel inteira (%%d) = %5d\n", intVar); // "%d" printa variaveis inteiras
    printf("Variavel inteira (%%i) = %5i\n", intVar); // "%i" printa variaveis inteiras
    printf("Variavel inteira (%%x) = %x\n", intVar); // "%x" printa variaveis inteiras NA BASE 16
    printf("Variavel inteira (%%o) = %o\n", intVar); // "%o" printa variaveis inteiras NA BASE 8
 

    double doubleVar = 100.123456789;

    //Formatação de variáveis Float e Double
    printf("Variavel double (%%f) = %f\n", doubleVar); // "%f" imprime 6 casas depois da virgula e arredonda o número
    printf("Variavel double (%%e) = %e\n", doubleVar); // "%e" imprime o número em notação cientifica
    printf("Variavel double (%%g) = %g\n", doubleVar); // "%g" imprime 3 casas depois da virgula e não arredonda
    printf("Variavel double (%%a) = %a\n", doubleVar); // "%a" igual o "e" só que com virgula

    //IMPORTANTE:
    //Para imprimir um número com uma quantidade de casas decimais especificas
    //usa-se %.xf [x = numero de casas]

//EXEMPLO:

    printf("Variavel double (%%f) = %.2f\n", doubleVar); //imprime com 2 casas decimais

return 0;
}