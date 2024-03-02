"""
#1. Ler dois números inteiros e imprimir o valor que é maior.
Evolução: Logo após testar somente o maior, incremente ainda mais o código
testando as possibilidades de igualdade e imprimindo se são iguais ou nao e quem é o maior e menor.
"""
def maior():
    print("\nMaior ou Menor")
    x = input("Digite um numero:")
    y = input("Digite outro numero:")

    if x > y:
        print(x,"e maior que ",y)
    elif y > x:
        print(y,"e maior que ",x)
    else:
        print(x," e ",y," sao iguais")


""" #2. Ler um número e imprimir se ele é par ou ímpar.
#Observação: Utilizar o resto (%) para tal."""

def par_ou_impar():
    print("\nPar ou Impar")
    x = int(input("Digite um número:"))
    if x % 2 == 0:
        print(x,"e par")
    else:
        print(x,"e impar")

"""
#3. Ler um número correspondente ao dia da semana e imprimir o dia da semanacorrespondente.
#Exemplo: 1 é Domingo 
"""

def dia_semana():
    print("\nDia da Semana")
    x = input("Digite um numero de 1 a 7 correspondente ao dia da semana:")
    if x == 1:
        print("Domingo")
    elif x == 2:
        print("Segunda-Feira")
    elif x == 3:
        print("Terca-Feira")
    elif x == 4:
        print("Quarta-Feira")
    elif x == 5:
        print("Quinta-Feira")
    elif x == 6:
        print("Sexta-Feira")
    elif x == 7:
        print("Sabado")
    else:
        print(x," nao corresponde a um dia da semana")

maior()
par_ou_impar()
dia_semana()