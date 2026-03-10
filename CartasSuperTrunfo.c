#include <stdio.h>

int main (){

//game super trunfo

//area de definiçao das variaveis

char estado1, estado2;
char codigo_da_carta1 [50], codigo_da_carta2 [50];
char nome_da_cidade1 [50], nome_da_cidade2 [50];
int populacao1, populacao2;
float area_em_km1, area_em_km2;
float PIB1, PIB2;
int numeros_de_pontos_turisticos1, numeros_de_pontos_turisticos2;

//cadastro da carta 1

printf("CADASTRO DA CARTA 1 \n");

printf("UM ESTADO DA LETRA DE A a H REPRESENTANDO UM DOS 8 ESTADOS: \n");
scanf(" %c", &estado1);

printf("CODIGO DA CARTA: \n");
scanf(" %s", codigo_da_carta1);

printf("NOME DA CIDADE: \n");
scanf(" %s", nome_da_cidade1);

printf("POPULACAO: \n");
scanf(" %d", &populacao1);

printf("AREA EM KM: \n");
scanf(" %f", &area_em_km1);

printf("PIB: \n");
scanf(" %f", &PIB1);

printf("NUMERO DE PONTOS TURISTICOS: \n");
scanf(" %d", &numeros_de_pontos_turisticos1);
printf("CARTA REGISTRADA!");

printf("\n");
printf("\n");

//cadastro da carta 2

printf("AGORA VAMOS CADASTRAR A CARTA 2! \n");

printf("\n");

printf("UM ESTADO DA LETRA DE A a H REPRESENTANDO UM DOS 8 ESTADOS: \n");
scanf(" %c", &estado2);

printf("CODIGO DA CARTA: \n");
scanf(" %s", codigo_da_carta2);

printf("NOME DA CIDADE: \n");
scanf(" %s", nome_da_cidade2);

printf("POPULACAO: \n");
scanf(" %d", &populacao2);

printf("AREA EM KM: \n");
scanf(" %f", &area_em_km2);

printf("PIB: \n");
scanf(" %f", &PIB2);

printf("NUMERO DE PONTOS TURISTICOS: \n");
scanf(" %d", &numeros_de_pontos_turisticos2);

printf("\n");

printf("CARTA REGISTRADA! \n");

printf("\n"); //coloquei esse contra barra pra separar as linhas de baixo e de cima, pra nao ficar tudo grudado

// area das cartas impressas

printf("AS SUAS CARTAS FORAM: \n");
printf("CARTA 1 \n");
printf("ESTADO: %c \n", estado1);
printf("CODIGO: %s \n", codigo_da_carta1);
printf("NOME DA CIDADE: %s \n", nome_da_cidade1);
printf("POPULACAO: %d \n", populacao1);
printf("AREA EM KM: %f \n", area_em_km1);
printf("PIB: %f \n", PIB1);
printf("NUMEROS DE PONTOS TURISTICOS: %d \n", numeros_de_pontos_turisticos1);

printf("\n");

printf("CARTA 2 \n");
printf("ESTADO: %c \n", estado2);
printf("CODIGO: %s \n", codigo_da_carta2);
printf("NOME DA CIDADE: %s \n", nome_da_cidade2);
printf("POPULACAO: %d \n", populacao2);
printf("AREA EM KM: %f \n", area_em_km2);
printf("PIB: %f \n", PIB2);
printf("NUMEROS DE PONTOS TURISTICOS: %d \n", numeros_de_pontos_turisticos2);



//ah, outra coisa, to fazendo tudo pelo pelo visual studio e trazendo pra cá.
return 0;
}