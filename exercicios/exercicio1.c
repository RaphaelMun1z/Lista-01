// 1. Faça uma função que receba um número inteiro e positivo N como parâmetro e
// retorne a soma dos números inteiros existentes entre o número 1 e N (inclusive).
#include <stdio.h>

int soma(int N){
    int soma = 0;
    for (int ii = 1; ii <= N; ii++)
        soma += ii;
    return soma;
}

int main(){
    int N;

    do{
        printf("Informe um número inteiro e positivo: ");
        scanf("%d", &N);

        if(N <= 0) printf("Valor inválido!\n");
    } while (N <= 0);

    printf("Soma dos números inteiros existentes entre o número 1 e %d: %d", N, soma(N));

    return 0;
}