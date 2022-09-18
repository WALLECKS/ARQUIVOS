#include<stdio.h>

int cont = 1;
float dig=0, ini, final, soma=0;
main(){
printf("Informe o valor inicial...\t");
scanf("%f",&ini);
printf("Informe o valor final...\t");
scanf("%f",&final);
 while (ini <= final)
 {
   printf("\n%f digitos", ini);
   soma = soma + ini;
   ini++;
   cont++;
 }
 
 dig = soma; 
// soma dos digitos
printf("\n%f soma dos digitos", dig);
printf("\n");
}