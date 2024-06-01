#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float txtToFloat(char directArch[]) {
	FILE *arch;
	float floatNum = 0;
	arch = fopen(directArch, "r");
	if(arch != NULL) {
		char floatStr[1000];
		fgets(floatStr, 1000, arch);
		
		float temp;
		int i, j, limitI = strlen(floatStr), pointUbc, temp2;
		for(i = 0; i < limitI; i++) { //Identifica la ubicación del punto decimal
			if(floatStr[i] == (int)'.') {
				pointUbc = i;
				//printf("Ubicacion del decimal: %d\n\nNumeros enteros:\n", pointUbc +1);
				i = limitI;
		}}
		
		j = 0;
		for(i = pointUbc -1; i > -1; i--) { //Suma los numeros enteros
			temp = floatStr[i] -'0';
			//printf("%.0f, ", temp);
			//printf("%f\n", temp*pow(10, j));
			
			floatNum += temp*pow(10, j);
			j++;
		}
		
		//printf("\nNumeros decimales:\n");
		
		j = -1;
		for(i = pointUbc +1; i < limitI; i++) { //Suma los numeros decimales
			temp = floatStr[i] -'0';
			//printf("%.0f, ", temp);
			//printf("%f\n", temp*pow(10, j));
			floatNum += temp*pow(10, j);
			j--;
		}
	} else printf("\tError detectado: Archivo inexistente/faltante\n");
	return floatNum;
}

char floatToTxt(float num) { //Carajillo va lento
	float i;
	for(i = 0; i < num; i++) {
		
	}
}

int main(int argc, char *argv[]) {
	//float a = txtToFloat("capital.txt");
	//printf("Numero de coma flotante: %.2f\n", a);
	floatToTxt(1234);
	
	/*
	float i;
	for(i = 0; i < 10; i++) {
		printf("%c\n", (char)i +'0');
	}*/
	
	system("PAUSE");
	return 0;
}


