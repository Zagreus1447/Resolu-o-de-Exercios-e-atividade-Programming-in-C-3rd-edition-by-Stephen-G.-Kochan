#include <stdio.h>
int main (void){
 int count,dollars,ci;
 float total,cents;
 for ( count = 1; count <= 10; ++count ) {
 printf("Dollars:\n");
 scanf("%i",&dollars);
 printf("Cents:\n");
 scanf("%i",&ci);
 cents = (float)ci/100;
 total = dollars + cents;
 printf("%.2f\n",total);
}
return 0;
}
