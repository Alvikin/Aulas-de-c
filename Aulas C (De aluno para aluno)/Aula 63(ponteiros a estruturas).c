// https://youtu.be/qvPh-QgQJmQ?list=PLa75BYTPDNKZWYypgOFEsX3H2Mg-SzuLW

#include <stdio.h>

//Aula de Ponteiros à Estruturas

int main (void) { // int main vazio: () ou void: (void) é a mesma coisa

    struct horario{
        int hora;
        int min;
        int s;
    };

    struct horario agora; // criamos um estrutura horario chamada agora 
    struct horario *depois; // criamos um PONTEIRO pra uma estrutura do tipo horario
    depois = &agora; // o ponteiro depois aponta para o endereço de memória de agora

    // queremos o usar o ponteiro *depois para alterar os valores dentro da estrutura 'agora'
    // para isso faremos:

    //*depois.hora = 20; Se executarmos esse comando teremos um ERRO
    // esse ERRO acontece porque o compilador enxerga (depois.hora) antes de ponteiro
    // para realizar o que queremos. UTILIZAMOS:

    (*depois).hora = 20; // agora estamos dizendo para o compilador enxergar o (*depois) primeiro !
    
    /* Porém, escrever assim é muito trabalhoso e a linguagem C tem um ATALHO para isso, que é a -> */

    depois->hora = 20; // estamos fazendo o mesmo que o acima só que com o atalho: " -> "

    printf("%i: %i: %i", agora.hora, agora.min, agora.s);

    

return 0;
}