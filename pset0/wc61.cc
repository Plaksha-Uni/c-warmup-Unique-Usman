#include <cstdio>
#include <cctype>

int main (void) {
  int lines = 0;
  int byte = 0;
  int word = 0; 
  int ch;
  bool in_word = false; 

  while ((ch = fgetc(stdin)) != EOF) {
    byte++;
    if (isspace(ch)) {
      if (ch == '\n') {
        lines++;
      } 
      if (in_word) {
        word++;
        in_word = false;
      }
  
    } else {
      in_word = true;
    }

  }
  if (in_word) word++;

 
  fprintf(stdout, "%d %d %d", lines, word, byte);
  return 0;
}
