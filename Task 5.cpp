#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    ch = getchar();            // read a character
    printf("You entered: ");
    putchar(ch);               // output the character
    putchar('\n');
    return 0;
}
