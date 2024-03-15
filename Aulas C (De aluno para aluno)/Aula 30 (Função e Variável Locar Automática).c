#include <stdio.h>
//Aula de Função e Variável Local Automática

int main (void) { // int main vazio: () ou void: (void) é a mesma coisa

    void teste(void);

    teste();
    teste();

return 0;
}

void teste(void) {
//Essa variavel é local pq ela é visível apenas pela sua função
//Ela é automática pq a cada vez que sua função é chamada. Ela é RECRIADA, perdendo seus valroes antigos
    int variavelLocalAutomatica = 2; 
    variavelLocalAutomatica *= 2;

    printf ("%i\n", variavelLocalAutomatica);

}