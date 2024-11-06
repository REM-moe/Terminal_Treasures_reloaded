#include <stdio.h>
#include <string.h>
#include <unistd.h>

void win(int key1, int key2) {
    if (key1 == 0xDEADBEEF && key2 == 0xC0FFEE) {
        printf("Access granted! Spawning shell...  \n");
        char *args[] = {"/bin/sh", NULL};
        execve(args[0], args, NULL);
    } else {
        printf("Access denied. Incorrect keys.\n");
    }
}

void vulnerable_function() {
    char buffer[40];
    printf("Enter some text: ");
    gets(buffer);  // Vulnerable to buffer overflow
}

int main() {
    printf("Welcome to the advanced vulnerable program!\n");
    vulnerable_function();
    return 0;
}
