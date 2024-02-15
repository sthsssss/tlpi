#include <setjmp.h>
#include "tlpi_hdr.h"

static jmp_buf env;

void foo()
{
  setjmp(env);
  printf("Function is terminatined\n");
}

int main(int argc, char *argv[])
{
  foo();

  longjmp(env, 1);

  exit(EXIT_SUCCESS);
}