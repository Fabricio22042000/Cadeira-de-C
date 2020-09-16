#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    // int a = 20;
    // int * ponteiro = &a;
    // printf("%d\n", a);
    // printf("Valor do ponteiro: %d\n", *ponteiro);
    // *ponteiro = 5;
    // printf("%d\n", a);
    // printf("Valor do ponteiro: %d\n", *ponteiro);
    // printf("Tamanho de um inteiro: %ld\n", sizeof(int));
   
   
    // int lista[3];
    // lista[0] = 10;
    // lista[1] = 15;
    // lista[2] = 30;
    // printf("%d", *lista);
    
    //strcpy(), strcat(), strlen();
    char *nome1 = "Oi mundo";
    char *nome2 = "Ola mundo";
    if (strcmp(nome1, nome2) == 0){
        printf("Igual");
    }else{
        printf("Diferente");
    }
    

    return 0;
}