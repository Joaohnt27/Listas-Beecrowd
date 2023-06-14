#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int N;
	
	scanf("%d", &N);
	
	int i;
	for (i = 0; i < N; i++) {
		int h, d, g;
		scanf("%d %d %d", &h, &d, &g);
		
		if (h >= 200 && h <=300 && d >= 50 && g >= 150){
			printf("Sim");
		} else {
			printf("Nao");
		}
	}
	
	return 0;
}
	