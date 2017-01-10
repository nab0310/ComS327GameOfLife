#include <stdio.h>
int WIDTH = 24;
int LENGTH = 80;

int main(){
  int array[WIDTH][LENGTH];
  int i,j;

  printf("Hello World!\n");

  for(i=0;i<WIDTH;i++){
      for(j=0;j<LENGTH;j++){
          array[i][j] = 1;
      }
  }
  int k,l;

  for(k=0;k<WIDTH;k++){
      for(l=0;l<LENGTH;l++){
          printf("Element [%d][%d]: %d \n",k,l,array[k][l]);
      }
  }
  return 0;
}
