#include <stdio.h>

int main(void){
  float var,result;
    printf("Enter a value:");
  scanf("%f",&var);
  result=3*var+2;
  result=result*var-5;
  result=result*var-1;
  result=result*var+7;
  result=result*var-6;
  printf("The result is: %f\n",result);
  return 0;
}
