#include <stdio.h>

int main() {
    int age = 22;
    float height = 1.75f;
    char grade = 'A';
    char name[] = "Ali Ahmed";
    long population = 240000000L;    // long integer

    printf("Age: %d, Height: %.2f m, Grade: %c, Name: %s, Population: %ld\n",
           age, height, grade, name, population);

    return 0;
}
