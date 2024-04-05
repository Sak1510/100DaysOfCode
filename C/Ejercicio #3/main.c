#include <stdio.h>
#include <stdlib.h>
/*
	//Ejercicio sacado de: https://retosdeprogramacion.com/ejercicios/ #3
 * Escribe un programa que imprima los 50 primeros números de la sucesión
 * de Fibonacci empezando en 0.
 * - La serie Fibonacci se compone por una sucesión de números en
 *   la que el siguiente siempre es la suma de los dos anteriores.
 *   0, 1, 1, 2, 3, 5, 8, 13...
 */
int main(int argc, char *argv[]) {
	int i, A = 0, B = 1, C = 0;
	for(i = 0; i < 50; i++) {
		printf("\n%d", C);
		C = A +B;
		A = B;
		B = C;
	}
	return 0;
}
