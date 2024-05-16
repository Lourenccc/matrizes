#include <stdio.h>
#include <stdlib.h>

int main(){

    /*2) Faça um algoritmo que leia uma matriz 3 por 3 (3x3) e
    retorna a soma dos elementos da sua diagonal principal e
    da sua diagonal secundária;*/

    int matriz3x[3][3];
    int diagonal1 = 0;
    int diagonal2 = 0;

        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                printf("Digite um numero da matriz[%i] [%i]\n", i, j);
                scanf("%i", &matriz3x[i][j]);
            }//for para a coluna
        }//for para a linha

            for(int i=0; i<3; i++){
                for(int j=0; j<3; j++){
                    if(i==j){
                        diagonal1= diagonal1 + matriz3x[i][j]; //repetição para a matriz primaria ( 0 = 0 + n) ( n = n = n1)
                    }   
                }//roda linha
            }//roda coluna

                for(int i=0; i<3; i++){
                    for(int j=0; j<3; j++){
                        if(i+j==2){
                            diagonal2 = diagonal2 + matriz3x[i][j]; //repetição para a matriz secundaria
                        }
                    }
                }
            printf("O valor da diagonal principal é %i\n", diagonal1);
            printf("O valor da diagonal secundaria é %i\n", diagonal2);

    return 0;
}
