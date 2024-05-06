#include <stdio.h>

int main(int argc, char *argv[]) {
	float calificacion ;
	
	printf (" Ingrase la calificación de su estudiante " );
	scanf("%f", &calificacion ); 
	
	if ( calificacion >= 90 ){
		printf("A");
	} else if (calificacion >= 80 ){
		printf ("B");
	} else if (calificacion>=70){
		printf("C");
	} else if (calificacion>=60){
		printf("D");
	} else if (calificacion< 60){
		printf("F");
	}
	return 0;
}

