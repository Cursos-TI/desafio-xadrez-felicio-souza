#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    // Torre: Move-se em linha reta horizontalmente ou verticalmente. 
    // Seu programa deverá simular o movimento da Torre cinco casas para a direita.
 
    // Bispo: Move-se na diagonal. Seu programa deverá simular o movimento do Bispo
    //  cinco casas na diagonal para cima e à direita. Para representar a diagonal, 
    //  você imprimirá a combinação de duas direções a cada casa (ex: "Cima, Direita").
     
    // Rainha: Move-se em todas as direções. Seu programa deverá simular o movimento da Rainha 
    // oito casas para a esquerda.


    // Movimento da torre usando o (fo)

    int i;

    printf("\nMovimento da Torre:\n");
    for (i = 1; i <=5; i++){
        printf("Direita: %d casa\n", i);

    };

    //Movimento do bispo (usando while)

    printf("\nMovimento do Bispo \n");
    i = 1;
    while(i <= 5){
        printf("Cima, Direita: %d casa \n", i);
        i++;
    }

    //Movimento da rainha usando (Do while)

    
    printf("\nMovimento da Rainha\n");
    i = 1;
    do{
        printf("Esquerda: %d casa\n", i);
        i++;

    }while (i <= 8);



    return 0;

}

 
