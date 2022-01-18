#include <stdio.h>

/*4) Faça uma função que imprima a diagonal inversa de uma matriz*/

/*Funçaõ que imprime a diagonal inversa de uma matriz 3x3*/
float diagonal_Inversa(float V[3][3]){
  int i, j;
  float soma = 0.0;
  float media = 0.0;
  int contador_Coluna = 0;
  int v0 = 0, v1 = 0, v2 = 0;
  //Laços for e wile
  for (i=0; i < 3; i++){
    while(j < i){
    V[i][j] = 0;
      v0 = V[0][2];
      v1 = V[1][j%2==1];
      v2 = V[2][j%2==0];
      //printf("\n%.2f\n%.2f\n%.2f\n",V[0][2],V[1][1],V[0][0]);
      j +=1;
    }
  }
  printf("Diagonal Inversa = {%d,%d,%d}",v0,v1,v2);
 
return 0;
}

int main(){
/*matriz 3x3*/
float X[3][3] ={{1,0,7}, //[0][2];
                {0,1,0}, //[1][1];
                {21,0,1}}; //[2][0]
//Chamada de função
    diagonal_Inversa(X);

return 0;
}





























