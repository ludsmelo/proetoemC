#include<stdio.h>
int main (void){

float tc, tf, tk;

 printf("digite a temperatura em graus celsius");
 scanf("%f", &tc);

 tk= tc = 273;
 tf= 9* tc /5 + 32;


 printf ("o valor da temperatura em kelvin e %.2f" , tk);
 printf("\n o valor da temperatura em hahrenheit e %.2f" , tf);

 return 0;
 }

