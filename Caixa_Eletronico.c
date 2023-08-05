#include <stdio.h>
#include <stdlib.h>

int main() {
    float saldo = 0.0;
    int opcao;
    float valor;

    printf("------------------------------\n");
    printf("------------------------------\n");
    printf("---------BANCO FLEXXO---------\n");
    printf("------------------------------\n");
    printf("------------------------------\n");


    do {
        printf("1. Saque\n");
        printf("2. Depósito\n");
        printf("3. Extrato\n");
        printf("4. Sair\n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                system("clear");
                printf("Digite o valor do saque: ");
                scanf("%f", &valor);
                if (valor <= saldo) {
                    saldo -= valor;
                    system("clear");
                    printf("Saque realizado com sucesso.\n"); 
                    printf("Saldo restante: R$%.2f\n", saldo);
                } else {
                    system("clear");
                    printf("Saldo insuficiente.\n");
                    printf("Saldo em Conta: R$%.2f\n", saldo);
                }
                break;
            case 2:
                system("clear");
                printf("Digite o valor do depósito: ");
                scanf("%f", &valor);
                saldo += valor;
                system("clear");
                printf("Depósito realizado com sucesso. Saldo atual: R$%.2f\n", saldo);
                break;
            case 3:
                system("clear");
                printf("Saldo atual: R$%.2f\n", saldo);
                break;
            case 4:
                system("clear");
                printf("Obrigado por utilizar nosso caixa eletrônico!\n");
                break;
            default:
                system("clear");
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 4);

    return 0;
}
