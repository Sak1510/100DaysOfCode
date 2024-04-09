#include <stdio.h>
#include <stdlib.h>
/*		Ejercicio creado por mi mismo
 * Determinar usando un bucle for, cuantos numeros pares e impares hay en una sucesión sencilla
 * Por ejemplo: 1, 2, 3, 4, 5, 6, 7, 8 -> Esta sucesión contiene 4 numeros pares, y cuatro numeros impares 
 * 
 * El papu Sak
*/
int main(int argc, char *argv[]) {
	int nP, nI, start, final, i;
	printf("Desde donde iniciara tu sucesion? ");
	scanf("%d", &start);
	printf("Hasta dodne terminara? ");
	scanf("%d", &final);
	
	for(i = start; i < final +1; i++) {
		if(i%2 == 0) {
			printf("\n%d - PAR", i);
			nP++;
		} else {
			printf("\n%d - IMPAR", i);
			nI++;
		}
	}
	
	printf("\nHay %d numeros pares en la sucesion", nP);
	printf("\nHay %d numeros impares en la sucesion", nI);
	return 0;
}
