//1. Crie um programa capaz de ler os dados de uma matriz quadrada de inteiros.
//Ao final da leitura o programa deverá imprimir o número da linha que contém o menor dentre todos os números lidos.

#include <stdio.h>

int m[2][2],i, j;

main()
{
 for(i=0; i<2; i++)
      for(j=0; j<2; j++)     
  {
     printf("\n[%d %d]\t", i, j);
     scanf("%d",&m[i][j]);
  }
            printf("\n %d %d %d %d\n",m[0][0],m[0][1],m[1][0],m[1][1]);  
          
           
               if (m[0][0]<m[0][1] && m[0][0]<m[1][0] && m[0][0]<m[1][1])
                  {
                    printf("\nlinha %d",m[0][0]);
                  }
               
               else if (m[0][1]<m[0][0] && m[0][1]<m[1][0] && m[0][1]<m[1][1])
                  {
                    printf("\nlinha %d",m[0][1]);
                  }
                else if (m[1][0]<m[0][0] && m[1][0]<m[0][1] && m[1][0]<m[1][1])
                  {
                    printf("\nlinha %d",m[1][0]);
                  }
               else if (m[1][1]<m[0][0] && m[1][1]<m[0][1] && m[1][1]<m[1][0])
                  {
                    printf("\nlinha %d",m[1][1]);
                  }

printf("\n");

 }









