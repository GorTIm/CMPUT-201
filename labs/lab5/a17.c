#include <stdio.h>
#include <stdbool.h>

int x_cor,y_cor;

int main(void){
  int n,next_row,next_column,i,j;
  bool occupy;
  printf("This program creates a magic square of a specified size.\n");
  printf("The size must be an odd number between 1 and 99.\n");
  printf("Enter size of magic square: ");
  scanf("%d",&n);
  int  ms[n][n];
   x_cor=0;
  y_cor=n/2;
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      ms[i][j]=0;
    }
 }

  for(i=1;i<=n*n;i++){
    ms[x_cor][y_cor]=i;
   
    next_row=x_cor-1;
    next_column=y_cor+1;
    occupy=true;
    while(occupy==true){
    if(next_row<0){
      next_row=n-1;
    }
    if(next_row>n-1){
      next_row=0;
    }
     if(next_column>n-1){
      next_column=0;
    }
     if(ms[next_row][next_column]==0){
       occupy=false;
     }else{
        occupy=true;
       next_row=x_cor+1;
     }
    }
    x_cor=next_row;
    y_cor=next_column;
  }
  for(j=0;j<n;j++){
    for(int k=0;k<n;k++){
      printf("%d ",ms[j][k]);
}
printf("\n");
  }
  return 0;

}

