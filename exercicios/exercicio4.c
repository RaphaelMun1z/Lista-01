// 4. Faça uma função que receba como parâmetro o raio de uma esfera, calcule e
// mostre no programa principal o seu volume: v=4/3*pi*R3.
#include <stdio.h>

double getVolume(double raio){
    return (4.0/3.0)*3.14159*(raio*raio*raio);
}

int main(){
    double r;

    printf("Raio da esfera: ");
    scanf("%lf", &r);

    printf("Volume: %.2lf", getVolume(r));

    return 0;
}