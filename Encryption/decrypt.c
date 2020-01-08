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
  int invList[] = {1,0,9,0,21,0,15,0,3,0,19,0,0,0,7,0,23,0,11,0,5,0,17,0,25};
  int multKey = atoi(argv[1]);
  int multInv = invList[multKey-1];
  int addKey = atoi(argv[2]);
  // open files for I/O
  FILE *cipherF = fopen(argv[3], "r");
  if (cipherF == NULL) {
    perror(NULL);
    return -1;
  }
  FILE *plainF = fopen(argv[4], "w+");
  // compute cipher
  char c;
  while ((c = getc(cipherF)) != EOF) {
    // compute cipher
    if (isalpha(c)) {
      int i = toupper(c) - 65 + 26;
      i = ((i - addKey) * multInv) % 26;
      c = (char) (i + 65);
    }
    putc(c, plainF);
  }
  // close files
  fclose(cipherF);
  fclose(plainF);
  return 0;
}
