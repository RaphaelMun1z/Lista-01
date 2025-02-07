// 24. Faça um programa que receba a temperatura média de cada mês do ano e
// armazene-as em um vetor. O programa deverá calcular e mostrar a maior e a
// menor temperatura do ano, junto com o mês em que elas ocorreram (o mês
// deverá ser mostrado por extenso: 1 = janeiro, 2 = fevereiro, ...). Não se preocupe
// com empates. Cada cálculo deve ser realizado e mostrado em uma função.
#include <stdio.h>

char meses[][30] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};

void maiorTemp(double tm[]){
    double ma = tm[0];
    int mes;
    for (int ii = 0; ii < 12; ii++){
        if(tm[ii] > ma) {
            ma = tm[ii];
            mes = ii;
        }
    }
    printInfo("Maior", ma, mes);
}

void menorTemp(double tm[]){
    double me = tm[0];
    int mes;
    for (int ii = 0; ii < 12; ii++){
        if(tm[ii] < me){
            me = tm[ii];
            mes = ii;
        }
    }
    printInfo("Menor", me, mes); 
}

void printInfo(char t[], double temp, int month){
    printf("%s temperatura: %.2lf°C - Mês de %s\n", t, temp, meses[month]);
}

int main(){
    double tempMedia[12];
    
    for (int ii = 0; ii < 12; ii++){
        printf("Qual a temperatura média do mês de %s? ", meses[ii]);
        scanf("%lf", &tempMedia[ii]);
    }
    
    maiorTemp(tempMedia);
    menorTemp(tempMedia);
    
    return 0;
}