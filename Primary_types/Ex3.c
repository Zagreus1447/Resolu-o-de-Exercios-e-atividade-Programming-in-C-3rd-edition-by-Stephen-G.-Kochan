#include <stdio.h>
int main(void){
 double x,result;
 x = (3.31e-8*2.01e-7)/(7.16e-6+2.01e-8);
 result = ((3.31*0.00000001)*(2.01*0.0000001))/((7.16*0.000001)+(2.01*0.00000001));
 printf("%g",x);
 
return 0;

}
