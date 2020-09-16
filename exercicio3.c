//exercicio numero primo
#include <stdio.h>

int main(){
    int num;
    printf("Digite um numero maior que 0: ");    
    scanf("%d", &num);
    if(!(num%2 != 0) || !(num%3 != 0)){
        printf("Não é primo");
    }else{
        printf("É primo");
    }
} 
