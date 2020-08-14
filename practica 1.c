/*ATS: For*/

#include<stdio.h>

int main(){
	
	int i,num,cont=0;
	
	printf("Digite un numero: "); scanf("%i",&num);
	
	for(i=1;i<=num;i++){
		if(num%i==0){
			cont++;
		}
	}
	if(cont>2){
		printf("\n El numero es compuesto.\n\n");
	}
	else{
		printf("\n El numero es primo.\n\n");
	}
	return 0;
}
