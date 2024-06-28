#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <windows.h>
#include <math.h>
#include <time.h>

float stringToFloat(char string[]) { //Corregida
	float floatNum = 0;
	float temp, neg = +1, estb = 0;
	int i, j, pointUbc;
	
	if(string[0] == (int)'-') {
		neg = -1;
		estb = 1;
	}

	for(i = 0; i < strlen(string); i++) { //Identifica la ubicación del punto decimal
		if(string[i] == '.') {
			pointUbc = i;
			//printf("limitI: %d\n", pointUbc);
	}}

	j = 0;
	for(i = pointUbc -1; i > -1 +estb; i--) { //Suma los numeros enteros
		temp = string[i] -'0';
		floatNum += temp*pow(10, j);
		j++;
	} //printf("%.2f\n", floatNum);
	
	
	j = 1;
	for(i = pointUbc +1; i < strlen(string); i++) { //Suma los numeros decimales
		temp = string[i] -'0';
		//printf("%.0f\n", temp);
		floatNum += temp*pow(10, -j);
		j++;
	} //printf("floatNum: %f", floatNum);
	
	floatNum *= neg;
	return floatNum;
}

//Funcion principal
char *floatToString(float floatNum) {
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
		temp1 /= 10;
		
		i++;
	} limitI = i -1;
	
	//Convierte todos los enteros en char para despues almacenarlos en el array string
	temp1 = 0;
	for(i = limitI; i > -1; i--) {
		temp2 = temp1*10;	
		temp1 = floor(abs(floatNum)*pow(10, -i));
		temp3 = temp1 -temp2;
		
		txtNum[j] = (char)temp3 +'0';
		j++;
	} txtNum[j] = '.'; //Agrega el punto decimal
	
	//Aqui hay algo mal
	temp3 = floatNum; //Para no modificar "floatNum"
	if(floatNum < 0) { //Metodo para convertir los decimales en char cuando es negativo
		temp1 = floor((1 -(temp3 -floor(temp3)))*10);
		txtNum[strlen(txtNum)] = (char)temp1 +'0';
		
		temp2 = ceil(((1 -(temp3 -floor(temp3)))*10 -floor((1 -(temp3 -floor(temp3)))*10))*10);
		txtNum[strlen(txtNum)] = (char)temp2 +'0';
	} else { //Y para cuando es negativo
		temp1 = floor((temp3 -floor(temp3))*10);
		txtNum[strlen(txtNum)] = (char)temp1 +'0';
		
		temp2 = ceil(((temp3 -floor(temp3))*10 -floor((temp3 -floor(temp3))*10))*10);
		txtNum[strlen(txtNum)] = (char)temp2 +'0';
	}
	
	//Regresa el index del array especificado (se recomienda usar un ciclo for())
	return txtNum;
}

int main(int argc, char *argv[]) {
	printf("%s\n", floatToString(1230.231));
	return 0;
}
