#include <stdio.h>
#include <stdlib.h>
#include <math.h>


struct node{
  int digit;
  struct node *next;
}N1={.digit=0,.next=NULL},N2={.digit=0,.next=NULL};
int readNum(struct node *integer);

int main(void){
  struct node *n1,*n2;
  n1=&N1;
  n2=&N2;
  printf("Enter the first integer:");
  readNum(n1);
  printf("Enter the second integer:");
  readNum(n2);
  return 0;
}

int readNum(struct node *integer){
  int num,count=0,dig=0;
  struct node *n;
  n=integer;
  scanf("%d",&num);
  dig=num;
  while(dig>0){
    dig/=10;
    ++count;
  }
  while(count>0){
    n->digit=num/pow(10,count);
    n->next=malloc(sizeof(struct node));
    n=(*n).next;
    --count;
  }


 return 0;
}
