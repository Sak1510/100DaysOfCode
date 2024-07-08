#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Ejercicio #12 		https://retosdeprogramacion.com/ejercicios/
 * Crea una función que reciba dos cadenas como parámetro (str1, str2)
 * e imprima otras dos cadenas como salida (out1, out2).
 * - out1 contendrá todos los caracteres presentes en la str1 pero que NO
 *   estén presentes en str2.
 * - out2 contendrá todos los caracteres presentes en la str2 pero que NO
 *   estén presentes en str1.
 */

void noSeAlChileQuePoner() {
	char str1[100] = "", str2[100] = "", out1[100] = "", out2[100] = "";
	printf("Dame la primera string: ");
	scanf("%s", &str1);
	
	printf("Ahora dame la segunda string: ");
	scanf("%s", &str2);
	
	int limit = strlen(str1) > strlen(str2) ? strlen(str1) : strlen(str2);
	printf("%d", limit);
	
	int i, j, k = 0;
	for(i = 0; i < limit; i++) {
		for(j = 0; j < limit; j++) {
			if(str1[i] == str2[j]) {
				out1[k] = str1[i];
				k++;
			}
		} 
		
		k = 0;
		
		for(j = 0; j < limit; j++) {
			if(str2[i] == str1[j]) {
				out2[k] = str2[i];
				k++;
			}
		}
	}
	
	printf("\n\nout1: %s\nout2: %s\n", out1, out2);
}

class hola;

int main(int argc, char *argv[]) {
	noSeAlChileQuePoner();
	return 0;
}
