#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char nome[50];
    printf("Digite um nome:");
    fgets(nome, 50, stdin);
    char string2[50];

    for(int i=0;i<=strlen(nome);i++){
        nome[i] = tolower(nome[i]);
    }

    strcpy(string2, nome);

    int count = 0;
    for(int i=strlen(nome)-2;i>=0;i--){
        string2[count] = nome[i];
        count++;
    }

    for(int x=0; x <= strlen(string2); x++){
        if(string2[x] == ' ') {
            for(int y=x; y <= strlen(string2); y++){
                string2[y] = string2[y+1];
            }
        }
    }
    for(int i=0; i <= strlen(nome); i++){
        if(nome[i] == ' ') {
            for(int j=i;j<=strlen(nome);j++){
                nome[j] = nome[j+1];
            }
        }
    }
    puts(nome);
    puts(string2);

    if(strcmp(nome, string2) == 0){
        printf("É igual");
    }else{
        printf("Diferente");
    }
    
    return 0;
}