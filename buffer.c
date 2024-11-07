#include <stdio.h>
#include <stdlib.h>
#include<string.h>

void debug() 
{
    printf("!! ENTERING DEBUG MODE !!\n");
    system("/bin/bash");
}

int checkPassword()
{
    char password[64];
    char pass[] = "password123";
    printf("password: ");
    gets(password);
    if(strcmp(password,pass)==0)
      return 1;
    return 0;
}

int main(int argc, char **argv)
{
    printf("WELCOME TO THE SECURE SERVER\n");

    if (checkPassword())
    {
      printf("yeayyy logged in!!!");
    } else {
        printf("Wrong password, sorry;\n");
    }
}
