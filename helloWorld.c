#include <stdio.h>
int WIDTH = 24;
int LENGTH = 80;

void init_array(array[WIDTH][LENGTH]){
  int i=0;
  int j=0;
  for(i=0;i<LENGTH;i++){
    for(j=0;j<WIDTH;j++){
      array[i][j] = 1;
    }
  }
}

void print_array(array[WIDTH][LENGTH]){
  int i=0;
  int j=0;
  for (i = 0; i < LENGTH; i++) {
    for(j = 0; j< WIDTH; j++){
      if(array[i][j]==1){
        printf("-");
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
