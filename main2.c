#include <stdio.h>
#include <stdlib.h>

int main() {
  int num1, num2;

  // Solicita os números ao usuário
  printf("Digite o primeiro numero (maior que o segundo): ");
  scanf("%d", &num1);
  printf("Digite o segundo numero: ");
  scanf("%d", &num2);

  // Verifica se o primeiro número é maior que o segundo
    if (num1 <= num2) {
    printf("Erro: O primeiro numero deve ser maior que o segundo.\n");
    return 1;
  }

  // Calcula e exibe os resultados
  int soma = num1 + num2;
  int subtracao = num1 - num2;
  int modulo = num1 % num2;

  printf("Soma: %d\n", soma);
  printf("Subtracao: %d\n", subtracao);
  printf("Modulo da divisao: %d\n", modulo);

  return 0;
}