#include <stdio.h>
#include <stdio.h>

    int main(){

        /*3) Construa um programa que leia uma matriz de tamanho
        5 x 5 e escreva:
        O valor e a localização (linha, coluna) do maior valor encontrado
        a matriz*/

            int matriz[5][5];
            int maiorvalor;
            int linha;
            int coluna;

            for(int i=0; i<5; i++){
                for(int j=0; j<5; j++){
                    printf("Digite o valor [%i][%i]\n",i,j);
                    scanf("%i", &matriz[i][j]);
                }
            }

                maiorvalor=matriz[0][0];

                for(int i=0; i<5; i++){
                    for(int j=0; j<5; j++){
                        if(maiorvalor<matriz[i][j]){
                            maiorvalor=matriz[i][j];
                            linha = i;
                            coluna = j;                   
                        }
                    }
                }

                printf("o maior valor é %i:\n a posição dele é %i %i", maiorvalor, linha, coluna);                                   


        return 0;
    }
