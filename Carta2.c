#include <stdio.h>

int main() {
    char Estado = 'A';
    char Carta[20] = "B02";
    char Cidade[20] = "Natal";
    int Populacão = 1250000;
    float Área = 275000; 
    float PIB = 225000;
    int Turismo = 22;

    
    
    printf("Digite o nome do Estado:");
    scanf("%c",&Estado);

    printf("Digite o código da carta:");
    scanf("%s",Carta);

    printf("Digite o nome da cidade:");
    scanf("%s",Cidade);

    printf("Digite a populacão:");
    scanf("%d",&Populacão);
    
    printf("Digite Área em km²:");
    scanf("%f",&Área);
   
    printf("Digite o PIB:");
    scanf("%f",&PIB);
 
    printf("Digite a quantidade de pontos turísticos:");
    scanf("%d",&Turismo);

    printf("Estado:%c\nCarta:%s\nNome da Cidade:%s\nPopulacão:%d\nÁrea:%.2f km²\nPIB:%.2f bilhões de reais\nNúmero de pontos turistico:%d",Estado,Carta,Cidade,Populacão,Área,PIB,Turismo);

return

}