// 10. Elabore uma função que receba como parâmetro um valor N (inteiro e maior ou
// igual a 1) e determine o valor da sequência S, descrita a seguir: S = 1 + 1/2 + 1/3
// + 1/4 + ... + 1/N. A quantidade de parcelas que compõe S é igual a N.
#include <stdio.h>

void sequencia(int n){
    double res = 0;
    for (int ii = 1; ii <= n; ii++)
    {
        res += 1.0/ii;
    }
    printf("S = %.2lf", res);
}

int main(){
    int num;

    do{
        printf("Informe um número inteiro e maior ou igual a 1: ");
        scanf("%d", &num);
        if(num < 1)  printf("Valor inválido!\n");
    } while(num < 1);

    sequencia(num);

    return 0;
}