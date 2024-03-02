#include <stdio.h>
#include <string.h>

/*  1. Ao analisar o cloro da piscina de minha casa verifiquei que ela está sem cloro.
Desenvolva um algoritmo que leia a quantidade de metros cúbicos de água da
piscina e informe a quantidade de cloro que tenho que colocar na piscina.
Observação: a proporção de cloro a ser inserido é de 14 gramas a cada 1000 litros de água. */

void cloro(){
    double qtdagua,qtdcloro;
    printf("Calculo de Cloro");
    printf("\nInforme a quantidade de metros cubicos de agua da piscina:");
    scanf("%lf",&qtdagua);
    qtdcloro = (qtdagua/1000) * 14;
    printf("Voce precisa adicionar %.2lf gramas de cloro na piscina.\n",qtdcloro);
}

/* 2. Os professores Gerson e Athânio desejam ir assistir ao jogo entre Flamengo e Altos
em Teresina pela copa do Brasil 2022, para tal desenvolva um algoritmo que calcule
a quantidade de litros de combustível gasta em uma viagem. Vamos considerar a
utilização do automóvel do professor Gerson que faz 12Km por litro. Para o cálculo,
o usuário deve fornecer o tempo gasto na viagem e a velocidade média durante ela.
Desta forma, será possível obter a distância percorrida com a fórmula DISTANCIA =
TEMPO * VELOCIDADE. Tendo o valor da distância, basta calcular a quantidade de
litros de combustível utilizada na viagem com a fórmula: LITROS_USADOS =
DISTÂNCIA / 12. O algoritmo deve apresentar os valores da velocidade média,
tempo gasto na viagem, a distância percorrida e a quantidade de litros utilizada na
viagem. */

void viagem(){
   int tmp_viagem,vel_media,distancia,lt_usados;
    printf("Viagem\nInforme o tempo da viagem:");
    scanf("%d",&tmp_viagem);
    printf("Informe a velocidade media durante a viagem:");
    scanf("%d",&vel_media);
    distancia = tmp_viagem * vel_media;
    lt_usados = distancia/12;
    printf("A distancia percorrida foi de %dKm",distancia);
    printf("\nA velocidade media foi de %d Km/h\nO tempo gasto %dh\nE a quantidade de litros usados: %dL",vel_media,tmp_viagem,lt_usados);
}

/* 3. Faça um algoritmo que ao leia o consumo de água de sua residência mostre o valor
a ser pago. Observação: Tabela real de valores cobrados pela ages pisa em 2022. */

void consumo_agua(){
    int m_cubicos;
    double vlr_conta;
    printf("Calculo Consumo de Agua");
    printf("\nInforme a quantidade de metros cubicos de agua que voce consome durante o mes:");
    scanf("%d",&m_cubicos);

    if(m_cubicos <= 10){
        vlr_conta = 36.21;
        printf("O valor da sua conta de agua e de %.2lf\n", vlr_conta);
    }else if(m_cubicos <= 15){
        vlr_conta = 36.21+(6.75 * m_cubicos);
        printf("O valor da sua conta de agua e de %.2lf\n", vlr_conta);
    }else if(m_cubicos <= 20){
        vlr_conta = 69.96+(7.42 * m_cubicos);
        printf("O valor da sua conta de agua e de %.2lf\n", vlr_conta);
    }else if(m_cubicos <= 25){
        vlr_conta = 107.06+(8.10 * m_cubicos);
        printf("O valor da sua conta de agua e de %.2lf\n", vlr_conta);
    }else if(m_cubicos <= 35){
        vlr_conta = 147.56+(12.81 * m_cubicos);
        printf("O valor da sua conta de agua e de %.2lf\n", vlr_conta);
    } else{
        vlr_conta = 275.66+(13.98 * m_cubicos);
        printf("O valor da sua conta de agua e de %.2lf\n", vlr_conta);
    }
}

/* 4. Um hotel cobra R$ 120,00 a diária e mais uma taxa de serviços. A taxa de serviços é de:
• R$ 5.50 por diária, se o número de diárias for maior que 15;
• R$ 6.00 por diária, se o número de diárias for igual a 15;
• R$ 8.00 por diária, se o número de diárias for menor que 15
Construa um algoritmo que mostre o nome e o total da conta de um cliente.  */

void hotel(){
    double diaria = 120.00, tx_servico,vlr_total;
    int dias;
    char nome[20];

    printf("Sistema Hotel");
    printf("\nInforme o nome do cliente:");
    scanf(" %s",nome);
    printf("Informe a quantidade de dias que o %s ficou hospedado:",nome);
    scanf("%d", &dias);

    if(dias < 15){
        tx_servico = 8.00;
        vlr_total = (diaria * dias)+(dias * tx_servico);
        printf("O valor a ser pago pelo cliente %s referente a %d de dias hospedado e de %.2f",nome,dias,vlr_total);
    }else if(dias == 15){
        tx_servico = 6.00;
        vlr_total = (diaria * dias)+(dias * tx_servico);
        printf("O valor a ser pago pelo cliente %s referente a %d de dias hospedado e de %.2f",nome,dias,vlr_total);
    }else if(dias > 15){
        tx_servico = 5.50;
        vlr_total = (diaria * dias)+(dias * tx_servico);
        printf("O valor a ser pago pelo cliente %s referente a %d de dias hospedado e de %.2",nome,dias,vlr_total);
    } else{
        printf("Nao foi possivel realizar o calculo da estadia");
    }
}

/* 5. Crie um algoritmo que leia o nome, a altura e o peso de duas pessoas e apresente
o nome e peso da mais pesada e o nome e altura da mais alta. */
void peso_altura() {
    char nome1[30], nome2[30],mais_pesada[30], mais_alta[30];;
    double peso1, peso2, alt1, alt2;

    printf("Peso e Altura\n");

    for (int i = 1; i < 3; ++i) {
        printf("Informe o nome da %d pessoa:", i);
        scanf(" %s", (i == 1) ? nome1 : nome2);
        printf("Informe o peso:");
        scanf("%lf", (i == 1) ? &peso1 : &peso2);
        printf("Informe a altura:");
        scanf("%lf", (i == 1) ? &alt1 : &alt2);
    }

    /* Explicaao do loop for a cima:
    O loop for é usado para solicitar informações sobre duas pessoas. Ele é executado duas vezes (quando i é 1 e 2).
    Dentro do loop, o programa solicita o nome, peso e altura da pessoa correspondente (nome1, peso1, alt1) se i for 1, ou da segunda pessoa (nome2, peso2, alt2) se i for 2.
    A estrutura (i == 1) ? nome1 : nome2 é uma expressão condicional (operador ternário) que escolhe nome1 se i for 1 e nome2 se i for 2. Isso é aplicado da mesma forma para peso e altura.*/

    if (peso1 > peso2) {
        strcpy(mais_pesada, nome1);
    } else {
        strcpy(mais_pesada, nome2);
    }

    if (alt1 > alt2) {
        strcpy(mais_alta, nome1);
    } else {
        strcpy(mais_alta, nome2);
    }

    printf("\nA pessoa mais pesada e: %s, Peso: %.2lf\n", mais_pesada, (peso1 > peso2) ? peso1 : peso2);
    printf("A pessoa mais alta e: %s, Altura: %.2lf\n", mais_alta, (alt1 > alt2) ? alt1 : alt2);

    /* Explicação do print a cima
    Essas linhas imprimem as informações da pessoa mais pesada e mais alta com base nos dados coletados no loop anterior.
    O texto %s será substituído pelo nome da pessoa mais pesada e mais alta.
    O texto %.2lf indica que o valor do peso ou altura será exibido com até dois dígitos decimais.
    As expressões (peso1 > peso2) ? peso1 : peso2 e (alt1 > alt2) ? alt1 : alt2 são operadores ternários que escolhem o valor de peso1 ou peso2, e alt1 ou alt2, respectivamente, dependendo de qual é maior. */
}



/* 6. Faça um algoritmo que calcule e escreva o valor de S onde:
    S = 1/1 - 2/4 + 3/9 - 4/16 + 5/25 - 6/36 ..... - 10/100 */

void calcular_s() {
    int numerador, denominador;
    double S = 0.0;

    printf("S: ");
    for (int i = 1; i <= 10; ++i) {
        numerador = i;
        denominador = i * i;

        if (i % 2 == 0) {
            printf("- %d/%d ", numerador, denominador);
            S -= (double)numerador / denominador;
        } else {
            if (i != 1) printf("+ ");
            printf("%d/%d ", numerador, denominador);
            S += (double)numerador / denominador;
        }
    }
    printf("\nO valor de S e: %.2lf\n", S);
}

/* 7. Para uma turma de 5 alunos, construa um algoritmo que determine:
    a. A idade média dos alunos com menos de 1,70 m de altura;
    b. A altura média dos alunos com mais de 20 anos.  */

void alunos(){
    int i, idade, idade170 = 0, qntIdade170 = 0, qntAltura20 = 0;
    double idadeMedia = 0.0, alturaMedia = 0.0, altura, altura20 = 0.0;

    for (i = 1; i <= 5; i++) {
        printf("Qual sua idade?");
        scanf("%d", &idade);

        printf("Qual sua altura?");
        scanf("%lf", &altura);

        if (altura < 1.70) {
            idade170 += idade;
            qntIdade170++;
        }

        if (idade > 20) {
            altura20 += altura;
            qntAltura20++;
        }
    }

    if (qntIdade170 > 0) {
        idadeMedia = (double)idade170 / qntIdade170;
        printf("A idade media dos alunos com menos de 1,70m de altura e de: %.2lf anos\n", idadeMedia);
    } else {
        printf("Nao ha alunos com menos de 1,70m de altura na turma.\n");
    }

    if (qntAltura20 > 0) {
        alturaMedia = altura20 / qntAltura20;
        printf("A altura media dos alunos com mais de 20 anos e de: %.2lf metros\n", alturaMedia);
    } else {
        printf("Nao ha alunos com mais de 20 anos na turma.\n");
    }
}


/*  */
int main(){
    return 0;
}
