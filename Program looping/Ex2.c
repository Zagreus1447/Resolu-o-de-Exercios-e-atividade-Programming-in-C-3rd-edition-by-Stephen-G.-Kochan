#include <stdio.h>
int main (void){
 int  cont,tri,n;
 printf("   Triangular number 5 to 50 \n");
 printf("-------------------------------\n");
 for(cont=5;cont<=50;cont++){
 n = cont,tri = n*(n+1)/2;
 printf("    N:    %2i    TN:    %4i\n",cont,tri); 
}
return 0;
}
