//2. Escreva um programa que leia 3 notas de um aluno e a média das notas dos exercícios realizados por ele. 
//Calcular a média de aproveitamento, usando a fórmula: MA = (N1 + N2*2 + N3*3 + ME)/7. 
//A partir da média, informar o conceito de acordo com a tabela:
//maior ou igual a 9 	A
//maior ou igual a 7.5 e menor que 9 	B
//maior ou igual a 6 e menor que 7.5 	C
//maior ou igual a 4 e menor que 6 	D
//menor que 4 	E

#include <stdio.h>

int i = 1, nota, media , total=0, soma=0, dig;

main()
{

    while (i <= 3)
    {
        printf("%d- Digite a %d nota do aluno\t", i, i);
        scanf("%d", &nota);
        total = total + nota;
        soma=soma+i;
        i++;
    }
    media = total;
    dig=soma;
    printf("\n %d = TOTAL DAS NOTAS", media);
    printf("\n%d = SOMA DOS DIGITOS\n",dig);
}