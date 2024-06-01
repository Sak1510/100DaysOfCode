#include <stdio.h>
#include <stdlib.h>

//Obtiene el tamaño que necesitara el array para almacenar el float en string
int sizeNum10(float num) {
	int i = 0, limitI;
	float temp = num;
	
	while(abs(temp) > 0.9) {
		temp /= 10;
		i++;
	}
	
	if(num < 0) {
		i++;
	}
	return i +3;
}

//Funcion principal
char floatToTxt(float floatNum, int iter) {
	int i = 0, limitI, j = 0, k = 0;
	float temp1 = abs(floatNum), temp2 = 0, temp3;
	char txtNum[100] = "";
	
	//Verifica si no es 0 o si el numero es negativo
	if(floatNum == 0) {
		txtNum[j] = (char)0 +'0';
		j++;
	} else if(floatNum < 0) {
		txtNum[j] = '-';
		j++;
	}
	
	//Revisa cuantos casillas de enteros tiene (10 -> 2, 100 -> 3, 1234 -> 4)
	while(temp1 > 0.9) {
		//printf("i: %d,\tpow: %f, temp: %f\n", i, pow(10, i), temp1);
		temp1 /= 10;
		
		i++;
	} limitI = i -1;
	
	//printf("\n");
	
	//Convierte todos los enteros en char para despues almacenarlos en el array string
	temp1 = 0;
	for(i = limitI; i > -1; i--) {
		temp2 = temp1*10;	
		temp1 = floor(abs(floatNum)*pow(10, -i));
		temp3 = temp1 -temp2;
		
		txtNum[j] = (char)temp3 +'0';
		j++;
		
		//printf("i: %d\nj: %d\n", i, j);
		//printf("temp1: %.0f\n", temp1);
		//printf("temp2: %.0f\n", temp2);
		//printf("temp3: %.0f\n", temp3);		
		//printf("char: %c\n\n", (char)temp3 +'0');
	} txtNum[j] = '.'; //Agrega el punto decimal
	
	
	temp3 = floatNum; //Para no modificar "floatNum"
	//printf("%.2f, %.2f\n", floatNum, temp3);
	if(floatNum < 0) { //Metodo para convertir los decimales en char cuando es negativo
		temp1 = floor((1 -(temp3 -floor(temp3)))*10);
		//printf("%.2f, %c\n", temp1, (char)temp1 +'0');
		txtNum[strlen(txtNum)] = (char)temp1 +'0';
		
		temp2 = ceil(((1 -(temp3 -floor(temp3)))*10 -floor((1 -(temp3 -floor(temp3)))*10))*10);
		//printf("%.2f, %c\n", temp2, (char)temp2 +'0');
		txtNum[strlen(txtNum)] = (char)temp2 +'0';
	} else { //Y para cuando es negativo
		temp1 = floor((temp3 -floor(temp3))*10);
		//printf("%.2f, %c\n", temp1, (char)temp1 +'0');
		txtNum[strlen(txtNum)] = (char)temp1 +'0';
		
		temp2 = ceil(((temp3 -floor(temp3))*10 -floor((temp3 -floor(temp3))*10))*10);
		//printf("%.2f, %c\n", temp2, (char)temp2 +'0');
		txtNum[strlen(txtNum)] = (char)temp2 +'0';		
	}

	//Regresa el index del array especificado (se recomienda usar un ciclo for())
	return txtNum[iter];
}

//Codigo de pruebas
int main(int argc, char *argv[]) {
	float N = 35/354.47 -758.14*0.4475;
	char C[100] = "";
	
	int i;
	for(i = 0; i < sizeNum10(N); i++) {
		C[i] = floatToTxt(N, i);
	}
	
	printf("%s\n", C);
	return 0;
}
