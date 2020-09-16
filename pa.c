#include <stdio.h>

int main(){
    int qnt;
    int razao;
    int result = 0;
    printf("Diga a quantidade de elementos da PA: ");
    scanf("%d", &qnt);
    printf("Diga a razao da PA: ");
    scanf("%d", &razao);

    int lista[qnt];
    int sizeLista = sizeof(lista)/4;
    lista[0] = 0;
    int cont = 0;
    for(int i =1;i<sizeLista;i++){
        lista[i] = lista[0+cont] + razao;
        cont++;
    }
    for(int i = 0;i<sizeLista;i++){
        printf("%d ", lista[i]);
    }
    return 0;
}