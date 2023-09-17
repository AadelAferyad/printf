#include <stdio.h>
#include "../main.h"
#include <limits.h>

int main() {
    unsigned int l = 42; // Initialize 'l' with some value

    _printf("%u\n", 1024);
    printf("%u\n", 1024);
    _printf("%u\n", (unsigned int)-1024);
    printf("%u\n", (unsigned int)-1024);
    _printf("%u\n", 0);
    printf("%u\n", 0);
    _printf("%u\n", UINT_MAX);
    printf("%u\n", UINT_MAX);
    _printf("%u\n", l);
    printf("%u\n", l);
    _printf("There are %u bytes in %u KB\n", 1024, 1);
    printf("There are %u bytes in %u KB\n", 1024, 1);
    _printf("%u - %u = %u\n", 2048, 1024, 1024);
    printf("%u - %u = %u\n", 2048, 1024, 1024);
    _printf("%u + %u = %u\n", INT_MAX, INT_MAX, INT_MAX + INT_MAX); // Assuming 'res' is INT_MAX * 2
    printf("%u + %u = %u\n", INT_MAX, INT_MAX, INT_MAX + INT_MAX); // Assuming 'res' is INT_MAX * 2

    _printf("%o\n", 1024);
    printf("%o\n", 1024);
    _printf("%o\n", (unsigned int)-1024);
    printf("%o\n", (unsigned int)-1024);
    _printf("%o\n", 0);
    printf("%o\n", 0);
    _printf("%o\n", UINT_MAX);
    printf("%o\n", UINT_MAX);
    _printf("%o\n", l);
    printf("%o\n", l);
    _printf("There are %o bytes in %o KB\n", 1024, 1);
    printf("There are %o bytes in %o KB\n", 1024, 1);
    _printf("%o - %o = %o\n", 2048, 1024, 1024);
    printf("%o - %o = %o\n", 2048, 1024, 1024);
    _printf("%o + %o = %o\n", INT_MAX, INT_MAX, INT_MAX + INT_MAX); // Assuming 'res' is INT_MAX * 2
    printf("%o + %o = %o\n", INT_MAX, INT_MAX, INT_MAX + INT_MAX); // Assuming 'res' is INT_MAX * 2

    _printf("%x\n", 1024);
    printf("%x\n", 1024);
    _printf("%x\n", (unsigned int)-1024);
    printf("%x\n", (unsigned int)-1024);
    _printf("%x\n", 0);
    printf("%x\n", 0);
    _printf("%x\n", UINT_MAX);
    printf("%x\n", UINT_MAX);
    _printf("%x\n", l);
    printf("%x\n", l);
    _printf("There are %x bytes in %x KB\n", 1024, 1);
    printf("There are %x bytes in %x KB\n", 1024, 1);
    _printf("%x - %x = %x\n", 2048, 1024, 1024);
    printf("%x - %x = %x\n", 2048, 1024, 1024);
    _printf("%x + %x = %x\n", INT_MAX, INT_MAX, INT_MAX + INT_MAX); // Assuming 'res' is INT_MAX * 2
    printf("%x + %x = %x\n", INT_MAX, INT_MAX, INT_MAX + INT_MAX); // Assuming 'res' is INT_MAX * 2

    _printf("%X\n", 1024);
    printf("%X\n", 1024);
    _printf("%X\n", (unsigned int)-1024);
    printf("%X\n", (unsigned int)-1024);
    _printf("%X\n", 0);
    printf("%X\n", 0);
    _printf("%X\n", UINT_MAX);
    printf("%X\n", UINT_MAX);
    _printf("%X\n", l);
    printf("%X\n", l);
    _printf("There are %X bytes in %X KB\n", 1024, 1);
    printf("There are %X bytes in %X KB\n", 1024, 1);
    _printf("%X - %X = %X\n", 2048, 1024, 1024);
    printf("%X - %X = %X\n", 2048, 1024, 1024);
    _printf("%X + %X = %X\n", INT_MAX, INT_MAX, INT_MAX + INT_MAX); // Assuming 'res' is INT_MAX * 2
    printf("%X + %X = %X\n", INT_MAX, INT_MAX, INT_MAX + INT_MAX); // Assuming 'res' is INT_MAX * 2

    _printf("%u == %o == %x == %X\n", 1024, 1024, 1024, 1024);
    printf("%u == %o == %x == %X\n", 1024, 1024, 1024, 1024);
    _printf("uuoxxX%xuoXo\n", 1024);
    printf("uuoxxX%xuoXo\n", 1024);

    return 0;
}
