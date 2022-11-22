#include <stdio.h>
int main (void){
 int n=1,triangularNumber;
 triangularNumber = 0;
 //for (n=1;n<=200;n++) triangularNumber = triangularNumber + n;
 while(n<201){
 triangularNumber = triangularNumber + n; 
 n++;
 }
 printf ("The 200th triangular number is %i\n",triangularNumber);
 return 0;
}
