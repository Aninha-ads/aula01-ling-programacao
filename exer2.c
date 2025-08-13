#include <stdio.h>

/* ========= Exercício 2 - Calculadora Básica ========== */

/* Criar uma calculadora que: 
* 1. Leia dois números 
* 2. Realize as quatro operações básicas: mult,soma,sub,div 
* 3. Exiba os resultados formatados */

int main() {
	float num, num1, soma, subtracao, divisao, multiplicacao;
	
	printf("=== Programa de Calculadora ===\n");
	
	//Entrada
	printf("Digite o primeiro numero: ");
	// Usar %f para ler um float
	scanf("%f", &num);
	
	printf("Digite mais um numero: ");
	scanf("%f", &num1);
	
	//Início das operações
	//Soma
	soma = num + num1;
	//subtração
	subtracao = num - num1;
	//divisão (fazer uma outra verificação em relação a divisão por 0, pois não pode)
	divisao = num / num1;
	//multiplicação
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
