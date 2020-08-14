//Factorial

#include<stdio.h>

int main(){
	
	float i,j,num1,num2,ftotal,x,f1=1,f2=1;
	
	printf("Digite el primer numero para saber su factorial: "); scanf("%f",&num1);
	printf("Digite el segundo numero para saber su factorial: "); scanf("%f",&num2);
	
	for(i=1;i<=num1;i++){
		f1 *= i;
	}
	for(j=1;j<=num2;j++){
		f2 *= j;
	}
	printf("%f.\n\n",f1);
	printf("%f.\n\n",f2);
	
	ftotal = f1 + f2;
	
	printf("Si desea saber la suma de los dos factoriales, presione 1, sino presione 2: "); scanf("%f",&x);
	
	if(x==1){
		printf("La suma de los factoriales es de: %f.\n\n",ftotal);
	}
	else if(x==2){
		printf("El programa termino.\n\n");
	}
	return 0;
}
