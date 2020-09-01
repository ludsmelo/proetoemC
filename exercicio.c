#include<stdio.h>
int main(void){
float area, raio, altura, pi;
pi= 3,14;

printf("\ndigite a altura:");
scanf("%f", &altura);
printf("a altura que vc digitou foi %.1f", altura);

printf("\ndigite o raio:");
scanf("%f", &raio);
printf("o raio que vc digitou foi %.1f", raio);

area= 2* pi* raio * altura;
printf("\narea= %.1f", area);

return 0;
}


