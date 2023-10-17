#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
// declarando os valores
    int vet[5], aux;

// capturando os valores abaixo
    for ( int valor = 0; valor <= 4; valor++)
    {
        printf("digite um valor: \t");
        scanf("%d",&vet[valor]);
    }
// loço for dentro de outro laço for para comparar os valores
    for ( int x = 0; x <= 4; x++)
    {
        for (int y = x; y <= 4; y++)
        {
            if (vet[x] > vet[y]) // comparando os valores de x e y
            {
                aux = vet[x]; // troca de valores
                vet[x] = vet[y]; // troca de valores
                vet[y]= aux; // troca de valores
            }
            
        }
        
    }
 // percorrendo o resultado
    for (int i = 0; i <= 4; i++)
    {
        printf("valor do indice %d  e ordenado: %d\n", i, vet[i]); // mostrando o resultado ordenado em cada indice do vetor
    }
    
    
    
}
