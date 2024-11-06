#include<stdio.h>
int main() {
    int secret = 0xdeadbeaf;
    char user_input[50];
    gets(user_input);
    printf(user_input);  // Vulnerable printf
}
