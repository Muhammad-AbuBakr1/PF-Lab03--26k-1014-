#include <stdio.h>
#include <stdbool.h>   // for bool type

int main() {
    int a = 42;
    float b = 3.14f;
    double c = 2.71828;
    char d = 'X';
    bool e = true;

    printf("int:    value = %d, size = %zu bytes\n", a, sizeof(a));
    printf("float:  value = %f, size = %zu bytes\n", b, sizeof(b));
    printf("double: value = %lf, size = %zu bytes\n", c, sizeof(c));
    printf("char:   value = %c, size = %zu bytes\n", d, sizeof(d));
    printf("bool:   value = %d, size = %zu bytes\n", e, sizeof(e));

    return 0;
}
