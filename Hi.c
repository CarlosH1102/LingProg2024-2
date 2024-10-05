#include <stdio.h>
#include <stdlib.h>

        void main (){
            int x=0; //Criando uma variavel inteira
     printf("Valor de x: %d\n", x);
     x++;  //Incrementando x em uma unidade
     printf("Valor de x: %d\n ", x);
     float y = 12.345678; //Criando uma variavel real
     printf("Valor de y: %f\n", y);
     // Imprimindo valor de y com duas casas
     printf("Valor de y: %.2f\n", y); //.2f utilizado para imprimir resultado com 2 casas decimais
     char sexo = 'M';   //Váriavel que aceita um caractere (Sempre entre ' ' não " ")
     printf("Sexo: %c\n", sexo); 
     //Criando uma variavel String (Texto)
     char nome[30] = "Joao";
     printf("Nome: %s\n", nome);
     //Imprimindo a primeira letra do nome
     printf(" Primeira Letra: %c\n", nome[0]);
     printf(" Hi Mundo");
        }