#include <stdio.h>

int main() {
int num1, num2, result;
printf("Kilometros percorridos: ");
scanf("%d", &num1);
printf("Litros de combustivel gasto: ");
scanf("%d", &num2);
result= num1/num2;
printf("%d Km/L", result);
return 0;
}