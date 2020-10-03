#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int num1, num2, aux, result, pilha;
    char string[2];
    char stringFinal[9] = "";

    printf("Digite o numero 1: ");
    scanf("%d", &num1);
    printf("Digite o numero 2: ");
    scanf("%d", &num2);

    if( (num1 != 0 || num2 != 0) &&  (num1 >= 1 && num1 <= 999,999.999) && (num2 >=1)){
        result = num1 + num2;
        aux = result;
        while(aux != 0){
            pilha = aux;
            aux = aux / 10;
            result = pilha % 10;
            if(result != 0){
                sprintf(string, "%d", result);
                strcat(stringFinal, string);
            }
        }
    }
    for(int i=strlen(stringFinal)-1;i>=0;i--){
        printf("%c",stringFinal[i]);
    }
    return 0;
}