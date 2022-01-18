#include <stdio.h>
#include<stdlib.h>
#include<string.h>
/*2) Faça um programa que leia uma matriz n x n e imprima a k coluna..*/

float funcao_N_Colunas(float V[7][5]){
  int i, j;
  float soma = 0.0;
  float media = 0.0;
  int contador_Coluna = 0;
  int v = 0 ;
  //Laços for e wile e interação para saber qual coluna deseja saber os valores: Soma, Média e contagem... */

  printf("Digite qual Coluna deseja Visualizar? ");
    scanf("%d", & v);
  for (i=0; i < 7; i++){
    V[i][j] = 0;
    while( j <= i){
      printf("\n%5.1f\n",V[i][v]);
      soma += V[i][v];
      contador_Coluna +=1;
      media = ((soma)/ contador_Coluna);
      j += 1;
    }
}//Saída de Valores
printf("Soma: %.2f\nMédia: %.2f\nContagem: %d\n", soma,media,contador_Coluna);
return 0;
}

int main(){

  //int v_0 = 0, v_1 = 0;
  /*Alguns testes 
  printf("Digite o quantas Linhas da Matriz: ");
    scanf("%d", &v_0);
    printf("Digite a quantidade de Colunas da Matriz ");
      scanf("%d", &v_1);
    */  
    //float UV[v_0][v_1];
    float Matriz_Y[7][5] ={{2,4,8,16,32},
                           {4,8,16,32,64},
                           {6,12,24,64,128},
                           {8,16,32,96,256},
                           {10,20,40,128,512},
                           {12,24,48,160,1024},
                           {14,28,56,1,0}};

//Chamada de função
  funcao_N_Colunas(Matriz_Y);

return 0;
}








