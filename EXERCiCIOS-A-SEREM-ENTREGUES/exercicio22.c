// 22. Criar um programa que
// 1. Utilize uma função para receber elementos de uma matriz 10x5 de
// números reais;
// 2. Utilize uma função para calcular a soma de todos os elementos
// localizados abaixo da sexta linha dessa matriz;
// Os resultados deverão ser mostrados no programa principal.
#include <stdio.h>

double numeros[10][5];

void setMat(){
    for (int ii = 0; ii < 10; ii++){
        for (int jj = 0; jj < 5; jj++){
            printf("Informe o valor [%d][%d]: ", ii, jj);
            scanf("%lf", &numeros[ii][jj]);
        }
    }
}

double somarEl(){
    double soma = 0.0;
    for (int ii = 6; ii < 10; ii++)
        for (int jj = 0; jj < 5; jj++)
            soma += numeros[ii][jj];
    return soma;
}

int main(){
    setMat();
    printf("Soma: %.2lf", somarEl());
    return 0;
}