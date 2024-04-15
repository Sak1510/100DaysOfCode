#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*		Ejercicio sacado de: https://retosdeprogramacion.com/ejercicios/ #9
 * Crea un programa se encargue de transformar un número
 * decimal a binario sin utilizar funciones propias del lenguaje que lo hagan directamente.
 * 
 * Pagina usada para comprobar resultados: https://www.prepostseo.com/tool/es/binary-to-decimal-converter
 * Algoritmo basado en: https://es.wikipedia.org/wiki/Sistema_binario#Decimal_a_binario
 *
 * El papu Sak
 */


int main(int argc, char *argv[]) {
	printf("Introduce el numero para convertirlo en un numero binario: ");
	int num10; scanf("%d", &num10);
	
	int bit = 32, i;
	char num2[bit];
	for(i = 0; i < bit; i++) num2[i] = '0';
	int res, div = num10;
	
	i = bit -1;
	if(num10 <= pow(2, bit)) {
		while(div > 0) {
			res = div%2;
			div = (div -res)/2;
			
			if(res == 1) num2[i] = '1';
			else num2[i] = '0';
			
			i--;
		}
	} else printf("\nFuera de rango.");
	
	printf("\nTu numero binario: ");
	for(i = 0; i < bit; i++) {
		printf("%c", num2[i]);
	}
	return 0;
}
