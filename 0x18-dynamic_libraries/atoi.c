#include "main.h"

int dev_atoi(char *pStr)
{
  int n; char g = 0;
  if (*pStr == '-') { g = 1; pStr++; }
  for(n=0;*pStr >= '0' && *pStr <= '9';pStr++) {
    n *= 10;
    n += *pStr - '0';
  }
  if (g) n *= -1;
  return n;
}

int main(int argc, char **argv) {
  if(argc < 1) return 1;
  printf("%s => %d\n", argv[1], dev_atoi(argv[1]));
  return 0;
}