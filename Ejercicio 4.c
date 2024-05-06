#include <stdio.h>
void esPar(int numero );
int main(int argc, char *argv[]) {
	int numero ;
	do {
		printf("ingresa un número ");
		scanf ("%d" , &numero);
	} while(numero %2 !=0);
	printf("¡Número par ingresado!\n");

	return 0;
}
void esPar (int numero){
	if (numero % 2 ==0){
		printf("¡Número par ingresado!\n");
	} else {
	printf ("Número impar ingresado. Inténtalo de nuevo\n");
	}
}
