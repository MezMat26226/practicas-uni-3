/*Do while*/

#include<stdio.h>

int main(){
	
	char opc;
	
	do{
		fflush(stdin);
		printf("Hola.\n");
		printf("\nDigite 's' para saludar nuevamente ");
		scanf("%c",&opc);
	}while(opc=='s'||opc=='S');
	
	return 0;
}
