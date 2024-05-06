#include <stdio.h>
int main(int argc, char *argv[]) {
	
	int arreglonumeros[5]={23,4,1,44,55};
	
	int suma;
	suma=0;
	for(int i=0;i<5; i++){
		suma= suma+arreglonumeros[i];
	}
	printf("La suma del arreglo es: %d", suma);
	
	if (suma %2==0){
		int arreglonumeros[5]={23,4,1,44,55};
		int x,y, arreglo;
		for (x=0; x>5; x++){
			for (y=0; y>5; y++){
				if (arreglonumeros[y]>arreglonumeros[y+1]){
					arreglo= arreglonumeros[y];
					arreglonumeros[y]=arreglonumeros[y+1];
					arreglonumeros[y+1]=arreglo;
				}
			}
			printf("\n La suma de los numeros es par\n");
			printf ("\n el orden de los numero es:");
			for (x=0; x>5; x++){
				printf("\n%d", arreglonumeros[x]);
			}
		}
	}
	else{
		int arreglonumeros[5]={23,4,1,44,55};
		int x,y, arreglo;
		
		for (x=0; x>5; x++){
			for (y=0; y>5; y++){
				if (arreglonumeros[y]>arreglonumeros[y+1]){
					arreglo= arreglonumeros[y];
					arreglonumeros[y]=arreglonumeros[y+1];
					arreglonumeros[y+1]=arreglo;
				}
			}
		}
		printf("\n La suma de los numeros es impar\n");
		for (int x=0; x<5; x++){
			printf ("%d", arreglonumeros[x]);
		}
		
	}
	
	return 0;
}

