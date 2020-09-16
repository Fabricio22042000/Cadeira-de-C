//exercicio numero primo
#include <stdio.h>

int main(){
    int num;
    int cont = 0;
    printf("Digite um numero maior que 0: ");    
    scanf("%d", &num);
    for(int i = 1;i<=num;i++){
        if(num%i == 0){
            cont +=  1;
        }
    }
    if(cont == 2){
        printf("Ele é primo!");
    }else{
        printf("Ele não é primo!");
    }
}