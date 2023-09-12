#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){

	int numeroAleatorio=rand()%5;
	int contador=0;
 	
 	srand(time(NULL));
 	
	while (contador<=5)
	{
 	contador=contador+1;
 	
 	numeroAleatorio=rand()%100;
	
	printf("Numero aleatorio: %d\n", numeroAleatorio);
	
	}
	
	return 0; 

 }
