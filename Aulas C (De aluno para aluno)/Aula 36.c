#include <stdio.h>
//Aula de Funções que Recebem Vetores como Argumento

int main (void) { // int main vazio: () ou void: (void) é a mesma coisa
// Criando uma função para ordenar esse vetor
    int vetor [10] = {6, 4, 1, 9, 8, 0, 5, 7, 3, 2};
    int i;
    void ordemCrescente(int vetor[], int n);
    // NÃO É NECESSÁRIO INFORMAR O TAMANHO DO VETOR CASO ELE SEJA BIDIMENSIONAL

    ordemCrescente(vetor, 10);
    // Ao passar o vetor pra uma função podemos passar só o nome dele

    for(i = 0; i < 10; i++){
        printf("%i ", vetor[i]);
    }

return 0;
}

// Esse algoritmo não é o mais eficiente, sim o mais facil

void ordemCrescente(int vetor[], int n){

    int i, j, temporaria;

    for(i = 0; i < n; i++){

        for(j = i + 1; j < n; j++){

            if(vetor[i] > vetor[j]){
                
                temporaria = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temporaria;
            }
        }     
    }

}