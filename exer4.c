#include <stdio.h>

/* * Programa que: 
* 1. Leia 4 notas de um aluno 
* 2. Calcule a média 
* 3. Determine se foi aprovado (média >= 7.0) */

int main() {
    double a, b, c, d, media;
    printf("Digite a nota a: ");
    scanf("%lf", &a);
    printf("Digite a nota b: ");
    scanf("%lf", &b);
    printf("Digite a nota c: ");
    scanf("%lf", &c);
    printf("Digite a nota d: ");
    scanf("%lf", &d);
    
    //Calculo
    media = (a+b+c+d) / 4;

    //Verifica se foi aprovado
    if (media >= 7.0) {
     printf("Media: %.2f. Aluno(a) aprovado(a)!\n", media);
    } else {
     printf("Media: %.2f. Aluno(a) reprovado(a)!\n", media);
    }

    return 0; 

}