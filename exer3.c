#include <stdio.h>


//Exercício 3 - Conversor de Unidades

/* * Criar um conversor que: 
* 1. Converta temperatura (Celsius para Fahrenheit) 
primeiro deve entender o problema:
1- para converte der celsius para fahrenheit é necessário fazer o seguinte cálculo:
  °F = (°C × 9/5) + 32
* 2. Converta distância (metros para quilômetros) 
* 3. Converta peso (quilos para libras) */

int main() {
	float F, C, M, Q, quilos, libras;
	
	//Entrada
	printf("============ Conversor de Unidades ===========\n");
	printf("==== Conversao de Temperatura ====\n");
	printf("------- Celsius em Fahrenheit -------\n");
	
    printf("Digite um valor para Celsius: ");
    scanf("%f", &C);
    
	//Calculo
	F = C * 9/5 + 32; 
	
	//Saída
	printf("%.2f Celsius = %.2f Fahrenheit\n", C, F);

    printf("--------------------------------------------------------\n");

	//Entrada 2
	printf("==== Conversao de Distancia ====\n");
	printf("------- Metros para Quilometros -------\n");
	
	printf("digite um valor em metros: ");
	scanf("%f", &M);
	
	//Calculo
	Q = M / 1000.0;
	
	//Saída
	printf("%.2f metros = %.2f quilometros\n", M, Q); 
	printf("--------------------------------------------------------\n");
	
	//Entrada 3
	printf("==== Conversao de Peso ====\n");
	printf("------- Quilo em Libras -------\n");
	printf("Digite um valor em quilos: ");
	scanf("%f", &quilos);
	
	//Conversão
	libras = quilos * 2.20462;
	
	//Saída
	printf("%.2f quilos = %.2f libras\n", quilos, libras);
	
	return 0;
}