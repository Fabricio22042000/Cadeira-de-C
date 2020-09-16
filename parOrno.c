#include <stdio.h>
//Exercicio da questão 2;
int main(){
    int num;
    int op;
    while(op != 0){
        printf("Digite um numero: ");
        scanf("%d", &num);
        if(num%2 == 0){
            printf("Ele é par\n");
        }else{
            printf("Ele é impar\n");
        }
        printf("Deseja continuar? 0 para parar");
        scanf("%d", &op);
    }
    printf("Fim do programa");
        return 0;
}