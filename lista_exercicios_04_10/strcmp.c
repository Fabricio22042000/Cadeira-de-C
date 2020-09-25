#include <string.h>
#include <stdio.h>

int main(){
    int op = 1;
    char string2[] = "fabricio";
    while(op){
        char string1[20];

        printf("Digite um nome: ");
        scanf("%s", &string1);

        if(strcmp(string1, string2) == 0){
            printf("São iguais\n");
        }else{
            printf("São diferentes\n");
        }
        printf("Deseja continuar? 0 para sair: ");
        scanf("%d", &op);
        if(op == 0){
            op = 0;
        }
    }
    return 0;
}