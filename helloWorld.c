#include <stdio.h>
int WIDTH = 24;
int LENGTH = 80;

int array[LENGTH][WIDTH];

void init_array(){
  int i=0;
  int j=0;
  for(i=0;i<LENGTH;i++){
    for(j=0;j<WIDTH;j++){
      array[i][j] = 1;
    }
  }
}

void print_array(){
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

  init_array();

  printf("Hello World!\n");
  printf("Width: %d.\n",WIDTH);
  printf("Length: %d.\n",LENGTH);

  print_array();
}
