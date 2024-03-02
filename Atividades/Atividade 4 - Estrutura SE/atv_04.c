#include <stdio.h>

/* #1. Desenvolva um algoritmo básico que leia uma temperatura em Celsius e retorne o
  valor correspondente em fahrenheit.
  Formula: F = 1,8C + 32 */
void temperatura(){
    double x,f;
    printf("Temperatura");
    printf("\nDigite a temeperatura em celcius:");
    scanf("%lf",&x);
    f = (1.8 * x)+32;
    printf("%lf em ceucius e equivalente a %lf em fahrenheit",x,f);
}

/* 2. Desenvolva um algoritmo que leia o peso e altura de uma pessoa e calcule o IMC
correspondente desta pessoa.
Formula: IMC = peso/(altura * altura) */

void imc() {
    double p = 0, a = 0, imc,pi;

    printf("\nIMC");
    printf("\nDigite seu peso:");
    scanf("%lf", &p);

    printf("Digite sua altura:");
    scanf("%lf", &a);

    imc = p / (a * a);
    printf("O seu IMC e %lf", imc);
}

/* 3. Escreva um algoritmo que leia o sexo de uma pessoa (M ou F) e imprimir uma
mensagem informando se é “Homem” ou “Mulher”. */
int sexo(){
    char s;
    printf("Digite M para Masculino ou F para Feminino:");
    scanf(" %c",&s);
    if(s == 'M' || s == 'm'){
        printf("Masculino");
        return 1;
    } else if (s == 'F' || s == 'f'){
        printf("Feminino");
        return 2;
    } else{
        printf("%c nao corresponde a um valor solicitado",s);
        return 3;
    }
}

/* 4. Complemente a questão 3 informando também o peso ideal.
Para sexo masculino: altura(cm) * 0,95 – 95
Para sexo feminino: altura(cm) * 0,85 - 85  */
void peso_ideal(){
    double a = 0,ai;
    int s = sexo();
    if(s == 1){
        printf("\nDigite sua altura:");
        scanf("%lf",&a);
        ai = (a * 0.95) - 95;
        printf("\nSeu peso ideal e %lf",ai);
    } else if(s == 2){
        printf("\nDigite sua altura:");
        scanf("%lf",&a);
        ai = (a * 0.85) - 85;
        printf("\nSeu peso ideal e %lf",ai);
    }else{
        printf("\nNao foi possivel calcular seu peso");
    }
}

/* 5. Desenvolva um algoritmo que leia a idade de uma pessoa e determine a categoria
de jogador ela pertence.  */

void idade(){
    int i;
    printf("Digite sua idade:");
    scanf("%d",&i);
    if(i < 8 ){
        printf("Categoria Infantil");
    } else if(i >= 8 && i <= 15){
        printf("Categoria Juvenil");
    } else if ( i >= 16 && i <= 50){
        printf("Categoria Adulto");
    } else if(i > 50 ){
        printf("Categoria Senior");
    }else{
        printf("Valor incompativel");
    }
}

/* 6. Escreva um programa que mostre na tela a seguinte contagem:
Saída: 6 7 8 9 10 11 Acabou  */

void contagem_1(){
    for (int i = 6; i < 12; ++i) {
        printf("%d ",i);
    }
    printf("Acabou");
}

/* 7. Faça um algoritmo que mostre na tela a seguinte contagem:
Saída: 10 9 8 7 6 5 4 3 Acabou  */

void contagem_2(){
    for (int i = 10; i > 2; i--){
        printf("%d ",i);
    }
    printf("Acabou");
}


/* 8. Crie um algoritmo que leia o valor inicial, o valor final de uma contagem e seu
incremento, mostrando em seguida todos os valores no intervalo.
Ex: Entrada:  Digite o valor inicial: 3
Digite o valor final: 10
Digite seu incremento: 2
Saida:
Contagem: 3 5 7 9 Acabou */

void contagem_3() {
    int ini, fim, x;

    printf("Digite o valor inicial: ");
    scanf("%d", &ini);

    printf("Digite o valor final: ");
    scanf("%d", &fim);

    printf("Digite o valor do incremento/decremento: ");
    scanf("%d", &x);

    if (ini < fim) {
        for (int j = ini; j <= fim; j += x) {
            printf("%d ", j);
        }
    } else {
        for (int j = ini; j >= fim; j -= x) {
            printf("%d ", j);
        }
    }
    printf("Acabou\n");
}



int main(){
    temperatura();
    imc();
    sexo();
    peso_ideal();
    idade();
    contagem_1();
    contagem_2();
    contagem_3();
    return 0;
}
