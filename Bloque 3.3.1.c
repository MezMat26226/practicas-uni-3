//Bloque 3.3.1

#include<stdio.h>

 int main(){
 	
 	char c;
 	
 	do{
 	 fflush(stdin);
	 printf("Presione una tecla para continuar continuar.\n");	
 	 scanf("%c",&c);
	 }while(c!='s'&& c!='S');
 	
 	system("pause");
 	return 0;
 }
