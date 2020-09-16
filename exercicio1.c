#include <stdio.h>

int main(){
    unsigned int num;
    printf("Digite um numero de 1 a 12: \n");
    scanf("%d", &num);
    switch (num){
        case 1 : 
            printf("Janeiro, 31 dias");
            break;
        case 2:
            printf("Fevereiro, 28 dias");
            break;
        case 3:
            printf("Março, 31 dias");
            break;
        case 4:
            printf("Abril, 30 dias");
            break;
        case 5:
            printf("Maio, 31 dias");
            break;
        case 6:
            printf("Junho, 30 dias");
            break;
        case 7:
            printf("Julho, 30 dias");
            break;
        case 8:
            printf("Agosto, 31 dias");
            break;
        case 9:
            printf("Setembro, 30 dias");
            break;
        case 10:
            printf("Outubro, 31 dias");
            break;
        case 11:
            printf("Novembro, 30 dias");
            break;
        case 12:
            printf("Dezembro, 31 dias");
            break;
        default:
            printf("Mês invalido!");
            break;
    }
    return 0;
}