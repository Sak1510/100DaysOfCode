#include <stdio.h>
#include <stdlib.h>

//Crear dos arreglos, e introducir en cada uno tantos numeros (los dos arreglos del mismo tamaño)
//Y mezclarlos en un tercer arreglo. De la siguiente forma:
//El 1er de A, el 1er del B, el 2do del A, el 2do del B, el 3er de A, el 3er del B, el 4to del A, etc...

int main(int argc, char *argv[]) {
	//Se declaran las variables iniciales
	int size, i;
	
	//Se pide al usuario de que tamaño seran los arrays
	printf("De que tamaño seran tus dos arrays?\n");
	scanf("%d", &size);
	
	//Se crean los arrays
	int  A[size], B[size], C[size *2];
	
	//Se recolectan los datos del primer array
	printf("\nIntroduce los valores del primer array:\n");
	for(i = 0; i < size; i++){
		scanf("%d", &A[i]);
	}
	
	//Se recolectan los datos del segundo array
	printf("\nIntroduce los valores del segundo array:\n");	
	for(i = 0; i < size; i++){
		scanf("%d", &B[i]);
	}
	
	//Se mezclan los arrays
	for(i = 1; i < size *2; i += 2) {
		C[i -1] = A[(i -1)/2];
		C[i] = B[(i -1)/2];
	}
	
	
	//Finalmente se devuelven los arrays
	printf("\n1er array: [");
	for(i = 0; i < size; i++) {
		if(i != size -1) printf("%d, ", A[i]);
		else printf("%d]", A[i]);
	}
	
	printf("\n2do array: [");
	for(i = 0; i < size; i++) {
		if(i != size -1) printf("%d, ", B[i]);
		else printf("%d]", A[i]);
	}
	
	printf("\n3er array: [");
	for(i = 0; i < size *2; i++) {
		if(i != size*2 -1) printf("%d, ", C[i]);
		else printf("%d]", C[i]);
	}
	return 0;
}
