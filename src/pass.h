#ifndef PASS_H
#define PASS_H

#endif

/* Structs that for users, accounts, etc....
*  This will struct will link to the users vault which holds the passwords by the acct_id
*  The accepted practice will be to name the struct the username
*/
typedef struct {
  char* username;
  char* password;
  char* email;
  char* first_name;
  char* surname;
  unsigned short acct_id;
  bool encryption; 
} user_acct_t;
