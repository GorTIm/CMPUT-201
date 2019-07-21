#include <stdio.h>
#include <math.h>

int main(void){
  double x,y,ratio,average;


  printf("Enter a positive number: ");
  scanf("%lf",&x);
  y=1;
  ratio=x/y;
  average=(ratio+y)/2;
  while(fabs(y-average)>=0.00001*y){
     y=average;
     ratio=x/y;
     average=(ratio+y)/2;
}
printf("Square root: %.5f\n",average);

return 0;



}
