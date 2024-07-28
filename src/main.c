#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <stdint.h>
#include <stddef.h>
#include <stdarg.h>
#include <stdbool.h>
#include "pass.h"

#define NO_CLI_ARGS 1

int main(int argc, char* argv[])
{
  if (argc == 0) {
    fprintf(stderr, "Must take args. Use -new_user if a new user.\n");
    exit(NO_CLI_ARGS);
  }

  return EXIT_SUCCESS;
}


