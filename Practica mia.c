/*Práctica mia*/

#include<stdio.h>

  int main(){
  	
  	int cont,n,suma=0;
  	
  	printf("Digite el total de numeros a sumar :");
  	scanf("%i",&n);
  	
    cont = 1;
    
    while(cont<=n){
    	suma = suma + cont; 
    	cont++; 
    }
    printf("\nEl resultado de la suma es: %i.\n\n",suma);
    
  	system ("pause");
  	return 0;
  }
  
