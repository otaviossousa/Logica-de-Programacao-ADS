#include <stdio.h>

/* #1 Ler dois números inteiros e imprimir o valor que é maior.
Evolução: Logo após testar somente o maior, incremente ainda mais o código
testando as possibilidades de igualdade e imprimindo se são iguais ou nao e quem é o maior e menor.*/
void maior(){
    int x;
    int y;
    puts("Maior ou Menor");
    printf("Digite um numero:");
    scanf_s("%d",&x);
    printf("Digite outro numero:");
    scanf_s("%d",&y);

    if(x > y){
        printf("%d e maior que %d",x,y);
    }else if(y > x){
        printf("%d e maior que %d",y,x);
    }else{
        printf("%d e %d sao iguais",x,y);
    }
}

/* #2. Ler um número e imprimir se ele é par ou ímpar.
#Observação: Utilizar o resto (%) para tal.*/
void par_impar(){
    int x;
    puts("\nPar ou Impar");
    printf("Digite um numero:");
    scanf("%d",&x);
    if(x % 2 == 0){
        printf("%d e par",x);
    }else{
        printf("%d e impar",x);
    }
}

/* #3. Ler um número correspondente ao dia da semana e imprimir o dia da semanacorrespondente.
#Exemplo: 1 é Domingo */
void dia_da_semana(){
    int x;
    puts("\nDia da Semana");
    printf("Digite um numero de 1 a 7 correspondente aop dia da semana:");
    scanf("%d",&x);
    if(x == 1){
        printf("Domingo");
    }else if(x ==2){
        printf("Segunda-Feira");
    }else if(x ==3){
        printf("Terca-Feira");
    }else if(x ==4){
        printf("Quarta-Feira");
    }else if(x ==5){
        printf("Quinta-Feira");
    }else if(x ==6){
        printf("Sexta-Feira");
    }else if(x ==7){
        printf("Sabado");
    }else{
        printf("%d nao corresponde a um dia da semana",x);
    }
}

int main(){

    maior();
    par_impar();
    dia_da_semana();
}

