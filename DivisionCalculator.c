//Nome: Lucas Joannes Vieira Ribeiro | RA: 20154810-5

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int A, B, R, Q, prod;
	
	
	printf("Usu�rio insira o dividendo:");
	scanf("%d", &A);
	fflush(stdin);
	
	printf("Usu�rio insira o divisor:");
	scanf("%d", &B);
	fflush(stdin);
	
	Q = A / B;
	
	printf("O quociente da divis�o �: %d", Q);
	
	prod = B * Q;
	R = A - prod;
	
	printf("\nO resto da divis�o �: %d", R);
	
}
