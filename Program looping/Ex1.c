#include <stdio.h>
int main(void){
 int cont,pot,cont2;
  printf("---   -- ---    ---\n");
 for(cont=1,cont2=1;cont<=10; cont++,cont2++){
  pot = cont*cont2;
  printf("%2i¹ = %2i %2i² = %3i\n",cont,cont,cont,pot);
}

return 0;
}
