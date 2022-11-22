#include <stdio.h>
 int main (void){
 int f,cont,n;
 int long long z=1;
 printf("            Fatoriais de 1 a 10\n");
 printf("===============================================\n"); 
 for(n=1;n<=10;n++){
 printf("	Número: %2i ",n);
 f = n;
  while(f>1){
  z = f * z;
  f--;
  }
  printf("Fatorial= %7i\n",z);
  z = 1;  
}
return 0;
}
