//Ler um número inteiro, adicionar o valor 2 a esse número e informar o resultado.

#include <stdio.h>

int main(){

int num,result;

printf("informar um numero:");
scanf("%d",&num);
result = num + 2;
printf("%d+2=%d", num,result);

return 0;

}
