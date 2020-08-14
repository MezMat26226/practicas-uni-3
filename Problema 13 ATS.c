//Ejercio 13 ATS

#include<stdio.h>

int main(){
	
	int i,n,cont=0,acum=0;
	
	printf("Ingrese la cantidad de numeros pares a sumar: "); scanf("%i",&n);
	
	for(i=1;i<=n;i++){
		if(i%2==0){
        	cont += i;
        	acum = i/2;
		}
	}
	
	printf ("\nLa suma es de : %i.\n",cont);
	printf("Se sumaron: %i numeros.\n",acum);
	
	return 0;
}
