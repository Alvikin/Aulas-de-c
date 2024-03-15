#include <stdio.h>
//Aula de Ponteiros "char, int, double"

//https://youtu.be/zZlIy3hp0c0?list=PLa75BYTPDNKZWYypgOFEsX3H2Mg-SzuLW

int main (void) { // int main vazio: () ou void: (void) é a mesma coisa

int x = 10;
double y = 20.50;
char z = 'a';

// int *pX;    (*Px = &x) quer dizer que o ponteiro aponto pro valor regsitrado no endereço de memória
// pX = &x;    (Px = &x) o ponteiro aponta pro endereço de memória

// ou 
int *pX = &x;
double *pY = &y;
char *pZ = &z;

printf ("Endereco x = %i / Valor x = %i\n", pX, *pX);

double soma = *pX + *pY;

printf ("Valor x = %f\n", soma);

int *resultado; // declara PONTEIRO de nome resultado
resultado = 6422272;

printf ("valor x = %i\n", *resultado);

return 0;
}