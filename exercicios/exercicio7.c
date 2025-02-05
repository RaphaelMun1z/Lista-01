// 7. Elabore uma função que leia um número não determinado de valores positivos
// e retorne a média aritmética desses valores. Terminar a entrada de dados com o
// valor zero.
#include <stdio.h>

void media(){ 
    double media = 0, n;
    int qntN = 0;
    while(n != 0){
        printf("Informe o número: ");
        scanf("%lf", &n);
        media += n;
        qntN++;
    }

    media /= qntN-1;
    printf("Média aritmética: %lf", media);
}

int main(){
    media();

    return 0;
}