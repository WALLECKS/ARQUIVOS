#include <stdio.h>
#include <stdlib.h>

typedef struct teste
{
    int valor;

        struct teste *prox;
        
        
}TESTE;
// procedimento de inserçao de valores abaixo
void inserir_fila(TESTE **fila, int num){
    TESTE *aux, *pont2 = malloc(sizeof(TESTE)); // ALOCAÇAO DINAMICA DE MEMORIA 

// VERIFICAÇAO DE ALOCAÇAO DE MEMORIA E ADICIONANDO UM NOVO ELEMENTO NA FILA
    if (pont2){
            pont2->valor = num;
            pont2->prox = NULL;
            // VERIFICA SE A FILA ESTAR VAZIA
            if (*fila == NULL)
                *fila = pont2;
             // PERCORRER TODA A FILA PARA INSERIR UM NOVO VALOR
            else{
                    aux = *fila;
                    while (aux->prox)
                        aux=aux->prox;
                    aux->prox = pont2;
                }
        
    }
    else{
        printf("\n\n Falha ao alocar memoria");
    }
    
};
// REMOVER ELEMENTO DA FILA

TESTE* remover_elemento_fila(TESTE **fila){
    TESTE *remover = NULL;
    if (*fila)
    {
        remover = *fila;
        *fila = remover->prox;
    }
    else
        printf("\tA FILA ESTAR VAZIA \n");
    return remover;

}
// imprimir os valores na tela
void imprimir(TESTE *fila)
    {
        printf("\t============== INICIO DA FILA =================\n\t");
        while(fila)
        {
            printf("%d", fila->valor);
            fila = fila->prox;
        }
        printf("\n\t=========== FINAL DA FILA ================\t");
    }

int main()
{
    TESTE *r, *fila = NULL;
    int opc, valor;
    
    do{

        printf("\n\t0 - SAIR \n\t1 - inserir \n\t2 - remover\n\t3 - imprimir\n");
        scanf(" %d ",&opc);

    switch(opc){
    case 1:
        printf("digite um valor: ");
        scanf("%d",&valor);
        inserir_fila(&fila, valor);
        break;
    case 2:
        r = remover_elemento_fila(&fila);       
        if(r)
        {
            printf("Removido: %d\n", r->valor);
            free(r);    
        }
        break;
    case 3:
    imprimir(fila);          
        break;
    default:
        if (opc!=0)
            printf("\n opçao invalida!\n");     
    }

    }while(opc != 0);      
}


/*
 REFLEXAO DE QUSESTOES 

A). QUAIS SAO AS VANTAGENS E DESVANTAGENS 
DE USAR UMA FILA EM UM SISTEMA DE ATENDIMENTO AO CLIENTE ?

RESPOSTA: primeiro temos o controle por ordem de chegada, como por exemplo, na fila de impressao de arquivos, o primeiro arquivo 
a entrar é o primeiro a sair, outro exemplo é a troca de mensagens onde temos,

Melhor performance:
As filas de mensagens permitem a comunicação assíncrona, o que significa que os endpoints 
que produzem e consomem mensagens interagem com a fila e não entre si.  

umas das desvantagens é a inserção de cada elemento a ser inserido na fila, teremos que 
percorrer todos os nodos até encontrar o último, ou seja, se for uma fila extensa o programa levar um tempo ate chegar a ultima posiçao da fila .

B). Como você acha que o desempenho da sua implementação se alteraria com um nũmero muito grande de clientes ?
 RESPOSTA:
 Tomando como base na resposta da letra A, seria o tempo de execução que o programa ira utilizar para chegar ate a ultima posição da fila
 pra inserção de um valor(dado).

REFERENCIAS
https://aws.amazon.com/pt/message-queue/benefits/

*/