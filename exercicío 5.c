#include<stdio.h>
#define pi 3.1415
#define custo_aluminio 100

int main (void){

float raio, altura, arealado, areabase, areatotal, custototal;

printf ("digite o raio da lata");
scanf("%f", &raio);

printf("digite a altura da lata");
scanf ("%f", &altura);


arealado = 2 * pi * raio * altura;
areabase= pi * raio * raio * 2 ;
areatotal= arealado + areabase;
custototal=  areatotal * custo_aluminio;

printf("o custo de uma lata e de %f * %.2f e de R$ %.2f" , arealado, areabase, custototal);

return 0;

}










