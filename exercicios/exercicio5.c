// 5. Faça uma função que receba um valor inteiro e verifique se ele é positivo ou
// negativo.
#include <stdio.h>

void verify(int n){
    if(n > 0){
        printf("%d é positivo.", n);
    }else if(n < 0){
        printf("%d é negativo.", n);
    }else{
        printf("%d é neutro.", n);
    }
}

int main(){
    int v;

    printf("Informe um valor inteiro: ");
    scanf("%d", &v);

    verify(v);

    return 0;
}