//Práctica mia 2

#include<stdio.h>

  int main(){
  	
  	int x,i,operacion=1;
  	
  	i = 1;
  	
  	printf("\nEscriba un numero:\n "); scanf("%i",&x);
  	
  	if(x>10){
  		while(i<=10){
  			operacion = i*operacion; 
  			i++; 
  		}
  	}
  	else if(x<10){
  		operacion = 0;
  		while(i<=10){
  			operacion = i + operacion; 
  			i++; 
  		}
  	}
  	printf("\nEl resultado de la operacion es: %i.\n\n",operacion);
  	system("pause");
  	return 0;
  }
