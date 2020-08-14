/*Bloque 3.6*/

#include<stdio.h>

int main(){
	
	int x,y,res,n,i;
	
	printf("Digite la cantidad de numeros a sumar: "); scanf("%i",&n);
	
	i = 3;
	x = 0;
	y = 1;
	
	if(n==1){
		printf("0 ");
	}
	
	else{
		printf("0, 1 ,");
	}
	
	while(i<=n){ // 0 1 1 2 3 5 8 13
		res = x + y; 
		printf("%i, ",res);
		x = y;
		y = res;
		i++;
	}
	
	return 0;
}
