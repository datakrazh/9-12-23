#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){	
	
int cuantosAleatorios;
	srand (time(NULL));
int numeroAleatorio;
	
	printf("Escoge cuantos numeros aleatorios quieres sumar: \n");
	scanf("%d", &cuantosAleatorios);	
	
	int a=0;
	int suma=0;
	
	while (a<cuantosAleatorios)
	{
	
		numeroAleatorio=rand()%101;
		
		printf("Numero aleatorio: %d\n", numeroAleatorio);
		
		suma=suma+numeroAleatorio;
		
		a++;
	
	}
	
	
	printf ("%d", suma);
	
	
	return 0;
}

