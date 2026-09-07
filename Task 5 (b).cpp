#include <stdio.h>

int main() {
    char name[50];
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);   // reads up to 49 characters + null
    printf("Hello, ");
    puts(name);                         // automatically adds newline
    return 0;
}
