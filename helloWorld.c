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
/*Copies array to preserve values for life caluclations*/
void copy(int array1[WIDTH][LENGTH], int array2[WIDTH][LENGTH]){
    int i,j;
    for(i=0;i<WIDTH;i++){
        for(j=0;j<LENGTH;j++){
            array2[i][j] = array1[i][j];
        }
    }
}

void life(int array[WIDTH][LENGTH]){
    int tmp[WIDTH][LENGTH];
    int h,j;
    copy(array,tmp);
    for(h=0;h<WIDTH;h++){
        for(j=0;j<LENGTH;j++){
            /*Take the value of the neighbors*/
            int count =0;
            /*Create temp variables for edge cases*/
            int tmpH = -1;
            int tmpJ = -1;
            /*If we do have an edge case we will store the current value
            in a temporary varaiable and do the caluclations with
            the wrapped equivlant*/
            if(h-1<0){
                tmpH = 0;
                h = WIDTH-1;
            }
            else if(h+1==WIDTH){
                tmpH = WIDTH-1;
                h = 0;
            }
            if(j-1<0){
		        tmpJ = 0;
                j = LENGTH-1;
            }
            else if(j+1==LENGTH){
                tmpJ = LENGTH-1;
                j=0;
            }
            count = array[h-1][j] +
            array[h+1][j]+
            array[h][j-1]+
            array[h][j+1]+
            array[h-1][j-1]+
            array[h-1][j+1]+
            array[h+1][j-1]+
            array[h+1][j+1];
            /*If we had to change some h or j, change it back!*/
            if(tmpH != -1){
                h = tmpH;
            }
            if(tmpJ != -1){
                j = tmpJ;
            }
            /*Game of life logic*/
            if(count < 2){
                tmp[h][j] = 0;
            }
            if(count == 2 || count == 3){
                tmp[h][j] = array[h][j];
            }
            if(count == 4){
                tmp[h][j] = 0;
            }
            if(tmp[h][j]== 0 && count == 3){
                tmp[h][j] = 1;
            }
        }
    }
    copy(tmp, array);
}

int main(){
  int array[WIDTH][LENGTH];

  printf("Hello World!\n");

  init_array(array);

  while(1){
      life(array);
      print_array(array);
      usleep(83333);
  }

  return 0;
}
