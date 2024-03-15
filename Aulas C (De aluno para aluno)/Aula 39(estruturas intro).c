#include <stdio.h>
//Aula de Introdução Estruturas

int main (void) { // int main vazio: () ou void: (void) é a mesma coisa

// primeiro defini-se a estrutura e da um nome a ela
// É NECESSÁRIO DEFINIR A ESTRUTURA ANTES DE DECLARA-LA
// podemos colocar varios tipos de valores dentro da struct
    struct horario {

        int horas;
        int minutos;
        int segundos;
    };
// Agora iremos DECLARAR A ESTRUTURA
// Declaramos uma estrutura de TIPO HORARIO que se chama AGORA
    struct horario agora;

// Alterando valores dentro da Struct:
    agora.horas = 15;
    agora.minutos = 17;
    agora.segundos = 30;

    printf("%i:%i:%i\n", agora.horas, agora.minutos, agora.segundos);

return 0;
}