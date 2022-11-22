#include <stdio.h>
int main(void){
 int I,J;
 double Next_multiple,i,j;

 
 I=256,J=7,Next_multiple=(int) (I + J)-(I % J);
 printf("i:%i j:%i nm: %g\n",I,J,Next_multiple);

 I=365,J=7,Next_multiple=(int) (I + J)-(I % J);
 printf("i:%i j:%i nm: %g\n",I,J,Next_multiple);

//i=12.258,j=23,Next_multiple= ((int)i + (int)j)-((int)i % (int)j);
//printf("i:%g j:%g nm: %g\n",i,j,Next_multiple);

 I=12258,J=23,Next_multiple=(int) (I + J)-(I % J);
 printf("i:%i j:%i nm: %g\n",I,J,Next_multiple);

 I=996,J=4,Next_multiple=(int) (I + J)-(I % J);
 printf("i:%i j:%i nm: %g\n",I,J,Next_multiple);

return 0;

}
