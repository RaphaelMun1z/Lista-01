// 13. Foi realizada uma pesquisa entre 15 habitantes de uma região. Os dados
// coletados de cada habitante foram: idade, sexo, salário e número de filhos. Faça
// uma função que leia esses dados armazenando-os em vetores. Depois, crie
// funções que recebam esses vetores como parâmetros e retornem a média de
// salário entre os habitantes, a menor e a maior idade do grupo e a quantidade de
// mulheres com três filhos que recebem até R$ 500,00 (utilize uma função para
// cada cálculo).
#include <stdio.h>

int idade[15];
char sexo[15];
double salario[15];
int filhos[15];

double lerDados(int ind){
    printf("Idade: ");
    scanf("%d", &idade[ind]);

    printf("Sexo: ");
    scanf(" %c", &sexo[ind]);

    printf("Salario: ");
    scanf("%lf", &salario[ind]);

    printf("Filhos: ");
    scanf("%d", &filhos[ind]);
    printf("============================\n");
}

double mediaSalHab(double salVet[]){
    double media = 0;
    for (int ii = 0; ii < 15; ii++)
        media += salVet[ii];
    return media / 15.0;
}

int menorIdade(int idadeVet[]){
    int menor = idadeVet[0];
    for (int ii = 1; ii < 15; ii++)
        if(idadeVet[ii] < menor) menor = idadeVet[ii];
    return menor;
}

int maiorIdade(int idadeVet[]){
    int maior = idadeVet[0];
    for (int ii = 1; ii < 15; ii++)
        if(idadeVet[ii] > maior) maior = idadeVet[ii];
    return maior;
}

int qntMTresFilhos(char sVet[], double salVet[], int filhosVet[]){
    int qnt = 0;
    for (int ii = 0; ii < 15; ii++)
        if(sVet[ii] == 'F' && filhosVet[ii] == 3 && salVet[ii] <= 500.00) qnt++;
    return qnt;
}

int main(){
    for (int ii = 0; ii < 15; ii++) lerDados(ii);
    printf("Média de salário entre os habitantes: %.2lf\n", mediaSalHab(salario));
    printf("Menor idade do grupo: %d\n", menorIdade(idade));
    printf("Maior idade do grupo: %d\n", maiorIdade(idade));
    printf("Quantidade de mulheres com três filhos que recebem até R$ 500,00: %d\n", qntMTresFilhos(sexo, salario, filhos));
    return 0;
}