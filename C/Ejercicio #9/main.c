#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//	Ejercicio sacado de: https://youtu.be/nPAAV6sAfjY?si=LG9oBUDy9k6zVXpg
//Método que devuelva el menor, de un array de números aleatorios.
int numMenor(int array[], int size) {
	int numM = array[0], i;
	for(i = 0; i < size; i++) {
		if(numM >= array[i]) numM = array[i];
	}
	
	return numM;
}

//Función obtenida de: https://github.com/Sak1510/100DaysOfCode/blob/main/C/Ejercicio%20%238/main.c			Linea #23
int printfArray(int array[], int size) {
	int i;
	for(i = 0; i < size; i++) {
		if(i == 0) printf("[%d", array[i]);
		else if(i != size -1) printf(", %d", array[i]);
		else printf(", %d]", array[i]);
	}
	
	//int n = sizeof(array)/sizeof(array[0]);
	//printf("\t SIZE = %d", n);
}

int main(int argc, char *argv[]) {
	srand(time(NULL));
	printf("Cuantos numeros tendra tu array? ");
	int size; scanf("%d", &size);
	
	printf("Cual sera el numero mayor posible? ");
	int limit; scanf("%d", &limit);

	int array[size], i;
	for(i = 0; i < size; i++) {
		array[i] = rand()%limit;
	}
	
	printf("\nTu array es: ");
	printfArray(array, size);
	printf("\nEl numero menor de tu array es %d", numMenor(array, size));
	
	//int n = sizeof(array)/sizeof(array[0]);
	//printf("\n\n%d", n);
	return 0;
}
