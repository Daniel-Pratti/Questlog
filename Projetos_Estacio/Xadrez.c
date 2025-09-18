/*Projeto de um Jogo de Xadrez em C para um trabalho de faculdade.*/

#include <stdio.h>

int main () {

    int torre = 1, bispo = 1, rainha = 1, cavalo = 1, peça;

    printf("Qual peça você quer movimentar?\n");
    printf("1 - Torre\n");
    printf("2 - Bispo\n");
    printf("3 - Rainha\n");
    printf("4 - Cavalo\n");
    printf("\nDigite o número correspondente à peça: ");
    scanf("%d", &peça);
    printf("\n");

    while (peça < 1 || peça > 4) {
        printf("Peça inválida. Por favor, selecione uma peça válida:\n");
        printf("1 - Torre\n");
        printf("2 - Bispo\n");
        printf("3 - Rainha\n");
        printf("4 - Cavalo\n");
        scanf("%d", &peça);
    }

    switch (peça)
    {
    case 1:
        printf("Você selecionou a torre.\n");
        do
        {
            printf("Direita\n");
            torre++;
        }
        while (torre <= 5);

        break;
    case 2:
        printf("Você selecionou o bispo.\n");

        while (bispo <= 5)
        {
            printf("Cima Direita\n");
            bispo++;
        }

        break;
    case 3:
        printf("Você selecionou a rainha.\n");

        for (rainha = 1; rainha <= 8; rainha++)
        {
            printf("Esquerda\n");
        }
    case 4:
        printf("Você selecionou o cavalo.\n");

        while (cavalo < 2)
        {
            for (int cavalo1 = 1; cavalo1 <= 2; cavalo1++)
            {
                printf("Baixo\n");
            }
            printf("Esquerda\n");
            cavalo++;
        }   
        break;
    default:
        printf("Peça inválida.\n");

        break;
    }

    




    return 0;
}