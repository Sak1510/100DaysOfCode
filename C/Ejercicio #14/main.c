#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	char inicial[100] = "", add[100] = "";
	
	printf("Dame la string inicial: ");
	scanf("%s", &inicial);
	
	printf("Ahora dame la string que le vas a sumar: ");
	scanf("%s", &add);
	
	int i;
	inicial[strlen(inicial)] = ' ';
	for(i = 0; i < strlen(add); i++) {
		inicial[strlen(inicial)] += add[i];
	}
	
	printf("%s", inicial);
	return 0;
}
