#include <stdio.h>

int main(){
    int numero;
    printf("Digite um numero maior que 0: ");
    scanf("%d", &numero);
    int numeroR = numero;
    if(numero > 0){
        printf("%d",numeroR);
        for(int i = numero-1; i>0; i--){
            numero = (numero*i);
            if(i == 1){
                printf(" x %d = %d\n", i,numero);
            }else{
                printf(" x %d", i);
            }
        }
    }else{
        printf("Erro! Numero digitado incorreto!");
    }
}