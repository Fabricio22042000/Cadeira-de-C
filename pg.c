#include <stdio.h>

int main(){
    int qnt;
    int razao;
    int result = 0;
    printf("Diga a quantidade de elementos da PG: ");
    scanf("%d", &qnt);
    printf("Diga a razao da PG:1 ");
    scanf("%d", &razao);

    int lista[qnt];
    int sizeLista = sizeof(lista)/4;
    lista[0] = 1;
    int cont = 0;
    for(int i =1;i<sizeLista;i++){
        lista[i] = *(lista+cont) * razao;
        cont++;
    }
    for(int i = 0;i<sizeLista;i++){
        printf("%d ", lista[i]);
    }
    return 0;
}