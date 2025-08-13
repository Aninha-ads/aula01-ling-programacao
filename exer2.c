#include <stdio.h>

/* ========= Exercício 2 - Calculadora Básica ========== */

int main() {
	float num, num1, soma, subtracao, divisao, multiplicacao;
	
	printf("=== Programa de Calculadora ===\n");
	
	//Entrada
	printf("Digite o primeiro numero: ");
	scanf("%f", &num);
	
	printf("Digite mais um numero: ");
	scanf("%f", &num1);
	
	//Início das operações
	soma = num + num1;
	subtracao = num - num1;
	divisao = num / num1;
	multiplicacao = num * num1;
	
	//Saída
	printf("=== Veja o resultado!! ===\n");
	printf("Soma = %.2f\n", soma);
	printf("Subtracao = %.2f\n", subtracao);
	printf("Multiplicacao = %.2f\n", multiplicacao);

	if (num != 0) {
		divisao = num / num1;
		printf("Divisao = %.2f\n", divisao);
	} else {
		printf("Nao pode dividir por zero");
	}

	return 0;
}

