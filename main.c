#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char text[] = {'L', 'I', 'F', 'E', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ','A',' ', 'P', 'R', 'O', 'B', 'L', 'E', 'M', ' ', 'T', 'O', ' ', 'B', 'E', ' ', 'S', 'O', 'L', 'V', 'E', 'D'}; // Criando um vetor de texto
	int N = 34; // Número de arrays que serão armazenados no vetor
	
	scanf("%d", &N);
	
	int i;
	for(i = 0; text[i] != '\0' && i < N; i++){
		printf("%c", text[i]);
	}
	
	printf("\n");
	return 0;
}
	