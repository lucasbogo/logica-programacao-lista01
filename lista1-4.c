#include <stdio.h>

int main() 
{

  float num1, num2, real;

    printf("Valor em dolar: ");
    scanf("%f", &num1);

    printf("Cotacao dia: ");
    scanf("%f", &num2);

    real = num1 * num2;

    printf("Valor R$ %.2f",real);

return 0;

}
