#include <stdio.h>

int main() {
    
    //Declarção de variáveis;

    char produtoA[30] = "Produto A" , produtoB[30] = "Produto B";

    unsigned int estoqueA = 1000, estoqueB = 2000, estoqueminA = 500, estoqueminB = 2500;

    float precoA = 10.50, precoB = 20.40;

    double valorTotalA, valorTotalB;

    int resultadoA, resultadoB;

    printf("Produto %s tem estoque %u e o valor unitário é R$ %.2f\n", produtoA, estoqueA, precoA);
    printf("Produto %s tem estoque %u e o valor unitário é R$ %.2f\n", produtoB, estoqueB, precoB);

    // comparações com o valor minimo de 

    resultadoA = (estoqueA > estoqueminA);
    resultadoB = (estoqueB > estoqueminB);

    printf("O produto %s tem estoque minimo: %d\n" , produtoA, resultadoA);
    printf("O produto %s tem estoque minimo: %d\n", produtoB, resultadoB);

    printf("O valor total de A (R$ %.2f) é maior que o valor total de B (R$ %.2f): %d\n",
        estoqueA * precoA, estoqueB * precoB,  (estoqueA * precoA) > (estoqueB * precoB) );
    




    













    return 0;
}