#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <stdint.h>
#include <stddef.h>
#include <stdarg.h>
#include <stdbool.h>
#include "pass.h"

#define NO_CLI_ARGS 1

void show_errno(void) {
  const char* err_info = "Unkown Error";
  switch (errno) {
    case EINVAL:
      err_info = "Invalid Choice";
      perror(err_info);
      break;
    case 0:
      err_info = "No Error";
      perror(err_info);
      break;
  }
}


int mainMenu() {
  short user_choice;
  printf("Welcome to myPass!!!\n\tPlease select an option by its number:\n");
  printf("\t1. Log In\n\t2. Create Account\n\t3. Exit\n");
  scanf("Your choice: %hd", &user_choice);
  if (user_choice == 1) {
    printf("Log in code goes here...");
    errno = 0;
    show_errno();
    exit(errno);
  } else if (user_choice == 2) {
    printf("Create use code here....");
    errno = 0;
    show_errno();
    exit(errno);
  } else if (user_choice == 3) {
    errno = 0;    
    show_errno();
    exit(errno);
  }else if ((user_choice > 3) || (user_choice < 1)) {
    errno = EINVAL;
    show_errno();
    exit(errno);
  }
  return user_choice;
}

int main(int argc, char* argv[])
{
  if (argc == 0) {
    fprintf(stderr, "Must take args. Use -new_user if a new user.\n");
    exit(NO_CLI_ARGS);
  }

  mainMenu();

  return EXIT_SUCCESS;
}


