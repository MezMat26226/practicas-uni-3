//Práctica mia 3

#include<stdio.h>

#include<stdio.h>

  int main(){
  	
  	int i,n;
  	
  	i = 1;
  	
  	printf("Digite la cantidad de numeros a comprobar: "); scanf("%i",&n);
  	
  	while(i<=n){	
	  if(i%5==0){
	  	printf("%i.\n",i);
	  }
	  i++;
  	}
  	
  	return 0;
  }
