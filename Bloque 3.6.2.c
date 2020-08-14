//Bloque 3.6.2

#include<stdio.h>

int main(){
	
	int i,n,x=0;
	
	printf("Digite un numero: "); scanf("%i",&n);
	
	for(i=1;i<=n;i++){
		if(n%i==0){
			x++;
		}
	}
	if(x>2){
		printf("El numero es compuesto.\n");
	}
	else{
		printf("El numero es primo.\n");
	}
	
	return 0;
}
