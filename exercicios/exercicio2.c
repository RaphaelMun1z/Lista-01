// 2. Crie uma função que receba três números inteiros como parâmetros
// representando horas, minutos e segundos, e os converta em segundos. Exemplo:
// 2h, 40min e 10s correspondem a 9610 segundos.
#include <stdio.h>

int toSeconds(int h, int m, int s){
    return ((h*3600) + (m*60) + s);
}

int main(){
    int h, m, s;

    do{
        printf("Horas: ");
        scanf("%d", &h);
        if(h < 0) printf("Valor inválido!\n");
    } while (h < 0);

    do{
        printf("Minutos: ");
        scanf("%d", &m);
        if(m < 0 || m > 60) printf("Valor inválido!\n");
    } while (m < 0 || m > 60);

    do{
        printf("Segundos: ");
        scanf("%d", &s);
        if(s < 0 || s > 60) printf("Valor inválido!\n");
    } while (s < 0 || s > 60);


    printf("%dh, %dmin e %ds correspondem a %d segundos.", h, m, s, toSeconds(h, m, s));

    return 0;
}