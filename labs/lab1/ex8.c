#include <stdio.h>
#define M 12.0f
#define P 0.01f
int main(void){
  float loan,interest_rate,monthly_payment,balance;
  printf("Enter amount of loan:");
  scanf("%f",&loan);
  printf("Enter interest rate:");
  scanf("%f",&interest_rate);
  printf("Enter monthly payment:");
  scanf("%f",&monthly_payment);
  balance=loan*(1+interest_rate*P/M)-monthly_payment;
  printf("Blance remaining after first payment:%.2f\n",balance);
balance=balance*(1+interest_rate*P/M)-monthly_payment;
 printf("Blance remaining after second payment:%.2f\n",balance);
balance=balance*(1+interest_rate*P/M)-monthly_payment;
 printf("Blance remaining after third payment:%.2f\n",balance);
 return 0;





}
