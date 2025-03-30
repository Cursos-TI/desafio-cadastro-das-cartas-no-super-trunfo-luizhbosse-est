#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Luiz Henrique Bosse

int main(){

        char estado;
        char codigo[4];
        char cidade[50];
        int populacao;
        float area;
        double pib;
        int pontosTuristicos;

        char estado2;
        char codigo2[4];
        char cidade2[50];
        int populacao2;
        float area2;
        double pib2;
        int pontosTuristicos2;

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
        scanf("%f", &area);

        printf("Digite o seu PIB: "); 
        scanf("%f", &pib);

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
        scanf("%f", &area2);

        printf("Digite o seu PIB: "); 
        scanf("%f", &pib2);

        printf("Digite a quantidade de pontos turisticos: "); 
        scanf("%d", &pontosTuristicos2);

        printf("Carta 1 cadastrada...\n");
        printf("Estado: %c\n", estado);
        printf("Código: %s\n", codigo);
        printf("Nome da cidade: %s\n", cidade);
        printf("População: %d\n", populacao);
        printf("Área: %d\n", area);
        printf("PIB: %d\n", pib);
        printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);

        printf("...\n");

        printf("Carta 2 cadastrada...\n");
        printf("Estado: %c\n", estado2);
        printf("Código: %s\n", codigo2);
        printf("Nome da cidade: %s\n", cidade2);
        printf("População: %d\n", populacao2);
        printf("Área: %d\n", area2);
        printf("PIB: %d\n", pib2);
        printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

}
