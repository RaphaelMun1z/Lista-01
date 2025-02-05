// 12. Crie uma função que receba como parâmetro dois valores X e Z, calcule e retorne
// XZ sem utilizar funções ou operadores de potência prontos.
#include <stdio.h>

double potencia(int x, int z){
    double res = 1.0;
    for (int ii = 0; ii < z; ii++){
        res *= x;
    }
    return res;
}

int main(){
    int x, z;

    printf("Informe o valor de X: ");
    scanf("%d", &x);

    printf("Informe o valor de Z: ");
    scanf("%d", &z);

    printf("%d^%d = %.2lf", x, z, potencia(x, z));

    return 0;
}