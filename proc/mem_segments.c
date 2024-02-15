#include <stdio.h>
#include <stdlib.h>

char globBuf[65536]; /* 초기화 되지 않은 데이터 세그먼트에 저장된다. */
int primes[] = {2, 3, 5, 7}; /* 초기화 된 데이터 세그먼트에 저장된다. */

static int 
square(int x)
{
  int result;

  result = x * x;
  return result; /* 레지스터를 통해 리턴값 할당 */
}

static void
doCalc(int val)
{
  printf("The square of %d is %d\n", val, square(val));

  if (val < 1000) {
    int t;
    t = val * val * val;
    printf("The cube of %d is %d\n", val, t);
  }
}

int
main(int argc, char *argv[])
{
  static int key = 9973;
  static char mbuf[10240000];
  char *p;

  p = malloc(1024);
  
  doCalc(key);

  exit(EXIT_SUCCESS);
}
