#include <stdio.h>
int WIDTH = 24;
int LENGTH = 80;

void init_array(int array[WIDTH][LENGTH]){
  int i =0;
  int j =0;
  for(i=0;i<LENGTH;i++){
    for(j=0;j<WIDTH;j++){
      array[i][j] = 1;
    }
  }
}

void print_array(int array[WIDTH][LENGTH]){
  int k=0;
  int l=0;
  for (k = 0; k < LENGTH; k++) {
    for(l = 0; l< WIDTH; l++){
      if(array[k][l]==1){
        printf("-");
      }else{
        printf("0");
      }
    }
    printf("\n");
  }
}

main(){
  int array[WIDTH][LENGTH];
  init_array(array);

  printf("Hello World!\n");
  printf("Width: %d.\n",WIDTH);
  printf("Length: %d.\n",LENGTH);

  print_array(array);
}
