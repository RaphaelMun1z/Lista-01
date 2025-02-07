// 25. Crie um programa que receba o número dos 10 alunos de uma sala,
// armazenando-os em um vetor, junto com as notas obtidas ao longo do semestre
// (foram realizadas quatro avaliações). Elabore funções para:
// 1. Determinar e mostrar a média aritmética de todos os alunos;
// 2. Indicar os números dos alunos que deverão fazer a recuperação, ou seja,
// aqueles com média inferior a 60.
// Todas as mensagens deverão ser mostradas no programa principal.
#include <stdio.h>

double alunos[10][5];

int findAlunoByCode(int code){
    for (int ii = 0; ii < 10; ii++)
        if(alunos[ii][0] == code) return ii;
    return -1;
}

double mediaAluno(int code){
    double notaMedia = 0.0;
    for (int jj = 1; jj < 5; jj++)
        notaMedia += alunos[findAlunoByCode(code)][jj];
    return notaMedia / 4.0;
}

int isAlunoRec(int code){
    return (mediaAluno(code) < 6.0) ? 1 : 0;
}

int main(){
    for (int ii = 0; ii < 10; ii++){
        printf("\nQual o número do %d° aluno? ", (ii+1));
        scanf("%lf", &alunos[ii][0]);
        for (int jj = 1; jj < 5; jj++){
            printf("Qual a %d° nota do aluno #%.0lf (0-10)? ", jj, alunos[ii][0]);
            scanf("%lf", &alunos[ii][jj]);
        }
    }
    
    printf("\n");
    
    for (int ii = 0; ii < 10; ii++)
    printf("Média aluno código #%.0lf: %.2lf\n", alunos[ii][0], mediaAluno(alunos[ii][0]));
    
    printf("\n");

    for (int ii = 0; ii < 10; ii++)
        if(isAlunoRec(alunos[ii][0])) printf("Aluno código #%.0lf deverá fazer a recuperação.\n", alunos[ii][0]);
    
    return 0;
}