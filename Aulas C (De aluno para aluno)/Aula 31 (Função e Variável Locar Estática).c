#include <stdio.h>
//Aula de Função e Variável Local Estática

int main (void) { // int main vazio: () ou void: (void) é a mesma coisa

    void teste(void);

    teste();
    teste();
    teste();
//OBS: variaveis dentro de funções não podem ser visualizadas por outras
// a função main terá um erro caso tentemos chamar as variaveis da função teste
return 0;
}

void teste(void) {

    int variavelLocalAutomatica = 2; 
    variavelLocalAutomatica *= 2;
    printf ("Local Automatica = %i\n", variavelLocalAutomatica);

// Agora veremos uma variavel que não perde seu valor quando chamamos a função
    static int variavelLocalEstatica = 2;
    variavelLocalEstatica *= 2;

    printf ("Local Estatica =  %i\n", variavelLocalEstatica);

}