//Bloque 3.3

#include<stdio.h>

 int main(){
 
 char c;
 	
 do{
 	printf ("Introduce un letra: ");
 	fflush (stdin);
 	scanf ("%c",&c);   
 }while (c != 's' && c != 'S');
 		
 	system("pause");
 	return 0;
 }
