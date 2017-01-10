#include <stdio.h>
int WIDTH = 24;
int LENGTH = 80;

void init_array(int array[WIDTH][LENGTH]){
    int i,j;
    for(i=0;i<WIDTH;i++){
        for(j=0;j<LENGTH;j++){
            array[i][j] = 1;
        }
    }
}

void print_array(int array[WIDTH][LENGTH]){
    int k,l;

    for(k=0;k<WIDTH;k++){
        for(l=0;l<LENGTH;l++){
            printf("%d",array[k][l]);
        }
        printf("\n");
    }
}

int main(){
  int array[WIDTH][LENGTH];

  printf("Hello World!\n");

  init_array(array);

  print_array(array);
  
  return 0;
}
