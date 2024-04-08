#include <stdio.h>
#include <stdlib.h>
	//Ejercicio basado en el siguiente: https://youtu.be/4vZS3l3fLU8?si=jtzVR5246bA6JFgm
/*	Crar un programa que nos permita introducir tantos números enteros en u arreglo, y al momento
	de mostrarlos en pantalla desplazar esos números una posición hacia abajo.
	El primero estará en la posición del segundo.
	El segundo estará en la posición del tercero */
int main(int argc, char *argv[]) {
	int n;
	printf("Cuantos numeros tendra tu arreglo? ");
	scanf("%d", &n);
	printf("\nIntroduce los numeros del arreglo:\n");
	
	int array[n], arrayMod[n], i;
	for(i = 0; i < n; i++) {
		printf("num.%d - ", (i +1));
		scanf("%d", &array[i]);
		
		if(i != n -1) arrayMod[i +1]  = array[i];
		else arrayMod[0] = array[i];
	}
	
	printf("\nArray Original: [");
	for(i = 0; i < n; i++) {
		if(i != n -1) printf("%d, ", array[i]);
		else printf("%d]", array[i]);
	}
	
	printf("\nArray Modificado: [");
	for(i = 0; i < n; i++) {
		if(i != n-1) printf("%d, ", arrayMod[i]);
		else printf("%d]", arrayMod[i]);
	}
	
	return 0;
}
