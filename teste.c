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
    char frase[100];
    int i = 0;
    printf("Digite uma frase: ");
    gets(frase);
    int cont = 0;
    for(i=0;frase[i] != '\0';i++);
    printf("Voce digitou %d caracteres", i);
    return 0;
}