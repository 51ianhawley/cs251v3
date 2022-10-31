#include <stdio.h> 
#include <string.h>
int main(void)
{
  char password[6];                  // password guess
  char correctpassword[] = "?#$5%";  // how many characters here?
  char userid[6];                    // user's input for userid
  char correctuserid[] = "furcy";    // how many characters here?
  int n = 5;                         // length of correct userid and pwd
  
  printf("userid:   ");
  gets(userid);                      // user types in userid
  printf("password: ");
  gets(password);                    // user types in password
  if (strncmp(userid, correctuserid, n) != 0)       // check userid
  {
      printf("Unknown userid. Bye!\n");
      return 0;
  }
  if (strncmp(password, correctpassword, n) != 0)   // check password
  {
      printf("Incorrect password. Bye!\n");
      return 0;
  }
    
  // successful login
  printf("How much money do you need today?\n");
 
  return(0);
}// main