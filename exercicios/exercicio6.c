/* 6. Crie uma função que receba como parâmetro a altura (alt) e o sexo de uma
pessoa e retorne seu peso ideal. Para homens, deverá calcular o peso ideal
usando a fórmula: peso ideal = 72.7*alt-58; para mulheres, peso ideal = 62.1*alt-
44.7. */
#include <stdio.h>

double pesoIdeal(double alt, char s){
    return (s == 'M') ? ((72.7*alt)-58) : ((62.1*alt)-44.7);
}

int main(){
    double alt;
    char s;

    printf("Informe o sexo: ");
    scanf("%c", &s);

    printf("Informe a altura: ");
    scanf("%lf", &alt);

    printf("O peso ideal é: %.2lf", pesoIdeal(alt, s));

    return 0;
}