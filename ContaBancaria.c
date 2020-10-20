#include <stdio.h>
#include <string.h>

struct ContaBancaria{
    char nome[100];
    char senha[20];
    char numeroConta[10];
    float saldo;
    int isVazio;
}Conta;

struct ContaBancaria listaContas[10];
int numContas = 0;

int main(){
    for(int i =0;i<10;i++){
        listaContas[i].isVazio = 0;
    }

    int fim = 1;
    char num[10];

    while(fim){
        int op;
        char senhaDigitada[20];

        menu();
        printf("\nDigite uma opção: ");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            criarConta();
            break;
        case 2:
            printf("Digite a senha para procurar o saldo: ");
            scanf("%s", &senhaDigitada);
            consultarSaldo(senhaDigitada);
            break;
        case 3:
            setbuf(stdin,NULL);
            printf("Digite o numero da conta para depositar: ");
            gets(num);
            depositar(num);
            break;
        case 4:
            setbuf(stdin, NULL);
            printf("Digite o numero da conta para sacar: ");
            gets(num);
            sacar(num);
            break;
        case 5:
            setbuf(stdin, NULL);
            printf("Digite o numero da conta para excluir: ");
            gets(num);
            excluirConta(num);
            break;
        case 6:
            fim = 0;
            printf("Fim do programa");
            break;
        default:
            break;
        }
}
    listarTudo();
    return 0;
}

void criarConta(){
    struct ContaBancaria conta;
    setbuf(stdin, NULL);
    printf("Nome: ");
    gets(conta.nome); 
    setbuf(stdin, NULL);
    printf("Senha: ");
    gets(conta.senha);
    setbuf(stdin, NULL);
    printf("Numero da Conta (MAX 10): ");
    gets(conta.numeroConta);
    conta.saldo = 0;
    conta.isVazio = 1;
    listaContas[numContas] = conta;
    numContas++;
    printf("Conta criada com sucesso!");
    setbuf(stdin, NULL);
}

void consultarSaldo(char *senha){
    for(int i=0;i<10;i++){
        if(listaContas[i].isVazio != 0){
            if(strcmp(listaContas[i].senha, senha) == 0){
                printf("%f", listaContas[i].saldo);
            }
        }
    }
}

void depositar(char *numConta){
    char verificarNome[100];
    float depositar;
    for(int i=0;i<10;i++){
        if(listaContas[i].isVazio != 0){
            if(strcmp(listaContas[i].numeroConta, numConta) == 0){
                setbuf(stdin, NULL);
                printf("Digite seu nome para verificar: ");
                gets(verificarNome);
                if(strcmp(listaContas[i].nome, verificarNome) == 0){
                    setbuf(stdin, NULL);
                    printf("Digite quanto quer depositar: ");
                    scanf("%f", &depositar);
                    listaContas[i].saldo += depositar;
                }
            }
        }
    }
}

void sacar(char *numConta){
    char verificarSenha[20];
    float sacar;
    for(int i=0;i<10;i++){
        if(listaContas[i].isVazio != 0){
            if(strcmp(listaContas[i].numeroConta, numConta) == 0){
                setbuf(stdin, NULL);
                printf("Digite sua senha para verificar: ");
                gets(verificarSenha);
                if(strcmp(listaContas[i].senha, verificarSenha) == 0){
                    setbuf(stdin, NULL);
                    printf("Digite quanto quer sacar: ");
                    scanf("%f", &sacar);
                    listaContas[i].saldo -= sacar;
                }
            }
        }
    }
}

void excluirConta(char *numConta){
    char verificarSenha[20];
    int opcao = 1;
    for(int i=0;i<10;i++){
        if(listaContas[i].isVazio != 0){
            if(strcmp(listaContas[i].numeroConta, numConta) == 0){
                setbuf(stdin, NULL);
                printf("Digite sua senha para verificar: ");
                gets(verificarSenha);
                if(strcmp(listaContas[i].senha, verificarSenha) == 0){
                    printf("Deseja mesmo excluir a conta? 0 para SIM e 1 para NÃO: ");
                    scanf("%d", &opcao);
                    if(opcao == 0){
                        listaContas[i].isVazio = 0;
                        printf("Conta excluida com sucesso!");
                    }
                }
            }
        }
    }
}

void menu(){
    printf("-----OPÇÕES-----\n");
    printf("1 -> Criar conta\n2 -> Consultar Saldo");
    printf("\n3 -> Depositar\n4 -> Sacar");
    printf("\n5 -> Excluir Conta\n6 -> Sair programa");
}