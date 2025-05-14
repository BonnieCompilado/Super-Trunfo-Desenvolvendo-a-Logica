//Adicione uma biblioteca
#include <stdio.h>

//Insira o código principal
int main (){

//Insira as variáveis e as defina
        char estado1, codigo1[4], cidade1[50];
        int turistico1;
        unsigned long int populacao1;
        float area1, pib1, densidade1 = 0, percapita1 = 0, superpoder1;
    
        char estado2, codigo2[4], cidade2[50];
        int turistico2;
        unsigned long int populacao2;
        float area2, pib2, densidade2 = 0, percapita2 = 0, superpoder2;

        int atributoescolhido1, atributoescolhido2, opcao;

        float valor1_carta1 = 0, valor2_carta1 = 0, soma_carta1;
        float valor1_carta2 = 0, valor2_carta2 = 0, soma_carta2;
        
//Coloque as informações da primeira carta
        printf("Você está preenchendo as informações da PRIMEIRA carta!\n");
    
        printf("Digite a Inicial do Estado (A-H):\n");
        scanf (" %c", &estado1);
    
        printf("Digite o Código da Carta (ex: A01):\n");
        scanf("%3s", codigo1);
    
        printf("Digite o Nome da Cidade:\n");
        scanf("%s", cidade1);
    
        printf("Digite a População da Cidade:\n");
        scanf("%lu", &populacao1);
    
        printf("Digite a Área da Cidade(em km²):\n");
        scanf("%f", &area1);
    
        printf("Digite o PIB da Cidade:\n");
        scanf("%f", &pib1);
    
        printf("Digite o Número de Pontos Turísticos da Cidade:\n");
        scanf("%d", &turistico1);
    
//Coloque agora as informações da segunda carta
        printf("Você está preenchendo as informações da SEGUNDA carta!\n");
    
        printf("Digite a Inicial do Estado (A-H):\n");
        scanf(" %c", &estado2);
    
        printf("Digite o Código da Carta (Ex: A01):\n");
        scanf("%3s", codigo2);
    
        printf("Digite o Nome da Cidade:\n");
        scanf("%s", cidade2);
    
        printf("Digite a População da Cidade:\n");
        scanf("%lu", &populacao2);
    
        printf("Digite a Área da Cidade(em km²):\n");
        scanf("%f", &area2);
    
        printf("Digite o PIB da Cidade:\n");
        scanf("%f", &pib2);
    
        printf("Digite o Número de Pontos Turísticos da Cidade:\n");
        scanf("%d", &turistico2);

//Calculando densidade demográfica e PIB per Capita
        if (area1 > 0)
                densidade1 = (float) populacao1 / area1;
        else
                densidade1 = 0;

        if (populacao1 > 0)
                percapita1 = (pib1 * 1000000000.0) / (float) populacao1;
        else 
                percapita1 = 0;
                
        if (area2 > 0)
                densidade2 = (float) populacao2 / area2;
        else
                densidade2 = 0;

        if (populacao2 > 0)
                percapita2 = (pib2 * 1000000000.0) / (float) populacao2;
        else 
                percapita2 = 0;

//Calcule o super poder
        superpoder1 = 1 / densidade1 + ((float)(populacao1 + area1 + pib1 + turistico1 + percapita1));
        superpoder2 = 1 / densidade2 + ((float)(populacao2 + area2 + pib2 + turistico2 + percapita2));
    
//Exiba as cartas com os dados que o usuário inseriu
        printf("\n---PRIMEIRA CARTA---\n");
        printf("Inicial do Estado: %c\n", estado1);
        printf("Código da Cidade: %3s\n", codigo1);
        printf("Nome da Cidade: %s\n", cidade1);
        printf("População da Cidade: %lu\n", populacao1);
        printf("Área da Cidade: %.2fkm²\n", area1);
        printf("PIB da Cidade: %.2f bilhões de reais\n", pib1);
        printf("Número de Pontos Turísticos da Cidade: %d\n", turistico1);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
        printf("PIB per Capita: R$%.2f\n", percapita1);
        printf("Super-Poder: %.2f\n", superpoder1);
    
        printf("\n---SEGUNDA CARTA---\n");
        printf("Inicial do Estado: %c\n", estado2);
        printf("Código da Cidade: %3s\n", codigo2);
        printf("Nome da Cidade: %s\n", cidade2);
        printf("População da Cidade: %lu\n", populacao2);
        printf("Área da Cidade: %.2fkm²\n", area2);
        printf("PIB da Cidade: %.2f bilhões de reais\n", pib2);
        printf("Número de Pontos Turísticos da Cidade: %d\n", turistico2);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
        printf("PIB per Capita: R$%.2f\n", percapita2);
        printf("Super-Poder: %.2f\n", superpoder2);

        printf("\nESCOLHA UM ATRIBUTO PARA COMPARAR:\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Pontos Turísticos\n");
        printf("5. Densidade Populacional\n");
        printf("6. PIB per Capita\n");
        printf("7. Super-Poder\n");
        printf("--> ");
        scanf("%d", &atributoescolhido1);

        printf("\nESCOLHA OUTRO ATRIBUTO PARA COMPARAR (Não poderá ser o mesmo atributo selecionado anteriormente):\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Pontos Turísticos\n");
        printf("5. Densidade Populacional\n");
        printf("6. PIB per Capita\n");
        printf("7. Super-Poder\n");
        printf("--> ");
        scanf("%d", &atributoescolhido2);

        if (atributoescolhido2 == atributoescolhido1){
                printf("Você escolheu dois atributos iguais. Reinicie o programa\n");
        } else {
// Primeiro atributo
        switch (atributoescolhido1) {
        case 1: 
                valor1_carta1 = populacao1; valor1_carta2 = populacao2;
                break;
        case 2: 
                valor1_carta1 = area1; valor1_carta2 = area2;
                break;
        case 3:
                valor1_carta1 = pib1; valor1_carta2 = pib2;
                break;
        case 4:
                valor1_carta1 = turistico1; valor1_carta2 = turistico2;
                break;
        case 5:
                valor1_carta1 = densidade1; valor1_carta2 = densidade2;
                break;
        case 6:
                valor1_carta1 = percapita1; valor1_carta2 = percapita2;
                break;
        case 7:
                valor1_carta1 = superpoder1; valor1_carta2 = superpoder2;
                break;
        default:
                printf("Atributo 1 inválido.\n");
                break;
    }

// Segundo atributo
    switch (atributoescolhido2) {
        case 1:
                valor2_carta1 = populacao1; valor2_carta2 = populacao2;
                break;
        case 2:
                valor2_carta1 = area1; valor2_carta2 = area2;
                break;
        case 3:
                valor2_carta1 = pib1; valor2_carta2 = pib2;
                break;
        case 4:
                valor2_carta1 = turistico1; valor2_carta2 = turistico2;
                break;
        case 5:
                valor2_carta1 = densidade1; valor2_carta2 = densidade2;
                break;
        case 6:
                valor2_carta1 = percapita1; valor2_carta2 = percapita2;
                break;
        case 7:
                valor2_carta1 = superpoder1; valor2_carta2 = superpoder2;
                break;
        default:
                printf("Atributo 2 inválido.\n");
                break;
    }

// Somar os dois atributos de cada carta
    soma_carta1 = valor1_carta1 + valor2_carta1;
    soma_carta2 = valor1_carta2 + valor2_carta2;
}

        if (soma_carta1 > soma_carta2) {
        printf("Resultado: Carta 1 (%s) venceu! Com %.2f pontos.\n", cidade1, soma_carta1);
        printf("Valor atributo 1: %.2f\n", valor1_carta1);
        printf("Valor atributo 2: %.2f\n", valor2_carta1);

        }
        else if (soma_carta2 > soma_carta1) {
        printf("Resultado: Carta 2 (%s) venceu! Com %.2f pontos.\n", cidade2, soma_carta2);
        printf("Valor atributo 1: %.2f\n", valor1_carta2);
        printf("Valor atributo 2: %.2f\n", valor2_carta2);
        }
        else {
        printf("Resultado: Empate!\n");
        printf("Pontuação de ambas as cartas: %.2f\n", soma_carta1);
    }

//Conclua o programa com sucesso
    return 0;
    }