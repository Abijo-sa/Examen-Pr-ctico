#include <stdio.h>
void esPar(int numero );
int main(int argc, char *argv[]) {
	int numero ;
	do {
		printf("ingresa un n�mero ");
		scanf ("%d" , &numero);
	} while(numero %2 !=0);
	printf("�N�mero par ingresado!\n");

	return 0;
}
void esPar (int numero){
	if (numero % 2 ==0){
		printf("�N�mero par ingresado!\n");
	} else {
	printf ("N�mero impar ingresado. Int�ntalo de nuevo\n");
	}
}
