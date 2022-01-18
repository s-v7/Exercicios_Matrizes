#include<stdio.h>

/*1) Crie uma função que receba uma matriz 2 x 3 de números reais e retorne a média dos valores da 
matriz. Crie uma função principal que chame a função e imprima a média.
*
*     Author: Silas Vasconcelos ->{s-v7};
*     
*
*
*/
float funca_Media(float Matriz[2][3]){
  
  int i, j,x;
  float media = 0.0, soma = 0.0;
  int contador = 0;
  //
  for (i=0; i < 2; i++){
     Matriz[i][j] = 0;
    for(j=0; j < 3; j++){
     
/*
        printf("i=%d j=%d: ", i, j);
          scanf("%d", &x);
 */
          //
            //Matriz[i][j] = x;
            soma += Matriz[i][j];
            contador += 1;
            media = (float)((soma)/contador);
    }
  }
  printf("Média: %.2f\nSoma: %.2f\nContador: %d\n",media,soma,contador);

return 0;
}

int main(){
  /* ... */

  float Matriz[2][3] ={{2,1,2},
                       {100,1,1}};
  
int linha = 0, coluna = 0;
  /*
  printf("Digite quantas Linhas: ");
    scanf("%d", &linha);
    printf("Digite a quantidade de Coluna: ");
      scanf("%d", &coluna);
    */  
      float UV[linha][coluna];


  funca_Media(Matriz);

return 0;
}
























