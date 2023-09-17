#include <stdio.h>
#include "../main.h"
/* Assuming the _printf function is defined elsewhere */

int main() {
    int len_1, len_2;

    /* ===========> %r <=========== */
    printf("----------------------\n");
    printf("------> r CASES <-----\n");
    printf("----------------------\n");

    /* Test 1: Reverse string */
    len_1 = _printf("%r\n", "Reverse it");
    printf("String len: %d\n", len_1);

    /* Test 2: NULL argument */
    len_2 = _printf("%r\n", NULL);
    printf("String len: %d\n", len_2);

    return 0;
}
