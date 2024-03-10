//Nome: Lucas Joannes Vieira Ribeiro | RA: 20154810-5

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int A, B, R, Q, prod;
	
	
	printf("Usuário insira o dividendo:");
	scanf("%d", &A);
	fflush(stdin);
	
	printf("Usuário insira o divisor:");
	scanf("%d", &B);
	fflush(stdin);
	
	Q = A / B;
	
	printf("O quociente da divisão é: %d", Q);
	
	prod = B * Q;
	R = A - prod;
	
	printf("\nO resto da divisão é: %d", R);
	
}
