#include <stdio.h>
#include <stdlib.h>

#ifndef PI
#define PI 3.14159
#endif

#define AreaCirculo(R) (PI *R *R)
int main(int argc, char *argv[]) {
	float r;
	printf("Vamos a calcular el area de un circulo!\nDame el valor del radio: ");
	scanf("%f", &r);
	
	printf("\nEl area de tu circulo es %.5f u2\n", AreaCirculo(r));
	return 0;
}
