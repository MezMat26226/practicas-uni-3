/*Bloque 3.4.1*/

#include<stdio.h>

int main(){
	
	int i,j;
	
	for(i=1;i<=9;i++){ 
		for(j=1;j<=10;j++){
			printf("%i x %i = %i.\n",i,j,i*j);
		}
		system("pause");
	}
	
	return 0;
}
/*system("pause") sirve para dar una pausa al programa*/

