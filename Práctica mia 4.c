//Práctica mia 3

#include<stdio.h>

 int main(){
 	
 	int i,n;
 	
 	printf("Digite la cantidad de numeros a comprobar: "); scanf("%i",&n);
 	
 	i = 1;
 	
 	while(i<=n){
 		if(i%5==0){
 			printf("\n%i.\n",i);
 		}
 		i++;
 	}
 	
 	printf("\nLa operacion finalizo.\n\n");
 	
 	return 0;
 }
