#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
//Crea un programa que valide una contraseña creada por el usuario

int main(int argc, char *argv[]) {
	char contr[8], verf[8];
	int N[8], i;
	bool conf = true;
	
	/* Ignorar esta tortura que dejare al deleite de todos
	printf("Crea tu password: ");
	scanf("%s", contr);
	
	printf("Verifica tu password: ");
	scanf("%s", verf);
	
	int i; bool acept = true;
	for(i = 0; i < 100; i++) {
		if(contr[i] != verf[i]) acept = false;
	}
	
	if(strlen(contr)  strlen(verf)) acept = false; //Que carajos intente hacer aqui?
	
	printf("%d %d\n", strlen(contr), strlen(verf));
	
	
	Codigo de prueba, hecho a las casi 11:00 p.m. el 19/05/2024
	Estaba cansado, y ya no tenia idea como hacerle
	
	Pero es interesante como es que evoluciona un codigo de algo tan horrible como lo que es este de arriba, a un codigo más
	limpio y conciso 
	*/
	
	printf("Introduce una password de un valor maximo de 8 caracteres.\nSe recomienda no incluir caracteres especiales\n");
	while(conf) { 
		while(conf) { 
			printf("Dame tu password: ");
			scanf("%s", &contr);
			
			if(strlen(contr) > 8) {
				printf("Limite de caracteres sobrepasado. Intentalo de nuevo.\n\n");
			} else conf = !conf; 
		}
		
		conf = !conf;
		while(conf) { 
			printf("Confirma tu password: ");
			scanf("%s", &verf);
			
			if(strlen(verf) > 8) {
				printf("Limite de caracteres sobrepasado. Intentalo de nuevo.\n\n");
			} else conf = !conf;
		}
		
		conf = true;
		if(strlen(contr) == strlen(verf)) { 
			for(i = 0; i < strlen(contr); i++) {
			  	N[i] = (contr[i] == verf[i]) ? 1 : 0; 
		}} else conf = false; 
		
		for(i = 0; i < strlen(contr); i++) if(N[i] != 1) { 
			conf = false; 
			i = strlen(contr); 
		}
		
		if(conf) { 
			printf("\nPasswords iguales!\n");
			conf = false; 
		} else {
			printf("\nLas password no son iguales. Intentalo de nuevo\n\n"); 
			conf = true; 
	}}
	
	/* Documentación del codigo (explicación de los pasos más importantes)
		Linea 36 // While que solo acepta contraseña validas (iguales)
		Linea 37 // Si sobrepasa el limite de caracteres, se repetira
		Linea 43 // Se vuelve en false (0), terminando el bucle while()
		Linea 47 // Si sobrepasa el limite de caracteres, se repetira
		Linea 53 // Se vuelve en false (0), terminando el bucle while()
		Linea 56 // Si no hay algun error con las dos contraseñas, se devolvera true terminando con el programa
		Linea 57 // Se verifica si las dos strings son del mismo tamaño
		Linea 59 // No se que intente hacer aqui pero si funciono xd
		Linea 62 // for() & if() que determinaran si son iguales las dos contraseñas
		Linea 63 // Si se estable false (0), las contraseñas no son iguales
		Linea 64 // Se obliga a cerrar el ciclo for() por discrepancia en las dos contraseñas
		Linea 67 // Si no se volvio a modificar, se retornara un positivo
		Linea 69 // Con esto se termina el ciclo while() principal (linea No. 35)
		Linea 71 // Se retornara un negativo
		Linea 72 // Se repetira el ciclo while() hasta que se cumpla que las dos contraseñas son iguales.
	*/
	system("PAUSE");
	return 0;
}
