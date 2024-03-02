#include <stdio.h>

/*1. Crie uma tela que seja semelhante à da figura abaixo, leia a opção desejada e
imprima a opção que você escolheu.*/

void escolha(){
    int opt;
    printf("Ola, Tudo bem? Sou Iris, a assistente virtual do Vilar "
           "Hospital de Olhos, muito prazer!");
    printf("\nSobre qual assunto posso ajudar?"
           "\n\n1 - Agendamento\n2 - Cirurgia\n3 - Financeiro\n4 - Lentes de Contato\n5 - informacoes e Outros assuntos\n\ndigite o numero de uma das opcoes:");
    scanf("%d",&opt);
    switch (opt) {
        case 1:
            printf("Agendamento");
            break;
        case 2:
            printf("Cirurgia");
            break;
        case 3:
            printf("Financeiro");
            break;
        case 4:
            printf("Lentest de Contato");
            break;
        case 5:
            printf("informacoes e Outros assuntos");
            break;
        default:
            printf("Opcao inválida!");
            break;
    }
}



int main(){
    escolha();
    return 0;
}