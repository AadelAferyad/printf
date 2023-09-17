#include "../main.h"
#include <stdio.h>

void print_separator() {
    printf("========================================\n");
}

int main(void)
{
    // Test cases for %s
    print_separator();
    printf("Output of _printf:\n");
    _printf("%s\n", "Hello, World!");  // Your _printf function
    print_separator();
    printf("Output of printf:\n");
    printf("%s\n", "Hello, World!");  // Standard printf

    print_separator();
    printf("Output of _printf:\n");
    _printf("%s\n", "");               // Your _printf function
    print_separator();
    printf("Output of printf:\n");
    printf("%s\n", "");               // Standard printf

    print_separator();
    printf("Output of _printf:\n");
    char str1[] = {'H', 'e', 'l', 'l', 'o'};
    _printf("%s\n", str1);            // Your _printf function
    print_separator();
    printf("Output of printf:\n");
    printf("%s\n", str1);            // Standard printf

    // Test cases for %c
    print_separator();
    printf("Output of _printf:\n");
    _printf("%c\n", 'A');              // Your _printf function
    print_separator();
    printf("Output of printf:\n");
    printf("%c\n", 'A');              // Standard printf

    print_separator();
    printf("Output of _printf:\n");
    _printf("%c\n", '\0');             // Your _printf function
    print_separator();
    printf("Output of printf:\n");
    printf("%c\n", '\0');             // Standard printf

    print_separator();
    printf("Output of _printf:\n");
    _printf("This is a tab: \t and this is a newline: \n");  // Your _printf function
    print_separator();
    printf("Output of printf:\n");
    printf("This is a tab: \t and this is a newline: \n");  // Standard printf

    print_separator();
    printf("Output of _printf:\n");
    _printf("This is a format specifier without argument: %c\n");  // Your _printf function
    print_separator();
    printf("Output of printf:\n");
    printf("This is a format specifier without argument: %c\n");  // Standard printf

    print_separator();
    printf("Output of _printf:\n");
    _printf("This is a format specifier with extra arguments: %c %c\n", 'A', 'B');  // Your _printf function
    print_separator();
    printf("Output of printf:\n");
    printf("This is a format specifier with extra arguments: %c %c\n", 'A', 'B');  // Standard printf

    printf("================================================================================================================");
    printf("================================================================================================================");
    printf("================================================================================================================");
    printf("================================================================================================================");
    printf("================================================================================================================");
    printf("================================================================================================================\n");

     char p = 'c';
    char s[] = "hello \n";

    printf("-------------our_printf-------------------\n");
    int len = _printf("%s\n", s);
    printf("Return value of _printf: %d\n", len);

    printf("-------------printf-------------------\n");
    len = printf("%s\n", s);
    printf("Return value of printf: %d\n", len);

    _putchar('\n');
    _putchar (len / 10 + 48);
    _putchar (len % 10 + 48);
    _putchar('\n');

    // Test cases for %s
    len = _printf("%s\n", "Hello, World!");  // Your _printf function
    printf("Return value of _printf: %d\n", len);

    len = printf("%s\n", "Hello, World!");  // Standard printf
    printf("Return value of printf: %d\n", len);

    len = _printf("%s\n", "");               // Your _printf function
    printf("Return value of _printf: %d\n", len);

    len = printf("%s\n", "");               // Standard printf
    printf("Return value of printf: %d\n", len);

    char *str = NULL;
    len = _printf("%s\n", str);              // Your _printf function
    printf("Return value of _printf: %d\n", len);

    len = printf("%s\n", str);              // Standard printf
    printf("Return value of printf: %d\n", len);

    char str2[] = {'H', 'e', 'l', 'l', 'o'};
    len = _printf("%s\n", str2);            // Your _printf function
    printf("Return value of _printf: %d\n", len);

    len = printf("%s\n", str2);            // Standard printf
    printf("Return value of printf: %d\n", len);

    // Test cases for %c
    len = _printf("%c\n", 'A');              // Your _printf function
    printf("Return value of _printf: %d\n", len);

    len = printf("%c\n", 'A');              // Standard printf
    printf("Return value of printf: %d\n", len);

    len = _printf("%c\n", '\0');             // Your _printf function
    printf("Return value of _printf: %d\n", len);

    len = printf("%c\n", '\0');             // Standard printf
    printf("Return value of printf: %d\n", len);

    len = _printf("This is a tab: \t and this is a newline: \n");  // Your _printf function
    printf("Return value of _printf: %d\n", len);

    len = printf("This is a tab: \t and this is a newline: \n");  // Standard printf
    printf("Return value of printf: %d\n", len);

    len = _printf("This is a format specifier without argument: %c\n");  // Your _printf function
    printf("Return value of _printf: %d\n", len);

    len = printf("This is a format specifier without argument: %c\n");  // Standard printf
    printf("Return value of printf: %d\n", len);

    len = _printf("This is a format specifier with extra arguments: %c %c\n", 'A', 'B');  // Your _printf function
    printf("Return value of _printf: %d\n", len);

    len = printf("This is a format specifier with extra arguments: %c %c\n", 'A', 'B');  // Standard printf
    printf("Return value of printf: %d\n", len);

    printf("----------------------------------------------------------------\n----------------------------------------------------------------\n");

    _printf("%% %% %% %s %s \n", "hello", "world");

    return (0);
}
