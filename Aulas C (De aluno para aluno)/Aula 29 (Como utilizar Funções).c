#include <stdio.h>
//Aula de Como Utilizar Funções

int main (void) { // int main vazio: () ou void: (void) é a mesma coisa

    float calcularAreaQuadrado(float x, float y);

    float area = calcularAreaQuadrado(10.0, 20.0); 
    // Ao chamar a função, a main irá inserir esses valores em X e Y
    // Precisamos declarar a variável AREA na MAIN também
    
    printf ("A area eh: %f\n", area);

return 0;
}

/* Esse primero termo "float" mostra que essa função vai retornar algo de tipo
"FLOAT" para o "MAIN" e SÓMENTE o tipo FLOAT, caso fosse int, retornaria algo int, 
caso fosse char, retornaria char e assim por diante */

// O segundo termo é o nome da função

// E o terceiro é o que a função receberá de informação

float calcularAreaQuadrado(float x, float y){

float area = x * y;

return area; //aqui dizemos à função o que ela irá retornar
}