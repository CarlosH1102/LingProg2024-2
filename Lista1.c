#include <stdio.h>
#include <stdlib.h>

/*
Exercícios sobre os comandos básicos em C
*/

//1. Faça um programa que imprima o seu nome.
void q1() {
    printf("João Paulo!");
}

//2. Faça um programa que imprima o produto dos valores 30 e 27.
void q2 (){
printf("30*27 = %d\n", 30*27);
}
//3. Faça um programa que imprima a média aritmética entre os números 5, 8, 12.
void q3(){
    float media = (5+8+12)/3.0;
    printf("Media de 5,8,12 é igual a %f\n", media);
}
//4. Faça um programa que leia e imprima um número inteiro.
void q4() {
   int num = 0;
    printf(" Digite um número inteiro: ");
    scanf("%d", &num);
    printf(" O valor digitado foi %d\n", num);
}

//5. Faça um programa que leia dois números reais e os imprima.
  void q5(){
    float num =0;
    float num2=0;
    printf(" Digite um numero real: ");
    scanf("%f", &num);
    printf(" Digite o segundo numero real: ");
    scanf("%f", &num2);
    printf(" O Valor digitado foi %.2f %.2f", num, num2);
  }
//6. Faça um programa que leia um número inteiro e imprima o seu
//   antecessor e o seu sucessor.
void q6(){
    int num,sucessor,antecessor =0;
    printf(" Digite um numero inteiro: ");
    scanf("%d", &num);
    antecessor= num-1;
    sucessor= num+1;
    printf(" O numero antecessor é %d\n e o sucessor é %d\n", antecessor, sucessor);

}

//7. Faça um programa que leia o nome o endereço e o telefone de
//   um cliente e ao final, imprima esses dados.
void q7(){
    char nome [50],end[50],telefone [14];
    printf(" Digite o seu nome ");
    scanf(" %50[^\n]", nome);
    printf(" Digite Seu endereço: ");
    scanf(" %50[^\n]", end);
    printf(" Digite o seu numero de telefone: ");
    scanf(" %14[^\n]", telefone);
    printf(" Dados do cliente %s nome: \n%s rua: \n%s telefone: \n", nome,end,telefone);

}

//8. Faça um programa que leia dois números inteiros e imprima a
//   subtração deles.
void q8(){
    int num,num2,sub=0;
    printf(" Digite um numero inteiro ");
    scanf("%d", &num);
    printf(" Digite outro numero inteiro ");
    scanf("%d", &num2);
    sub= num-num2;
    printf(" subtração dos numeros é: %d\n ", sub);

}

//9. Faça um programa que leia um número real e imprima ¼ deste número.
void q9(){
    float num=0;
    printf(" Digite um numero real: ");
    scanf("%f", &num);
    num= num/4;
    printf(" o Valor é: %.2f", num);

}

//10. Faça um programa que leia três números reais e calcule a
//    média aritmética destes números. Ao final, o programa deve
//    imprimir o resultado do cálculo.
void q10(){
    float num,num2,num3,media=0;
    printf(" Digite um numero: ");
    scanf("%f", &num);
    printf(" Digite o segundo numero: ");
    scanf("%f", &num2);
    printf(" Digite o terceiro numero: ");
    scanf("%f", &num3);
    media= (num+num2+num3)/3.0;
    printf(" A média Aritmetrica é: %.2f", media);

}

//11. Faça um programa que leia dois números reais e calcule as
//    quatro operações básicas entre estes dois números, adição,
//    subtração,multiplicação e divisão. Ao final, o programa
//    deve imprimir os resultados dos cálculos.
void q11(){
    float num,num2,add=0,sub=0,mult=0,div=0;
    printf("Digite um numero: ");
    scanf("%f", &num);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);
    add= (num+num2);
    sub= (num-num2);
    mult=(num*num2);
    div= (num/num2);
    printf("O resultado dos calculos é:  \n%.2f\n %.2f\n %.2f\n %.2f\n ", add,sub,mult,div);



}

//12. Faça um programa que leia um número real e calcule o
//    quadrado deste número. Ao final, o programa deve
//    imprimir o resultado do cálculo.
void q12 (){
    float num,quad=0;
    printf("Digite um numero: ");
    scanf("%f", &num);
    quad= (num*num);
    printf("O quadrado deste numero é: %.2f\n ",quad);

}

//13. Faça um programa que leia o saldo de uma conta poupança e
//    imprima o novo saldo, considerando um reajuste de 2%.
void q13(){
    float sald,rea=0;
    printf("Digite seu saldo: ");
    scanf("%f", &sald);
    rea= (sald*1.02);
    printf(" O Novo saldo sera: %.2f", rea);
}
//14. Faça um programa que leia a base e a altura de um retângulo
//    e imprima o perímetro (base*2 + altura*2) e a área (base * altura).
void q14(){
    float base,alt,perimetro,area;
    printf("Digite a Base e a Altura: ");
    scanf("%f %f", &base, &alt);
    perimetro=(base*2+alt*2);
    area= (base*alt);
    printf(" O perimetro sera: %.2f\n a base sera: %.2f\n", perimetro, area);
}

//15. Faça um programa que leia o valor de um produto, o percentual
//    do desconto desejado e imprima o valor do desconto e o valor
//    do produto subtraindo o desconto.

//16. Faça um programa que calcule o reajuste do salário de um
//    funcionário. Para isso, o programa deverá ler o salário atual
//    do funcionário e ler o percentual de reajuste. Ao final imprimir
//    o valor do novo salário.

//17. Faça um programa que calcule a conversão entre graus centígrados
//    e Fahrenheit. Para isso, leia o valor em centígrados e calcule
//    com base na fórmula a seguir. Após calcular o programa deve
//    imprimir o resultado da conversão.
//    F = (9 x C +160) / 5

//18. Faça um programa que calcule a quantidade de litros de combustível
//    consumidos em uma viagem, sabendo-se que o carro tem autonomia de
//    12 km por litro de combustível. O programa deverá ler o tempo
//    decorrido na viagem e a velocidade média e aplicar as fórmulas:
//    D = T x V       L = D / 12
//    Em que:
//    • D = Distância percorrida em horas
//    • T = Tempo
//    • V = Velocidade média
//    • L = Litros de combustível consumidos
//    Ao final, o programa deverá imprimir a distância percorrida e a
//    quantidade de litros consumidos na viagem.

//19. Faça um programa que calcule o valor de uma prestação em atraso.
//    Para isso, o programa deve ler o valor da prestação vencida, a
//    taxa periódica de juros e o período de atraso. Ao final, o
//    programa deve imprimir o valor da prestação atrasada, o período
//    de atraso, os juros que serão cobrados pelo período de atraso, o
//    valor da prestação acrescido dos juros. Considere juros simples.

//20. Faça um programa que efetue a apresentação do valor da conversão
//    em real (R$) de um valor lido em dólar (US$). Para isso, será
//    necessário também ler o valor da cotação do dólar.

int main() {
    q14();
    return EXIT_SUCCESS;
}