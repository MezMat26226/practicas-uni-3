//Practica for 2

#include<stdio.h>

 int main(){
 	
 	int i,n,suma=0;
 	
 	printf("Digite la cantidad de numeros a sumar: "); scanf("%i",&n);
 	
 	for(i=1 ; i<=n ; i++){
 		if(i%2==0){
 			suma += i;
 			printf("%i.\n",suma);
 		}
 	}
 	
 	printf("El resultado total es: %i.\n",suma);
 	
 	return 0;
 }
