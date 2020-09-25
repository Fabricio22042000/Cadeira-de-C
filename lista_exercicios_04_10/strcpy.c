#include <string.h>
#include <stdio.h>

int main(){
    int op = 1;
    while(op){
        char vetor1[40];
        char vetor2[40];
        printf("Digite um nome: ");
        scanf("%s" , &vetor1);

        strcpy(vetor2, vetor1);
        printf("Nome copiado \n");
        puts(vetor2);

        printf("Deseja sair? 0 para sair ");
        scanf("%d", &op);
        if(op == 0){
            op = 0;
        }
    }
    return 0;
}