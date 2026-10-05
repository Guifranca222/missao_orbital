#include <stdio.h>

int main(){
    int codigoCadete;
    int etapa;
    int pontos;
    int total;
    float media;
    int continua;

    continua = 1;
    

    do{
    total = 0; 
    printf("Digite o código do Cadete: ");
    scanf("%d", &codigoCadete);

    for (etapa = 1; etapa <= 3; etapa++) {
        printf("Digite os pontos da etapa %d: ", etapa);
        scanf("%d", &pontos);
        while(pontos < 0 || pontos > 100){
            printf("Pontuação inválida(MAX 100) \n");
            printf("Digite os pontos da etapa %d: ", etapa);
            scanf("%d", &pontos);
        }
    total = total + pontos;
        
    }

    media = total / 3.0;

    /*
    printf("pontos: %d \n", total);
    printf("media: %.2f \n", media);
    */

    if  (media >= 85){
        printf("Cadete: %d \n", codigoCadete);
        printf("Pontuação Total: %d \n", total);
        printf("Média: %.2f \n", media);
        printf("Classificação: Comandante da missão. \n");
        
    } else if(media >= 70.0 && media <= 84.99){
        printf("Cadete: %d \n", codigoCadete);
        printf("Pontuação Total: %d \n", total);
        printf("Média: %.2f \n", media);
        printf("Classificação: Cadete autorizado para a missão. \n");

    } else if(media >= 50.0 && media <= 69.99){
        printf("Cadete: %d \n", codigoCadete);
        printf("Pontuação Total: %d \n", total);
        printf("Média: %.2f \n", media);
        printf("Classificação: Novo treinamento recomendado. \n");
    } else {
        printf("Cadete: %d \n", codigoCadete);
        printf("Pontuação Total: %d \n", total);
        printf("Média: %.2f \n", media);
        printf("Classificação: Cadete ainda não autorizado. \n");

    }

    if (total == 300){
        printf("PONTUAÇÃO MÁXIMA!\n");

    }


    printf("Deseja cadastrar outro cadete? (1-Sim / 0-Não): ");
    scanf("%d", &continua);

    } while(continua == 1);



}