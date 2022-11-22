#include <stdio.h>
int main(void){
 char op,cnt;
 float v,t;
  printf("Esperando comando.....    \n");
  scanf("%f %c",&t,&op);
 switch(op){
  case's':
   v=t;
   printf("Valor %f armazendo\n", v);
  break;
  case'e':
   printf("Sessão encerrada\n");
  break;
  default:
   printf("Operação desconhecida\n");
  break;
}
 printf("Que operação deseja fazer......\n");
 scanf(" %c %f",&op,&t);
 /*printf("Qual nº?\n");
 scanf(" %f",t);
 */
 switch(op){
  case'+':
  v = v+t;
  printf("Resultado: %f\n",v);
  break;
  case'-':
  v = (int)v-t;
  printf("Resultado: %f\n",v);
  break;
  case'*':
  v = v*t;
  printf("Resultado: %f\n",v);
  break;
  case'/':
  v = v/t;
  printf("Resultado: %f\n",v);
  break;
  case'e':
  printf("Sessão encerada\n", v);
  case's':
  v = t;
  printf("Valor %f armazendo\n", v);
  default:
  printf("Falha");
  break;
}


return 0;
}
