/*Genera un número específico de números aleatorios y calcularás su suma
Puedes ajustar la variable numNumerosAleatorios
para cambiar la cantidad de números aleatorios que deseas sumar*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	
	
int numNumerosAleatorios=0;
	srand (time(NULL));
int numeroAleatorio=rand()%51;
	

	printf("Escoge cuantos numeros aleatorios quieres sumar: \n");
	scanf("%d", &numNumerosAleatorios);	
	
	int a=0;
	int suma=0;
	
	while (a<num){
	
	numeroAleatorio=rand()%numNumerosAleatorios;
	
	printf("Numero aleatorio: %d\n", numeroAleatorio);
	
	suma=suma+numeroAleatorio;
	
	a++;
	
	}
	
	printf ("%d", suma)
	
	
	
	
	return 0;
}

