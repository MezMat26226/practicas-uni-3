//Practica mia otra vez

#include<stdio.h>

 int main(){
 	
 	int i,n,suma_pares=0,suma_impares=0,suma=0,ne;
 	printf("Digite el total de numeros a sumar: ");
 	scanf("%i",&n);
 	
 	i = 1;
 	
 	while(i<=n){
 		if(i%2==0){
 			ne = i*(-1);
 			suma_pares = suma_pares + ne;
 		}
 		else{
 			suma_impares = suma_impares + i;
 		}
 		i++;
 	}
 	
 	printf("%i.\n",suma_pares);
 	printf("%i.\n",suma_impares);
 	
 	suma = suma_pares + suma_impares;
 	
 	printf("\n%i.\n",suma);
 	
 	return 0;
 }
