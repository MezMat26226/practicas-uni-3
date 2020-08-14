/*For*/

#include<stdio.h>

int main(){
	int i;
	float suma=0;
	
	i = 2;
	
	while(i<=1000){
		if(i%2==0){
			suma += i;
		}
		i++;
	}
	
	printf("El resultado es: %f.\n",suma);
	
	return 0;
}
