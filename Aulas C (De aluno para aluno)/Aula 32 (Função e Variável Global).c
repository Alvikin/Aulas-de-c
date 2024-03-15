#include <stdio.h>
//Aula de Função e Variável Global

// E se pudermos declarar uma variável que é visível à todas as funções ?
// Para isso é só criarmos essa variável fora de qualqur função

int gVariavelGlobal = 2;  /****IMPORTANTE****/


int main (void) { // int main vazio: () ou void: (void) é a mesma coisa

        void teste(void);

    printf ("Global = %i\n", gVariavelGlobal);

    teste();
    teste();
    teste();

return 0;
}

void teste(void) {
    
    int variavelLocalAutomatica = 2; 
    variavelLocalAutomatica *= 2;
    printf ("Local Automatica = %i\n", variavelLocalAutomatica);

    static int variavelLocalEstatica = 2;
    variavelLocalEstatica *= 2;
    printf ("Local Estatica =  %i\n", variavelLocalEstatica);

    gVariavelGlobal *= 2;
    printf ("Global = %i\n", gVariavelGlobal);
}