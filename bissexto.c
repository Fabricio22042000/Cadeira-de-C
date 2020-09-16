#include <stdio.h>

int main(){
    int num;
    printf("Digite um numero:");
    scanf("%d", &num);
    if(num%10 == 0){
        if(num%400 == 0){
            printf("Ele é bissexto");
        }else{
            printf("Ele não é bissexto");
        }
    }else if(num%4 == 0){
        printf("Ele é bissexto");
    }else{
        printf("Ele não é bissexto");
    }
}