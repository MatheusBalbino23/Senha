#include<stdio.h>

int main(){
	
   int x, contador;
   
   contador = 0;
   do{
      printf("Digite sua senha: ");
   	  scanf("%i", &x);
      
      if (x == 2312){
      	printf("Sistema Liberado!");
      	break;
	  }
   	
   contador = contador + 1;
   }while (contador < 3);
   
   if (contador == 3){
      printf("Sistema Bloqueado!");
   }

	return 0;
}

