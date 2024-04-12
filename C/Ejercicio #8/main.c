#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*		Ejercicio basado en: https://youtu.be/HEK9F3ysNow?si=hdrvIN6b766A_sGP
 * Crear un programa con un método, en el cual obtengamos el número mayor de un arreglo llenado con
 * números aleatorios desde el 0 hasta el numero indicado por el usuario
 * Se crea un arreglo de un número definido de posicisiones definida por el usuario
 * Tambien obtener la cantidad de numeros pares e impares dentro del array
 * El papu Sak
*/

//jasdjasdja esto se siente genial

int numM(int array[], int arrayS) {
	int numM = 0, i;
	for(i = 0; i < arrayS; i++) {
		if(array[i] > numM) numM = array[i];
	}
	return numM;
}


int printfArray(int array[], int arrayS) {
	int i;
	for(i = 0; i < arrayS; i++) {
		if(i == 0) printf("[%d", array[i]);
		else if(i != arrayS -1) printf(", %d", array[i]);
		else printf(", %d]", array[i]);
	}
}

int parImpar(int array[], int arrayS, char T) {
	int par = 0, impar = 0, i;
	for(i = 0; i < arrayS; i++) {
		if(array[i]%2 == 0) par++;
		else impar++;
	}
	
	int retorned;
	switch(T) {
		case 'P': retorned = par; break;
		case 'I': retorned = impar; break;
		
		default: retorned = -1; break;
	}
	
	return retorned;
}

int main(int argc, char *argv[]) {
	srand(time(NULL));
	
	printf("Hasta donde van a aparecer tus numeros: ");
	int limitS; scanf("%d", &limitS);
	
	printf("Cuantos numeros contenera tu arreglo? ");
	int size; scanf("%d", &size);
	
	int i, array[size];
	for(i = 0; i < size; i++) {
		array[i] = rand()%limitS;
	}
	
	printf("\nTu array generado aleatoriamente es el siguiente: ");
	printfArray(array, size);
	
	printf("\n\nEl numero mayor del array es %d", numM(array, size));
	printf("\nTu array contiene %d numeros pares", parImpar(array, size, 'P'));
	printf("\nTu array contiene %d numeros impares", parImpar(array, size, 'I'));
	return 0;
}
