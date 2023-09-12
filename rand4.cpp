#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	
	int lim;
	
	printf("limite: ");
	scanf("%d",&lim);
	
	int a=0;
	int numeroAleatorio;
	
do{
		numeroAleatorio=rand()%lim;		
		printf("Numero aleatorio: %d\n", numeroAleatorio);			
		a++;
	
}	
while (a<lim);	
	
	printf("FIN");
	
	return 0;
}
