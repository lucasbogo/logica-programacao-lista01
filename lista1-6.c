#include <stdio.h>
int main()
{
float num1, num2, num3, result;
printf("Informar o comprimento da sala: ");
scanf("%f", &num1);
printf("Informar a largura da sala: ");
scanf("%f", &num2);
printf("informar o valor do metro quadrado: ");
scanf("%f", &num3);
result= num1*num2*num3;
printf("Custo total: R$ %.2f",result);
return 0;
}