// 11. Faça uma função que receba como parâmetro um valor inteiro e positivo N,
// indicando a quantidade de parcelas de uma soma S, calculada pela fórmula: S =
// 2/4 + 5/5 + 10/6 + 17/7 + 26/8 + ... + (n2 + 1)/(n+3)
#include <stdio.h>

void sequencia(int n){
    double res = 0;
    for (int ii = 1; ii <= n; ii++){
        res += ((ii*ii)+1.0)/(ii+3.0);
    }
    printf("S = %.2lf", res);
}

int main(){
    int num;

    do{
        printf("Informe um número inteiro e positivo: ");
        scanf("%d", &num);
        if(num <= 0)  printf("Valor inválido!\n");
    } while(num <= 0);

    sequencia(num);

    return 0;
}