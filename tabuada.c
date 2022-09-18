
//3. Faça o programa que apresenta a seguinte saída, perguntando ao usuário o número máximo (no exemplo, 9). 
// Este número deve ser sempre ímpar.

#include<stdio.h>

int x=2, y=1, z=3, w=4;
 
 main(){
 while(y<=9)
 {
 printf("\t%d",y);
 y++;
 }

          printf("\n");
 
 printf("\t"); while(x<=8)
 {
 printf("\t%d",x);
 x++;
 }
          printf("\n");
  
 printf("\t\t"); while(z<=7)
 {
 printf("\t%d",z);
 z++;
 }
          printf("\n");
  
 printf("\t\t\t"); while(w<=6)
 {
 printf("\t%d",w);
 w++;
 }

printf("\n\t\t\t\t\t");
 int i=5;  printf("%d",i);

printf("\n");


if(y==9 && x==9 && z==9 && w==9);
printf("o maior numero é impar");
printf("\n");

}