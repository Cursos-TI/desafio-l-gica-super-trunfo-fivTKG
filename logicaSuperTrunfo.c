#include <stdio.h>
    
        //Inicio do desafio super trunfo 
    
    int main (){                      //variaveis
        char estado[100];
        char cidade[100];
        int codigo, numPT, resultado;
        float populacao, pib, area, densidade;

        printf("**Bem vindo ao jogo super trunfo dos estados!!**\n");
        printf("O jogo é simples, a carta que tiver maiores atributos, VENCE!Porém...\n");
        printf("EXCETO POR UMA REGRA! A que tiver MENOR valor em densidade populacional, VENCE!\n");
        printf("Dito isso, digite o nome da primeira carta:");
        scanf("%s", &cidade);
        printf("E agora o código:");
        scanf("%d", &codigo);
        printf("Esdado da cidade que escolheu:");
        scanf("%s", &estado);
        printf("Digite o número da população da sua cidade:");
        scanf("%f", &populacao);
        printf("O tamanho da área dela:");
        scanf("%f", &area);
        printf("Valor do PIB dela:");
        scanf("%f", pib);
        printf("E por fim, a quantidade de pontos turísticos:");
        scanf("%d", &numPT);
        printf("Vamos digitar os valores da carta do 2º jogador!!");
        //-------------------- 2º jogador --------------------------
        printf("Digite o nome da segunda carta:");
        scanf("%s", &cidade);
        printf("E agora o código:");
        scanf("%d", &codigo);
        printf("Esdado da cidade que escolheu:");
        scanf("%s", &estado);
        printf("Digite o número da população da sua cidade:");
        scanf("%f", &populacao);
        printf("O tamanho da área dela:");
        scanf("%f", &area);
        printf("Valor do PIB dela:");
        scanf("%f", pib);
        printf("E por fim, a quantidade de pontos turísticos:");
        scanf("%d", &numPT);



      return 0;
    }
