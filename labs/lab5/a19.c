#include <stdio.h>
void pb(int n);

int main(void){
  int input;
  printf("Enter a number:");
  scanf("%d",&input);
  pb(input);
  return 0;
}


void pb(int n){
  if(n!=0){
    pb(n/2);
    putchar('0'+n%2);
  }



}
