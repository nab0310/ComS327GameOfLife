#include <stdio.h>
#include <unistd.h>

int WIDTH = 24;
int LENGTH = 80;

void createFlyingStuff(int array[WIDTH][LENGTH]){
    array[2][1]=1;
    array[2][3]=1;
    array[3][4]=1;
    array[4][4]=1;
    array[5][1]=1;
    array[5][4]=1;
    array[6][2]=1;
    array[6][3]=1;
    array[6][4]=1;
    array[15][0]=1;
    array[16][1]=1;
    array[14][2]=1;
    array[15][2]=1;
    array[16][2]=1;
}

void init_array(int array[WIDTH][LENGTH]){
    int i,j;
    for(i=0;i<WIDTH;i++){
        for(j=0;j<LENGTH;j++){
            /*Initialize everything to zero*/
            array[i][j] = 0;
        }
    }
    /*In order to debug, manually create stuff, will read from command line later*/
    createFlyingStuff(array);
}

void print_array(int array[WIDTH][LENGTH]){
    int k,l;

    for(k=0;k<WIDTH;k++){
        for(l=0;l<LENGTH;l++){
            if(array[k][l]==1){
                printf("O");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main(){
  int array[WIDTH][LENGTH];

  printf("Hello World!\n");

  init_array(array);

  while(1){
      print_array(array);
      usleep(83333);
  }

  return 0;
}
