#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado1,estado2;
    char codigo_de_cartas1,codigo_de_cartas2;
    char nome_da_cidade1,nome_da_cidade2;
    unsigned int população1,população2;
    float area1,area2;
    float pib1,pib2;
    int pontos_turisticos1,pontos_turisticos2;
//Nível Aventureiro
    float densidadepulacional1,densidadepulacional2;
    float pibpercapita1,pibpercapita2;
//Nível Mestre
    float superpoder1,superpoder2;
    
    //informações das cartas
    
    //primeira carta

    printf("coloque o estado da primeira cartas: \n");
    scanf("%s",estado1);

    printf("coloque o codigo da carta: \n");
    scanf("%s",codigo_de_cartas1);

    printf("coloque o nome da cidade: \n");
    scanf("%s",nome_da_cidade1);

    printf("qual é a população: \n");
    scanf("%u",&população1);

    printf("qual é a area: \n");
    scanf("%f",&area1);

    printf("digite o PIB: \n");
    scanf("%f",&pib1);

    printf("digite a quntidade de pontos turisticos: \n");
    scanf("%d",&pontos_turisticos1);
   
    //segunda carta
    
    printf("\ncoloque o estado da segunda cartas: \n");
    scanf("%s",estado2);

    printf("coloque o codigo da carta: \n");
    scanf("%s",codigo_de_cartas2);

    printf("coloque o nome da cidade: \n");
    scanf("%s",nome_da_cidade2);

    printf("qual é a população: \n");
    scanf("%u",&população2);

    printf("qual é a area: \n");
    scanf("%f",&area2);

    printf("digite o PIB: \n");
    scanf("%f",&pib2);

    printf("digite a quntidade de pontos turisticos: \n");
    scanf("%d",&pontos_turisticos2);

    //calculo para saber se a densidade,o PIB per capita e o super poder
   
    //primeira carta

    densidadepulacional1=(float)população1/area1;
    pibpercapita1=(float)população1/pib1;
    superpoder1=(float)população1+area1+pib1+pontos_turisticos1+(-densidadepulacional1)+pibpercapita1;

    //segunda carta

    densidadepulacional2=(float)população2/area2;
    pibpercapita2=(float)população2/pib2;
    superpoder2=(float)população2+area2+pib2+pontos_turisticos2+(-densidadepulacional2)+pibpercapita2;

    //todas as informações
    
    //primeira carta

    printf("Estado: %s\n",estado1);
    printf("Codigo: %s\n",codigo_de_cartas1);
    printf("Nome da cidade: %s\n",nome_da_cidade1);
    printf("População: %u\n",população1);
    printf("Área: %.3fKM²\n",area1);
    printf("PIB: %.3fbilhões de reais\n",pib1);
    printf("Pontos turisticos: %d\n",pontos_turisticos1);
    rintf("Densidade Populacional:%.3f hab/KM²\n",densidadepulacional1);
    printf("PIB per capita:%.3freais\n",pibpercapita1);
    printf("o nivel de super poder:%f\n",superpoder1);
    
    //segunda carta
    
    printf("\nEstado: %s\n",estado2);
    printf("Codigo: %s\n",codigo_de_cartas2);
    printf("Nome da cidade: %s\n",nome_da_cidade2);
    printf("População: %u\n",população2);
    printf("Área: %.3fKM²\n",area2);
    printf("PIB: %.3fbilhões de reais\n",pib2);
    printf("Pontos turisticos: %d\n",pontos_turisticos2);
    printf("Densidade Populacional:%.3f hab/KM²\n",densidadepulacional2);
    printf("PIB per capita:%.3freais\n",pibpercapita2);
    printf("o nivel de super poder:%f\n",superpoder2);
    
    //parte do nivel mestre para fazer as conparações

printf("\n                TUTORIAL DA COMPARAÇÃO                   \n");
    printf("\no resultado _1_ é verdadeiro e o resultado _0_é falso\n");

    char comfimação[3];
    printf("\ndigite qualquer coisa e depois pressione enter para fazer a comparação \n");
    scanf("%s",comfimação);    

    printf("\ncomparando 1ºcarta vence a 2ºcarta em população?:%d\n",população1>população2);
    printf("comparando 1ºcarta vence a 2ºcarta em area?:%d\n",area1>area2);
    printf("comparando 1ºcarta vence a 2ºcarta em PIB?:%d\n",pib1>pib2);
    printf("comparando 1ºcarta vence a 2ºcarta em ponto turisticos?:%d\n",pontos_turisticos1>pontos_turisticos2);
    printf("comparando 1ºcarta vence a 2ºcarta em densidade populacional?:%d\n",(-densidadepulacional1)<(-densidadepulacional2));
    printf("comparando 1ºcarta vence a 2ºcarta em PIB per capita?:%d\n",pibpercapita1>pibpercapita2);
    printf("comparando 1ºcarta vence a 2ºcarta em super poder?:%d\n",superpoder1>superpoder2);
    return 0;
}
