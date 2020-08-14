/*Bloque 3.5*/

#include<stdio.h>

int main(){
	
	int num,i,fact;
	fact = 1;
	
	printf("Digite el numero del cual desee saber su factorial: "); scanf("%i",&num);
	
	for(i=1;i<=num;i++){
		fact *= i;
	}
	printf("El factorial de %i es: %i.\n",num,fact);
	system("pause");
	return 0;
}
