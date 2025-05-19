#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
	
	float peso, altura, bmi;
	
	printf("Ingrese su peso (kg)\n");
	scanf("%f", &peso);
	printf("Ingrese su altura(metros)\n");
	scanf("%f", &altura);
	
	bmi = peso/ (pow(altura, 2));
	
	printf("\nSu índice de masa corporal es: %.2f\n", bmi);
	
	printf("Indice\t\t|\tCondicion\n");
	printf("---------------------------------\n");
	printf("<18.5\t\t|\tBajo peso\n");
	printf("18.5 a 24.9\t|\tNormal\n");
	printf("25.0 a 29.9\t|\tSobrepeso\n");
	printf(">=30\t\t|\tObesidad");
	return 0;
}

