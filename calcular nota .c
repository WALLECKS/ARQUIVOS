#include<stdio.h>
int soma, media, nota, i=1;

int main(){

while(i<=3)
{ printf("\n Digite a %d nota do aluno:..\t", i); 
scanf("%d",&nota);
i++; soma=soma+nota;}

media = soma;
printf("\n %d\n", media);

}




