#include <stdio.h>

int main() {

float num, result;

printf("Valor Total de Venda: ");
scanf("%f", &num);

result = num * 0.1;

printf("Comissao vendedor: R$ %.2f",result);

return 0;

}