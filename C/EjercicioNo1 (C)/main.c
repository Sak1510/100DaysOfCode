#include <stdio.h>
#include <stdlib.h>
//Programa que pida números, y al poner cero, deje de pedir, y que los sume
int main(int argc, char *argv[]) {
	//Se le pide al usuario que hacer
	printf("Introduce distintos numeros, si quieres sumarlos todos, introduce el numero 0\n");
	
	//Se declaran las variables necesarias
	int n, sum;

	//Bucle para el input de datos
	while(n != 0) {
		scanf("%d", &n);
		sum = sum +n;		
	}
	
	//Se retorna la suma total
	printf("\nLa suma de los numeros es igual a %d", sum);
	return 0;
}
