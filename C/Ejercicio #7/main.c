#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*		Ejercicio sacado de: https://youtu.be/AlDTk5Rx4tY?si=ehz43hSYP-93Ipak
 * Codifica un programa que calcule el costo del estacionamiento en un parking
 * Las primeras 3 horas se cobrarán a 20 pesos.
 * Las siguientes después de las 3 horas, a 15 pesos.
 * Hasta llegar al tope de 250 pesos, para 24 horas.
 * Si se permanece aparcada por más de un día, se cobrarán 250 pesos por día.
 * Se le pedirá al usuario ingresar la cantidad de horas
 * Y debe obtener el pago a realizar. Utiliza metodos/funciones
*/
int multa(int horas) {
	int pago;
	if(horas <= 3) {
		pago = horas*20;
	} else if(horas <= 24) {
		pago = (horas-21)*20 +(horas-3)*15;
		if(pago > 250) pago = 250;
	} else {
		pago = floor(horas/24)*250;
	}
	
	return pago;
}

int main(int argc, char *argv[]) {
	int h;
	printf("Para poder calcular la multa a pagar, introdusca el numero de horas que usted se quedo aparcado: ");
	scanf("%d", &h);
 
	printf("\nTu multa tiene un costo de $%d", multa(h));
	return 0;
}
