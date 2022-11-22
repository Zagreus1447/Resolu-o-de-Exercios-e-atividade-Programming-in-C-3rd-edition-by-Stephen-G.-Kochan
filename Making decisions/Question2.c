#include <stdio.h>
int main(void){
 float a,b,result;
 do{
 printf("Digite dois inteiros\n");
 scanf("%f %f", &a, &b);
 if(b<1)printf("Divisão por zero digite novamente\n");
 }while(b<1);  
 result = a/b;
 printf("A divisão de %0.2f por %0.2f é igual a: %0.3f\n",a,b,result);
 

return 0;
}
