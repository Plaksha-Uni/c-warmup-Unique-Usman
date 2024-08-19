#include <cstdio>

int main (void) {
  int count = 0;
  while (fgetc(stdin) != EOF) {
    count++;
  }
  fprintf(stdout, "%d\n", count);
}
