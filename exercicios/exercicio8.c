// 8. Faça uma função que receba um valor inteiro e positivo, calcule e mostre seu
// fatorial.
#include <stdio.h>

void fatorial(int n){ 
    double res = 1; 
    for (int ii = 1; ii <= n; ii++){
        res *= ii;
    }
    printf("Fatorial de %d é %.2lf.", n, res);
}

int main(){
    int n;
    
    printf("Informe um valor inteiro e positivo: ");
    scanf("%d", &n);

    fatorial(n);

    return 0;
}