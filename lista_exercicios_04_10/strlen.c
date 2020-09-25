#include <stdio.h>
#include <string.h>

int main(){
    int op = 1;
   
    while(op){
        char frase[120];
        printf("Digite uma frase: ");
        gets(frase);
        frase[strlen(frase)];
        int tam = strlen(frase);
        printf("Tamanho : %d\n" , tam);

        printf("Deseja continuar? 0 para sair \n");
        scanf("%d", &op);
        if(op == 0){
            op = 0;
        }
    }
    return 0;
}