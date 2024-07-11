#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float n = 1E5;
	int i, j, N;
	char *punt[20], *temp;
	
	int sizePunt = sizeof(punt)/sizeof(punt[0]);
	for(i = 0; i < sizePunt; i++) {
		punt[i] = (char*)malloc(n *sizeof(char));	
	}
	
	printf("Cuantas strings vamos a convertir? ");
	scanf("%d", &N);
	
	for(i = 0; i < N && i < sizePunt; i++) {
		printf("Dame la string #%d: ", i +1);
		scanf("%s", &temp);
	
		strcpy(punt[i], &temp);
		printf("%s\n", punt[i]);
		
		printf("\tchar \t-> ASCII\n");
		for(j = 0; j < strlen(punt[i]); j++) {
			printf("\t%c \t-> %d\n", punt[i][j], (int)punt[i][j]);
		} printf("\n");
		
		if(i == sizePunt -1) printf("%s\n", "Espacio superado! Ya no hay memoria para seguir guardando más!");
	}
	
	system("pause");
	return 0;
}
