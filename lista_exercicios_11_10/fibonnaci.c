#include <stdio.h>
#include <string.h>

int main(){
    int quant;
    printf("Digite a quantidade da sequencia: ");
    scanf("%d", &quant);
    int vetor[quant];
    for(int i = 0;i <= sizeof(vetor)/4;i++){
        if(i == 0){
            vetor[i] = i;
        }else if(i == 1){
            vetor[i] = i;
        }else{
            vetor[i] = vetor[i-2] + vetor[i-1];
        }
    }
    for(int i=0;i<=sizeof(vetor)/4;i++){
        printf("%d ", vetor[i]);
    }
    return 0;
}