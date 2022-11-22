#include <stdio.h>
int main(void){
 int number,sum,n;
 printf("	Enter a positive number: ");
 scanf("%i",&number);
 while(number>0){
 n = number%10;
 sum += n;
 number= number/10;
 }
 printf("	sum of digits: %i\n", sum);
return 0;
}
