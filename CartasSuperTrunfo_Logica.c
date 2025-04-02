#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Luiz Henrique Bosse

int main(){

        char estado;
        char codigo[4];
        char cidade[50];
        int populacao = 0;
        double area = 0;
        double pib = 0;
        int pontosTuristicos = 0;
        double densidadePopulacional = 0;
        double pibPerCapita = 0;
        double superPoder = 0;

        char estado2;
        char codigo2[4];
        char cidade2[50];
        int populacao2 = 0;
        double area2 = 0;
        double pib2 = 0;
        int pontosTuristicos2 = 0;
        double densidadePopulacional2 = 0;
        double pibPerCapita2 = 0;
        double superPoder2 = 0;
        
        strcpy(cidade, "Blumenau");
        strcpy(codigo, "B02");
        estado = 'B';
        populacao = 15000;
        area = 100;
        pib = 25000;
        pontosTuristicos = 50;

        strcpy(cidade2, "Pomerode");
        strcpy(codigo2, "P02");
        estado2 = 'P';
        populacao2 = 50000;
        area2 = 300;
        pib2 = 50000;
        pontosTuristicos2 = 30;

        /*
        printf("Carta 01...\n");

        printf("Digite o nome da cidade: ");  
        // scanf("%s", cidade);
        fgets(cidade, 50, stdin); // Lê no máximo 49 caracteres da entrada padrão (stdin)    
        cidade[strcspn(cidade, "\n")] = 0; // fgets inclui o '\n' na string, então podemos removê-lo se necessário

        printf("Digite a primeira letra do estado: "); 
        scanf(" %c", &estado);

        printf("Digite o código da Carta: (3 Caracteres)");  
        scanf(" %s", &codigo);

        printf("Digite a sua população: "); 
        scanf("%d", &populacao);

        printf("Digite a sua área: "); 
        scanf("%lf", &area);

        printf("Digite o seu PIB: "); 
        scanf("%lf", &pib);

        printf("Digite a quantidade de pontos turisticos: "); 
        scanf("%d", &pontosTuristicos);

        printf("Carta 02...\n");

        printf("Digite o nome da cidade: ");  
        scanf(" %s", cidade2);
        //fgets(cidade2, 50, stdin); // Lê no máximo 49 caracteres da entrada padrão (stdin)    
        //cidade2[strcspn(cidade2, "\n")] = 0; // fgets inclui o '\n' na string, então podemos removê-lo se necessário

        printf("Digite a primeira letra do estado: "); 
        scanf(" %c", &estado2);

        printf("Digite o código da Carta: (3 Caracteres)");  
        scanf(" %s", &codigo2);

        printf("Digite a sua população: "); 
        scanf("%d", &populacao2);

        printf("Digite a sua área: "); 
        scanf("%lf", &area2);

        printf("Digite o seu PIB: "); 
        scanf("%lf", &pib2);

        printf("Digite a quantidade de pontos turisticos: "); 
        scanf("%d", &pontosTuristicos2);
*/

        densidadePopulacional =  (double) populacao/area;
        pibPerCapita =  (double) pib/populacao;
        superPoder = (double) populacao+area+pib+pontosTuristicos+pibPerCapita-densidadePopulacional;

        densidadePopulacional2 = (double) populacao2/area2;
        pibPerCapita2 =  (double) pib2/populacao2;
        superPoder2 = (double) populacao2+area2+pib2+pontosTuristicos2+pibPerCapita2-densidadePopulacional2;


        printf("Carta 1 cadastrada...\n");
        printf("Estado: %c\n", estado);
        printf("Código: %s\n", codigo);
        printf("Nome da cidade: %s\n", cidade);
        printf("População: %d\n", populacao);
        printf("Área: %.2lf km²\n", area);
        printf("PIB: %.2lf\n", pib);
        printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);
        printf("Densidade Populacional: %.2lf\n", densidadePopulacional);
        printf("PIB per Capita: %.2lf\n", pibPerCapita);
        printf("Super poder: %.2lf\n", superPoder);

        printf("...\n");

        printf("Carta 2 cadastrada...\n");
        printf("Estado: %c\n", estado2);
        printf("Código: %s\n", codigo2);
        printf("Nome da cidade: %s\n", cidade2);
        printf("População: %d\n", populacao2);
        printf("Área: %.2lf km²\n", area2);
        printf("PIB: %.2lf\n", pib2);
        printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
        printf("Densidade Populacional: %.2lf\n", densidadePopulacional2);
        printf("PIB per Capita: %.2lf\n", pibPerCapita2);
        printf("Super poder: %.2lf\n", superPoder2);

        printf("...\n");
        printf("...\n");
        printf("Comparação de Cartas:\n");
        
        int resultadoPopulacao = populacao > populacao2;
        int resultadoArea = area > area2;
        int resultadoPib = pib > pib2;
        int resultadoPontosTur = pontosTuristicos > pontosTuristicos2;
        int resultadoPibPerCapita = pibPerCapita > pibPerCapita2;
        int resultadoDensidadePop = densidadePopulacional < densidadePopulacional2;
        int resultadoSuperPoder = superPoder > superPoder2;

        printf("População: Carta %d venceu (%d)\n", resultadoPopulacao ? 1 : 2, resultadoPopulacao);
        printf("Área: Carta %d venceu (%d)\n", resultadoArea ? 1 : 2, resultadoArea);
        printf("PIB: Carta %d venceu (%d)\n", resultadoPib ? 1 : 2, resultadoPib);
        printf("Pontos Turísticos: Carta %d venceu (%d)\n", resultadoPontosTur ? 1 : 2, resultadoPontosTur);
        printf("Densidade Populacional: Carta %d venceu (%d)\n", resultadoPibPerCapita ? 1 : 2, resultadoPibPerCapita);
        printf("PIB per Capita: Carta %d venceu (%d)\n", resultadoDensidadePop ? 1 : 2, resultadoDensidadePop);
        printf("Super Poder: Carta %d venceu (%d)\n", resultadoSuperPoder ? 1 : 2, resultadoSuperPoder);

        return 0;
}
