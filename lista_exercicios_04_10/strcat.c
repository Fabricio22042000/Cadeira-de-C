#include <stdio.h>
#include <string.h>

int main(){
    int op = 1;
    while(op){
        char string1[50];
        char string2[50];

        printf("Digite o primeiro nome: ");
        scanf("%s", &string1);
        string1[strlen(string1)];
        printf("Digite o segundo nome: ");
        scanf("%s", &string2);
        string2[strlen(string2)];

        puts(strcat(string1, string2));

        printf("Deseja sair? 0 para sair\n");
        scanf("%d", &op);
        if(op == 0){
            op = 0;
        }
    }
    
    return 0;
}