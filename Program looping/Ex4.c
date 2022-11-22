#include <stdio.h>
int main(void){
 int n,n2;
 printf("TABLE OF POWERS OF TWO\n\n");
 printf(" n 2 to the n\n");
 printf("------------------\n");
 n2=0;
 for(n=0;n<=10;++n){
 printf("%2i		%2i\n",n,n2); 
 n2+=2;
 }
return 0;
}
