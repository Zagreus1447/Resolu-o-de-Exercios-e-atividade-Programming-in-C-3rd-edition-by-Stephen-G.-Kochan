#include <stdio.h>
int main(void){
 int int1,int2,int3,int4,int5;
 float f1,f2,f3,f4;
 int1=29.55+21.99;
 int2=(float)29.55+(float)21.99;
 int3=29+21;
 int4=(int)29.55+21.99;
 int5=(float)6/(float)4;

 f1=(float) 6 / (float) 4;
 f2=6/4;
 f3=6.0/4.0;
 f4=6.0/4;

 printf("int1:%i\n int2:%i\n int3:%i\n int4:%i\n int5:%i\n f1:%f\n f2:%f\n f3:%f\n f4:%f\n ",int1,int2,int3,int4,int5,f1,f2,f3,f4);

return 0;
}
