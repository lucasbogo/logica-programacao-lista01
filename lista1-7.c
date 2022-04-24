#include <stdio.h>
int main()
{
  
  float num1, num2, result;
  
    printf("Tamanho arquivo em bits: ");
    scanf("%f", &num1);
    printf("Velocidade conexao em bits/s: ");
    scanf("%f", &num2);
    result= num1/num2;
    printf("Tempo necessario: %.2f segundos",result);
  
return 0;
}
