#include<stdio.h>
#include<stdlib.h>


/*3) Faça um programa para exibir a soma de duas matrizes quadradas 3 x 3. Deverá ser criada uma 
função para ler uma matriz (será chamado duas vezes com parâmetros diferentes) e uma segunda 
função que irá imprimir a soma das matrizes passadas como parâmetro*/

int funcao(int A[3][3],int B[3][3]){

  int C[3][3];
  int i,j;
  //
  for(i =0; i < 3; i++){
    for(j=0; j < 3; j++){
    C[i][j] = 0;
      
/********** Lendo Matriz A ********/
      printf("Matriz A[%d,%d]=",i,j);
        scanf("%d", &A[i][j]);
/********** Lendo Matriz B *******/
        printf("Matriz B[%d,%d]=",i,j);
          scanf("%d", &B[i][j]);
       //Soma da Matriz A com Matriz B   
        C[i][j] += (A[i][j] + B[i][j]);  
  }
}
/******* Saída de Dados ******/
  for(i = 0; i <3; i++){
    for(j =0; j < 3; j++){
    printf("\n[%d,%d]->Soma = %d\n", i,j,C[i][j]);
  }
}
return 0;
}
/*
int funcao_Soma(funcao){
  int C[3][3];

  return 0;
}
*/

int main(){

  int  i_v0 = 0,j_v1 = 0;
  int soma = 0;
/*
  printf("Digite a quantidade de linhas: "); 
    scanf("%d", &i_v0);
    printf("Digite a quantidade de Colunas: "); 
      scanf("%d", &j_v1);
*/
    int w0[3][3];
    int w1[3][3];
  
  funcao(w0,w1); 
return 0;

}

