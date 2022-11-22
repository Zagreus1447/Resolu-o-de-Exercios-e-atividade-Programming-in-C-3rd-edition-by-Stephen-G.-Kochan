#include <stdio.h>
int main(void){
 int a,b;
 printf("Digite dois inteiros\n");
 scanf("%i %i",&a,&b);
 //printf("\nVoce digitou o nº:%i e o :%i",a,b);
 if(a%b==0)printf("O primeiro numéro é divisivel pelo segundo\n");else printf("O primeiro numéro não é divisivel pelo segundo\n");;
return 0;
}
