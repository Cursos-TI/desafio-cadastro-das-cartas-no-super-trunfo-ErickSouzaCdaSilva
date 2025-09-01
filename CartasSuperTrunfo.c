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
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
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

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    //todas as informações
    
    //primeira carta

    printf("Estado: %s\n",estado1);
    printf("Codigo: %s\n",codigo_de_cartas1);
    printf("Nome da cidade: %s\n",nome_da_cidade1);
    printf("População: %u\n",população1);
    printf("Área: %.3fKM²\n",area1);
    printf("PIB: %.3fbilhões de reais\n",pib1);
    printf("Pontos turisticos: %d\n",pontos_turisticos1);

    //segunda carta
    
    printf("\nEstado: %s\n",estado2);
    printf("Codigo: %s\n",codigo_de_cartas2);
    printf("Nome da cidade: %s\n",nome_da_cidade2);
    printf("População: %u\n",população2);
    printf("Área: %.3fKM²\n",area2);
    printf("PIB: %.3fbilhões de reais\n",pib2);
    printf("Pontos turisticos: %d\n",pontos_turisticos2);
    return 0;
}
