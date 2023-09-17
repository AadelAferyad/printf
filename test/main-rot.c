#include "main.h"
#include <stdio.h>
#include <limits.h>

int main() {
    char *input = "Hello, World!";
    
    _printf("Original: %s\n", input);
    _printf("ROT13: %R\n", input);

    return 0;
}
