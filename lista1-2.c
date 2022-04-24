#include <stdio.h>

int main() 
{

  int num1, num2, soma, sub, mult, div;

    printf("informar primeiro valor:");
    scanf("%d", &num1);

    printf("informar segundo valor:");
    scanf("%d", &num2);

    soma= num1+num2;
    sub= num1-num2;
    mult= num1*num2;
    div= num1*num2;

    printf("Soma= %d / Sub= %d / Mult= %d / Div= %d",soma, sub, mult, div);

return 0;

}
