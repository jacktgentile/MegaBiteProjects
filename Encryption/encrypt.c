#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <ctype.h>

void print_usage(char *prog_name) {
  printf("correct usage: %s <multiplicative key> <additive key>", prog_name);
  printf(" <src filename> <dest filename>\n\n");
}

int main(int argc, char** argv) {
  if (argc != 5) {
    print_usage(argv[0]);
    return -1;
  }
  // parse args
  int multKey = atoi(argv[1]);
  int addKey = atoi(argv[2]);
  // open files for I/O
  FILE *plainF = fopen(argv[3], "r");
  if (plainF == NULL) {
    perror(NULL);
    return -1;
  }
  FILE *cipherF = fopen(argv[4], "w+");
  // compute cipher
  char c;
  while ((c = getc(plainF)) != EOF) {
    // compute cipher
    if (isalpha(c)) {
      int i = toupper(c) - 65;
      i = ((i * multKey) + addKey) % 26;
      c = (char) (i + 65);
    }
    putc(c, cipherF);
  }
  // close files
  fclose(plainF);
  fclose(cipherF);
  return 0;
}
