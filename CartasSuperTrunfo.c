
     #include <stdio.h>
   #include <string.h>

int main()
{
    // ============== VARIAVEIS CARTA 1 ========================
    int carta1;
    char estado1[3];        
    char codigo1[4];        
    char nomeDaCidade1[50];  
    int populacao1;         
    float areaEmMetro21;
    float pib1;
    int pontosTuristicos1;
 
    // ============== VARIAVEIS CARTA 2 ========================
    int carta2;
    char estado2[3];        
    char codigo2[4];        
    char nomeDaCidade2[50];  
    int populacao2;         
    float areaEmMetro22;
    float pib2;
    int pontosTuristicos2;
 
 
    // Pedindo para preencher a carta 1
 
    printf("Digite o numero da carta(1): ");
    scanf("%d", &carta1);
 
    printf("Digite o estado da carta(1): ");
    scanf("%2s", estado1);  
 
    printf("Digite o código da carta(1): ");
    scanf("%3s", codigo1);  
 
    getchar(); 
 
    printf("Digite o nome da cidade da carta(1): ");
    fgets(nomeDaCidade1, sizeof(nomeDaCidade1), stdin);
    nomeDaCidade1[strcspn(nomeDaCidade1, "\n")] = '\0'; 
 
    printf("Digite a populacao da carta(1): ");
    scanf("%d", &populacao1);
 
    printf("Digite a área m² da carta(1): ");
    scanf("%f", &areaEmMetro21);
 
    printf("Digite o PIB da carta(1): ");
    scanf("%f", &pib1);
 
    printf("Digite o numero de pontos turísticos da carta(1): ");
    scanf("%d", &pontosTuristicos1);
 
 
    // Pedindo para preencher os dados da carta 2
    printf("Digite o numero da carta(2): ");
    scanf("%d", &carta2);
 
    printf("Digite o estado da carta(2): ");
    scanf("%2s", estado2);   
 
    printf("Digite o código da carta(2): ");
    scanf("%3s", codigo2);   
 
    getchar(); 
 
    printf("Digite o nome da cidade da carta(2): ");
    fgets(nomeDaCidade2, sizeof(nomeDaCidade2), stdin);
    nomeDaCidade2[strcspn(nomeDaCidade2, "\n")] = '\0'; 
 
    printf("Digite a populacao da carta(2): ");
    scanf("%d", &populacao2);
 
    printf("Digite a área m² da carta(2): ");
    scanf("%f", &areaEmMetro22);
 
    printf("Digite o PIB da carta(2): ");
    scanf("%f", &pib2);
 
    printf("Digite o numero de pontos turísticos da carta(2): ");
    scanf("%d", &pontosTuristicos2);
 
 
 
// Mostrando os dados da carta 1
    printf("\n");
    printf("Carta: %d\n", carta1);
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeDaCidade1);
    printf("População: %d\n", populacao1);
    printf("Area em m²: %.2f\n", areaEmMetro21);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
 
    printf("\n");
    printf("\n");
 
    printf("Carta: %d\n", carta2);
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeDaCidade2);
    printf("População: %d\n", populacao2);
    printf("Area em m²: %.2f\n", areaEmMetro22);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
 
 
 

    return 0;
}