// 21. Faça uma função que receba uma matriz 5x5 e determine o maior elemento
// acima da diagonal principal. Esse valor deverá ser mostrado no programa
// principal.
#include <stdio.h>

double maiorEl(double mat[][5]){
    double maior = mat[0][1];
    for (int ii = 0; ii < 5; ii++)
        for (int jj = 1+ii; jj < 5; jj++)
            if(mat[ii][jj] > maior) maior = mat[ii][jj];
    return maior;
}

int main(){
    double numeros[5][5];
    
    for (int ii = 0; ii < 5; ii++){
        for (int jj = 0; jj < 5; jj++){
            printf("Informe o valor [%d][%d]: ", ii, jj);
            scanf("%lf", &numeros[ii][jj]);
        }
    }

    printf("Maior: %.1lf", maiorEl(numeros));
    
    return 0;
}