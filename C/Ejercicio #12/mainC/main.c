#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
int main(int argc, char *argv[]) { 
	FILE *archivo;
	
	archivo = fopen("num.txt", "w");
	fprintf(archivo, "125 220 34");
	fclose(archivo);

	archivo = fopen("num.txt", "r");
	char string[10];
	fgets(string, 10, archivo);	
	
	int i, stringInt, temp;
	for(i = 9; i > -1; i--) {
		temp = string[i] -'0';
		printf("%d\n", temp);
	}
	
	//printf("Texto: %s\nEntero: %d\n", string, stringInt);
	fclose(archivo);
	
	system("PAUSE");
	return 0;
}
