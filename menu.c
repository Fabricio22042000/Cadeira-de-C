#include <stdio.h>

int main(){
    int true = 1;
    int false = 0;
    int op = true;
    while(op){
        printf("----- Menu -----\n");
        printf("(1) Frango\n");
        printf("(2) Biscoito\n");
        printf("(3) Batata Doce\n");
        printf("(4) Feijoada\n");
        printf("(5) Maça\n");
        printf("(6) Manga\n");
        printf("(7) Milho\n");
        printf("(8) Alface\n");
        printf("(9) Carne\n");
        printf("----------------\n");
        printf("Selecione o menu ou 0 para sair: ");
        scanf("%d", &op);
        if(op != 0){
            if(op > 9 || op < 0){
                op = true;
                printf("Escolha invalida!\n");
            }
        }else{
            printf("Saindo do programa\n");
            op = false;
        }
    }
    return 0;
}