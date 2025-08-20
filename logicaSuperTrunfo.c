#include <stdio.h>
#include <locale.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    setlocale(LC_ALL, "pt_BR.UTF-8");

    // ESTADO 1
    char estado_um[20];
    char codigo_carta_estado_um[20];
    char nome_cidade_estado_um[20];
    unsigned long int populacao_estado_um;
    int pontos_turisticos_estado_um;
    float area_estado_um, PIB_estado_um, densidade_populacional_estado_um, PIB_percapita_estado_um;
    float super_poder_estado_um;

    // ESTADO 2
    char estado_dois[20];
    char codigo_carta_estado_dois[20];
    char nome_cidade_estado_dois[20];
    unsigned long int populacao_estado_dois;
    int pontos_turisticos_estado_dois;
    float area_estado_dois, PIB_estado_dois, densidade_populacional_estado_dois, PIB_percapita_estado_dois;
    float super_poder_estado_dois;

    printf("\n----------------------------------------------------\n\n");

    // Entrada Carta 1
    printf("VAMOS CADASTRAR OS DADOS DA PRIMEIRA CIDADE\n");
    printf("Digite o nome da Cidade: \n");
    scanf("%s", nome_cidade_estado_um);
    printf("-----------\n");

    printf("Digite o Estado desta Cidade: \n");
    scanf("%s", estado_um);
    printf("-----------\n");

    printf("Digite o Codigo desta Cidade: \n");
    scanf("%s", codigo_carta_estado_um);
    printf("-----------\n");

    printf("Digite a População desta Cidade: \n");
    scanf("%lu", &populacao_estado_um);
    printf("-----------\n");

    printf("Digite o Número de Pontos Turísticos desta Cidade: \n");
    scanf("%d", &pontos_turisticos_estado_um);
    printf("-----------\n");

    printf("Digite a Área em km² desta Cidade: \n");
    scanf("%f", &area_estado_um);
    printf("-----------\n");

    printf("Digite o Produto Interno Bruto (PIB) em bilhões de reais desta Cidade: \n");
    scanf("%f", &PIB_estado_um);

    printf("\n----------------------------------------------------\n\n");

    // Entrada Carta 2
    printf("VAMOS CADASTRAR OS DADOS DA SEGUNDA CIDADE\n");
    printf("Digite o nome da Cidade: \n");
    scanf("%s", nome_cidade_estado_dois);
    printf("-----------\n");

    printf("Digite o Estado desta Cidade: \n");
    scanf("%s", estado_dois);
    printf("-----------\n");

    printf("Digite o Codigo desta Cidade: \n");
    scanf("%s", codigo_carta_estado_dois);
    printf("-----------\n");

    printf("Digite a População desta Cidade: \n");
    scanf("%lu", &populacao_estado_dois);
    printf("-----------\n");

    printf("Digite o Número de Pontos Turísticos desta Cidade: \n");
    scanf("%d", &pontos_turisticos_estado_dois);
    printf("-----------\n");

    printf("Digite a Área em km² desta Cidade: \n");
    scanf("%f", &area_estado_dois);
    printf("-----------\n");

    printf("Digite o Produto Interno Bruto (PIB) em bilhões de reais desta Cidade: \n");
    scanf("%f", &PIB_estado_dois);

    printf("\n----------------------------------------------------\n");

    // Cálculos Densidade Populacional
    densidade_populacional_estado_um = populacao_estado_um / area_estado_um;
    densidade_populacional_estado_dois = populacao_estado_dois / area_estado_dois;
    
    // Cálculos PIB Per Capita
    PIB_percapita_estado_um = (PIB_estado_um * 1000000000) / populacao_estado_um; // conversão p/ reais
    PIB_percapita_estado_dois = (PIB_estado_dois * 1000000000) / populacao_estado_dois;

    // Cálculos do Super Poder
    super_poder_estado_um = (float)populacao_estado_um + area_estado_um + PIB_estado_um + pontos_turisticos_estado_um + PIB_percapita_estado_um + (1.0f / densidade_populacional_estado_um);
    super_poder_estado_dois = (float)populacao_estado_dois + area_estado_dois + PIB_estado_dois + pontos_turisticos_estado_dois + PIB_percapita_estado_dois + (1.0f / densidade_populacional_estado_dois);

    // Saída Carta 1
    printf("Carta 1\n");
    printf("Codigo da Carta: %s\n", codigo_carta_estado_um);
    printf("---\n");
    printf("Cidade: %s.\n", nome_cidade_estado_um);
    printf("Estado: %s.\n", estado_um);
    printf("População: %lu Habitantes.\n", populacao_estado_um);
    printf("Área: %.2f km².\n", area_estado_um);
    printf("Produto Interno Bruto (PIB): %.2f bilhões de reais.\n", PIB_estado_um);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos_estado_um);
    printf("Densidade Populacional: %.2f hab/km².\n", densidade_populacional_estado_um);
    printf("PIB Per Capita: %.2f reais.\n", PIB_percapita_estado_um);
    printf("Super Poder %s: %.2f pontos.\n", nome_cidade_estado_um, super_poder_estado_um);

    printf("\n----------------------------------------------------\n");

    // Saída Carta 2
    printf("Carta 2\n");
    printf("Codigo da Carta: %s\n", codigo_carta_estado_dois);
    printf("---\n");
    printf("Cidade: %s.\n", nome_cidade_estado_dois);
    printf("Estado: %s.\n", estado_dois);
    printf("População: %lu Habitantes.\n", populacao_estado_dois);
    printf("Área: %.2f km².\n", area_estado_dois);
    printf("Produto Interno Bruto (PIB): %.2f bilhões de reais.\n", PIB_estado_dois);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos_estado_dois);
    printf("Densidade Populacional: %.2f hab/km².\n", densidade_populacional_estado_dois);
    printf("PIB Per Capita: %.2f reais.\n", PIB_percapita_estado_dois);
    printf("Super Poder %s: %.2f pontos.\n", nome_cidade_estado_dois, super_poder_estado_dois);
    printf("\n----------------------------------------------------\n");
    
    // Comparações
    printf("Comparação de Cartas:\n\n");

    printf("População: Carta %d venceu\n", (populacao_estado_um > populacao_estado_dois) ? 1 : 2);
    printf("Área: Carta %d venceu\n", (area_estado_um > area_estado_dois) ? 1 : 2);
    printf("PIB: Carta %d venceu\n", (PIB_estado_um > PIB_estado_dois) ? 1 : 2);
    printf("Pontos Turísticos: Carta %d venceu\n", (pontos_turisticos_estado_um > pontos_turisticos_estado_dois) ? 1 : 2);
    printf("Densidade Populacional: Carta %d venceu\n", (densidade_populacional_estado_um < densidade_populacional_estado_dois) ? 1 : 2);
    printf("PIB per Capita: Carta %d venceu\n", (PIB_percapita_estado_um > PIB_percapita_estado_dois) ? 1 : 2);
    printf("Super Poder: Carta %d venceu\n", (super_poder_estado_um > super_poder_estado_dois) ? 1 : 2);

    printf("\n----------------------------------------------------\n");

    if (super_poder_estado_um > super_poder_estado_dois)
    {
        printf("Carta Vencedora é: Carta 1 - %s.\n", nome_cidade_estado_um);
        printf("Com o Super Poder: %.2f\n", super_poder_estado_um);
    }
    else if (super_poder_estado_dois > super_poder_estado_um)
    {
        printf("Carta Vencedora é: Carta 2 - %s.\n", nome_cidade_estado_dois);
        printf("Com o Super Poder: %.2f\n", super_poder_estado_dois);
    }

    printf("\n----------------------------------------------------\n");

    return 0;

    return 0;
}
