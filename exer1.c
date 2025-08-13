#include <stdio.h>

int main() {
	char nome[100], curso [100];
	int idade, ano_nascimento;
	
	printf("=== PROGRAMA DE APRESENTAÇAO ===\n");
	
	printf("Digite seu nome completo: ");
	fgets(nome, sizeof(nome), stdin); 
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	printf("Digite seu curso: ");
	scanf(" %99[^\n]", curso); 

	//Cálculo da idadde
	ano_nascimento = 2025 - idade;
	
	//saida 
	printf("==== Bem Vindo(a)! ====");
	printf("Ola: %s", nome);
	printf("Você tem %d anos e estuda %s", idade, curso); 
	printf("Voce nasceu aproximadamente em %d", ano_nascimento);

	return 0;
}