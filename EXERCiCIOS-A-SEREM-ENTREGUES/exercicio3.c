// 3. Elabore uma função que receba dois números como parâmetros e retorne 0 se
// o primeiro número for divisível pelo segundo número. Caso contrário, deverá
// retornar o próximo divisor.
#include <stdio.h>

int divisivel(int n1, int n2){
    if(n1 % n2 == 0){
        return 0;
    }else{
        for (int ii = n2+1; ii <= n1; ii++)
        {
            if(n1 % ii == 0) return ii;
        }
    }
}

int main(){
    int n1, n2;

    printf("Primeiro número: ");
    scanf("%d", &n1);

    printf("Segundo número: ");
    scanf("%d", &n2);

    printf("Resposta: %d", divisivel(n1, n2));

    return 0;
}