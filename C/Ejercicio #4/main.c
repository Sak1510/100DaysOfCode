#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
	//Ejercicio sacado de: https://retosdeprogramacion.com/ejercicios/ #5
 * Crea una única función (importante que sólo sea una) que sea capaz de calcular y retornar el área de un polígono.
 * - La función recibirá por parámetro sólo UN polígono a la vez.
 * - Los polígonos soportados serán Triángulo, Cuadrado y Rectángulo.
 * - Imprime el cálculo del área de un polígono de cada tipo.
 */
int main(int argc, char *argv[]) {
	printf("Bienvenido al calculador de areas de poligonos.\nQue area de poligono va a querer calcular?\n 1\tTriangulo\n 2\tCuadrado\n 3\tRectangulo");
	int t;
	printf("\nIntroduzca el respectivo numero de la area del poligono a calcular: ");
	scanf("%d", &t);
	
 	float b, a, A;
	switch(t) {
		case 1:
			printf("Para poder calcular el area del triangulo, introduce los siguientes datos:");
			printf("\n\nBase: ");
			scanf("%f", &b);
			printf("Altura: ");
			scanf("%f", &a);
			A = (b*a)/2;
			
			printf("El area de tu triangulo es igual a %fu", A);
			break;

		case 2:
			printf("Para poder calcular el area del rectangulo, introduce los siguientes datos:");
			printf("\n\nBase: ");
			scanf("%f", &b);
			printf("Altura: ");
			scanf("%f", &a);
			A = b*a;
			
			printf("El area de tu rectangulo es igual a %fu", A);
			break;

		case 3:
			printf("Para poder calcular el area de tu rectangulo, introduce el siguiente dato:");
			printf("\n\nBase: ");
			scanf("%f", &b);
			A = b*b;
			
			printf("El area de tu rectangulo es igual a %fu", A);
			break;
			
		default:
			printf("\nEntrada no valida. Reinicia el programa.");
			return 0;
			break;
	}
	
	return 0;
}
