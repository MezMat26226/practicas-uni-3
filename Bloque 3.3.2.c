/*Bloque 3.3.2*/

#include<stdio.h>

int main(){
	
	int a,b,i;
	
	printf("Introduzca un numero: "); scanf("%i",&a);
	
	do{
		printf("Ahora introduce un numero mayor que el anterior: "); scanf("%i",&b);
	}while(b<a);
	
	for(i=a+1;i<=b;i++){
		printf("%i.\n",i);
	}
	
	return 0;
}
/*Recorda que para salir del bucle do while, la condición tiene que ser falsa, porque "do while" significa "hacer 
mientras", asi que mientras que la condición sea verdadera lo del bucle se ejetucará.*/
