#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
int main(int argc, char *argv[]) { 
	FILE *archivo;
	
	archivo = fopen("num.txt", "w");
	fprintf(archivo, "125 ");
	fclose(archivo);

	archivo = fopen("num.txt", "r");
	char string[5];
	fgets(string, 5, archivo);	
	
	int i, j = 2, stringInt, temp1, temp2;
	for(i = 0; i < 5; i++) {
		temp1 = string[i] -'0';
		if(temp1 > 0) {
			temp2 = temp1*pow(10, j);
			j--;
			
			stringInt = stringInt +temp2;
			printf("%d, %d, %.2f\n", temp2, stringInt, (float)stringInt);
		}
	}
	
	//printf("Texto: %s\nEntero: %d\n", string, stringInt);
	fclose(archivo);
	
	system("PAUSE");
	return 0;
}
