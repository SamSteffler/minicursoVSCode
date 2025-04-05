#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  char *ptr = argv[1];
  int val = atoi(argv[2]);
  printf("Ola, mundo! Ola, %s, agora sao %d horas.\n", ptr, val);
  return 0;
}