#include <stdio.h>
    
        //Inicio do desafio super trunfo 
    
    int main (){                      //variaveis
        char estado[100];
        char estado2[100];
        char cidade[100];
        char cidade2[100];
        int codigo, numPT, resultado,resultado2, maior, menor;
        int codigo2, numPT2;
        float populacao, pib, area, densidade, densidade2;
        float populacao2, pib2, area2;

        printf("**Bem vindo ao jogo super trunfo dos estados!!**\n");
        printf("O jogo é simples, a carta que tiver maiores atributos, VENCE!Porém...\n");
        printf("EXCETO POR UMA REGRA! A que tiver MENOR valor em densidade populacional, VENCE!\n");
        printf("Dito isso, digite o nome da cidade da primeira carta:");
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
        scanf("%f", &pib);
        printf("E por fim, a quantidade de pontos turísticos:");
        scanf("%d", &numPT);
        printf("Vamos digitar os valores da carta do 2º jogador!!");
        //-------------------- 2º jogador --------------------------
        printf("Digite o nome da cidade da segunda carta:");
        scanf("%s", &cidade2);
        printf("E agora o código:");
        scanf("%d", &codigo2);
        printf("Esdado da cidade que escolheu:");
        scanf("%s", &estado2);
        printf("Digite o número da população da sua cidade:");
        scanf("%f", &populacao2);
        printf("O tamanho da área dela:");
        scanf("%f", &area2);
        printf("Valor do PIB dela:");
        scanf("%f", &pib2);
        printf("E por fim, a quantidade de pontos turísticos:");
        scanf("%d", &numPT2);

        numPT > numPT2 ? (maior = numPT) : (maior = numPT2);
        pib > pib2 ? (maior = pib) : (maior = pib2);
        area > area2 ? (maior = area) : (maior = area2);
        populacao > populacao2 ? (maior = populacao) : (maior = populacao2);
 

        if (numPT > numPT2)
        {
          printf("A carta com mais pontos turísticos é %d\n",numPT);
        } else {
          printf("A carta com mais pontos turísticos é %d\n",numPT2);
        }
         if (pib > pib2)
        {
          printf("A carta com mais números no pib é %d\n",numPT);
        } else {
          printf("A carta com mais números no pib é %d\n",numPT2);
        }
         if (area > area2)
        {
          printf("A carta com a maior area é %.2f\n",area);
        } else {
          printf("A carta com a maior area é %.2f\n",area2);
        }
         if (populacao > populacao2)
        {
          printf("A carta com mais números em população é %.2f\n",populacao);
        } else {
          printf("A carta com mais números em população é %.2f\n",populacao2);
        }

        densidade = (area / populacao);
        densidade2 = (area2 / populacao2);
        resultado = (numPT > numPT2) ? 1 :0;
        resultado = (pib > pib2) ? 1 :0;
        resultado = (area > area2) ? 1 :0;
        resultado = (populacao > populacao2) ? 1 :0;
        resultado2 = densidade < densidade2 ? 1 : 0;

        if (resultado == 1)
        {
          printf("A carta do jogador número um VENCE!");
        } else if (resultado ==0) 
        {
          printf("A carta do jogador número dois VENCE!");
        } else (resultado2 == 1);
        {
          printf("A carta de densidade menor VENCE!");
        }
        
      return 0;
    }
