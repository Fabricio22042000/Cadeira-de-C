#include <stdio.h>


int main(){
    int inicio;
    int final;
    int resto;
    int aux;
    printf("Sua sequencia comeca em qual numero? ");
    scanf("%d", &inicio);
    printf("Sua sequencia termina em qual numero? ");
    scanf("%d", &final);

    for(int i = inicio;i <= final;i++){
        printf("%d", i);
        if(i == final){
            for(int j = final; j >= inicio ; j--){
                aux = j;
                while(aux != 0){
                    resto = aux%10;
                    printf("%d", resto);
                    aux /= 10;
                }
            }
        }
    }
    return 0;
}