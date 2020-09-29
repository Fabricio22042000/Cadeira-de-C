#include <stdio.h>
#include <string.h>

int main(){
    int horas;
    int vmedia;
    printf("Digite o tempo gasto na viagem (HORAS): ");
    scanf("%d", &horas);
    printf("Digite a velocidade media (KM/H): ");
    scanf("%d", &vmedia);

    int distancia = (horas * vmedia);
    float litros = distancia / (float) 12;
    printf("%.3f", litros);
    
    return 0;
}