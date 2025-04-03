#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  char *ptr = argv[1];
  int val = atoi(argv[2]); // Convert argv[2] to an integer
  printf("Hello, World! Hi, %s, now it's %d o'clock.\n", ptr, val);
  return 0;
}