#include <stdio.h>

int main() {

  float valor1 = 0, valor2 = 0, resultado = 0;

  printf("Digite o primeiro valor: ");
  scanf("%f", &valor1);

  printf("Digite o segundo valor: ");
  scanf("%f", &valor2);

  resultado = valor1 + valor2;

  printf("%g + %g = %g", valor1, valor2, resultado);

  return 0;
  
}
