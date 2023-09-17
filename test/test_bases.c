#include "../main.h"
#include <stdio.h>
#include <limits.h>
#include <assert.h>

int main()
{
	int x = 0;
	int *p = &x;
	int len_1, len_2;

	// printf("----------------------\n");
	// printf("---> BINARY CASES <---\n");
	// printf("----------------------\n");
	// len_1 = printf("%b\n", 0);
	// len_2 = _printf("%b\n", 0);

	// len_2 = printf("%b\n", 255);
	// len_1 = _printf("%b\n", 255);

	// len_1 = printf("%b\n", UINT_MAX);
	// len_2 = _printf("%b\n", UINT_MAX);

	// _printf("%b\n", 98);
	//     // Test case 1
    // _printf("%b", 1024);

    // // Test case 2
    // _printf("%b", -1024);

    // // Test case 3
    // _printf("%b", 0);

    // // Test case 4
    // _printf("%b", UINT_MAX);

    // // Test case 5
    // long int l = UINT_MAX + 1024;
    // _printf("%b", l);

    // // Test case 6
    // _printf("There is %b bytes in %b KB\n", 1024, 1);

    // // Test case 7
    // _printf("%b - %b = %b\n", 2048, 1024, 1024);

    // // Test case 8
    // long int res = INT_MAX * 2;
    // _printf("%b + %b = %b\n", INT_MAX, INT_MAX, res);

	// printf("----------------------\n");
	// printf("----> OCTAL CASES <---\n");
	// printf("----------------------\n");
	// len_1 = printf("%o\n", 0);
	// len_2 = _printf("%o\n", 0);

	// len_2 = printf("%o\n", -255);
	// len_1 = _printf("%o\n", -255);
	// assert(len_1 == len_2);

	// len_1 = printf("%o\n", UINT_MAX);
	// len_2 = _printf("%o\n", UINT_MAX);
	// assert(len_1 == len_2);

	//  printf("----------------------\n");
	//  printf("-----> hex CASES <----\n");
	//  printf("----------------------\n");
	//  len_1 = printf("%x\n", 0);
	//  len_2 = _printf("%x\n", 0);
	//  assert(len_1 == len_2);
	//  len_2 = printf("%x\n", 255);
	//  len_1 = _printf("%x\n", 255);
	//  assert(len_1 == len_2);
	//  len_1 = printf("%x\n", UINT_MAX);
	//  len_2 = _printf("%x\n", UINT_MAX);
	//  assert(len_1 == len_2);

	//  printf("----------------------\n");
	//  printf("-----> HEX CASES <----\n");
	//  printf("----------------------\n");
	//  len_1 = printf("%X\n", 0);
	//  len_2 = _printf("%X\n", 0);
	//  assert(len_1 == len_2);

	//  len_2 = printf("%X\n", 255);
	//  len_1 = _printf("%X\n", 255);
	//  assert(len_1 == len_2);

	//  len_1 = printf("%X\n", UINT_MAX);
	//  len_2 = _printf("%X\n", UINT_MAX);
	//  assert(len_1 == len_2);

	 printf("----------------------\n");
	 printf("----> ADDRS CASES <---\n");
	 printf("----------------------\n");

	 len_1 = printf("%p\n", p);
	 len_2 = _printf("%p\n", p);

	 len_1 = printf("%p\n", (void *)0);
	 len_2 = _printf("%p\n", (void *)0);
	return (0);
}
