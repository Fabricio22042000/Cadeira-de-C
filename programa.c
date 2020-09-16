#include <stdio.h>  // Incluindo bibliotecas


int main(){
    unsigned int numero;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    printf("Numero digitado foi %d\n", numero);
    if(numero <= 11 && numero >= 0){
        printf("Bom dia! são %d horas", numero);
    }
    else if(numero <= 18 && numero > 11){
        printf("Bom tarde! são %d horas", numero);
    }
    else if(numero > 18 && numero <= 23){
        printf("Bom noite! são %d horas", numero);
    }
    else{
         printf("Digite uma hora valida");
    }
    return 0;
}