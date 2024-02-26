#include <stdio.h>
//Aula de Estruturas que contêm Ponteiros

int main (void) { // int main vazio: () ou void: (void) é a mesma coisa

// OS MEMBROS DA ESTRUTURA CONTEM PONTEIROSSSSSSSSSS

    struct horario{
        int *phora;
        int *pminuto;
        int *psegundo;
    };

    struct horario hoje; //declaramos uma variavel 'hoje' do tipo: struct horario

    int hora = 200;
    int minuto = 300;
    int segundo = 400;

    hoje.phora = &hora; // o ponteiro phora aponta para o endereço de memória da variavel hora
    hoje.pminuto = &minuto;
    hoje.psegundo = &segundo;

    printf("Hora - %i\n", *hoje.phora);
    printf("Minuto - %i\n", *hoje.pminuto);
    printf("Segundo - %i\n", *hoje.psegundo);

    *hoje.psegundo = 1000;

    printf("Segundo - %i\n", *hoje.psegundo);


return 0;
}