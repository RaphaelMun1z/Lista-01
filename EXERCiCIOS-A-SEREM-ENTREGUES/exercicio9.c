// 9. Faça uma função que receba como parâmetro um valor inteiro e positivo e
// retorne a soma dos divisores desse valor.
#include <stdio.h>

void somaDivisores(int n){
    int somaDiv = 0;
    for (int ii = 1; ii <= n; ii++)
    {
        if(n%ii==0){
            somaDiv+=ii;
        }
    }
    printf("Somas dos divisores de %d é: %d", n, somaDiv);
}

int main(){
    int num;

    do{
        printf("Informe o número: ");
        scanf("%d", &num);
        if(num < 0)  printf("Valor inválido!\n");
    } while(num < 0);

    somaDivisores(num);

    return 0;
}