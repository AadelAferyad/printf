#include "main.h"
#include <stdio.h>

int main(void)
{
	int len_1, len_2;

	/* ===========> %S <=========== */
	printf("----------------------\n");
	printf("------> S CASES <-----\n");
	printf("----------------------\n");
	/* Test 1: Argument with non-printable characters */
	len_1 = printf("Expected output:   Best\\x0ASchool\n");
	len_2 = _printf("Current output:    %S\n", "Best\nSchool");
	printf("Expected length:    [%d]\n", len_1);
	printf("Current length:     [%d]\n", len_2);
	len_1 = printf("Expected output:   Hello\\x09World\\x0A\n");
	len_2 = _printf("Current output:    %S\n", "Hello\tWorld\n");
	printf("Expected length:    [%d]\n", len_1);
	printf("Current length:     [%d]\n", len_2);
	/* Test 2: Argument with only printable characters */
	len_1 = printf("Expected output:   %s\n", "Hello World!");
	len_2 = _printf("Current output:    %S\n", "Hello World!");
	printf("Expected length:    [%d]\n", len_1);
	printf("Current length:     [%d]\n", len_2);
	/* Test 3: Empty argument */
	len_1 = printf("Expected output:   %s\n", "");
	len_2 = _printf("Current output:    %S\n", "");
	printf("Expected length:    [%d]\n", len_1);
	printf("Current length:     [%d]\n", len_2);
	/* Test 4: NULL argument */
	len_1 = printf("Expected output:   %s\n", NULL);
	len_2 = _printf("Current output:    %S\n", NULL);
	printf("Expected length:    [%d]\n", len_1);
	printf("Current length:     [%d]\n", len_2);
	
	/* ===========> %r <=========== */
	printf("----------------------\n");
	printf("------> r CASES <-----\n");
	printf("----------------------\n");

	/* Test 1: Reverse string*/
	len_1 = _printf("%r\n", "Reverse it");
	printf("String len: %d\n", len_1);
	/* Test 1: NULL argument*/
	len_2 = _printf("%r\n", NULL);
	printf("String len: %d\n", len_2);

	/* ===========> %R <=========== */
	printf("----------------------\n");
	printf("---> R (13) CASES <---\n");
	printf("----------------------\n");

	/*Test case for NULL string input:*/
	len_1 = printf("Expected output: %s\n", NULL);
	len_2 = _printf("Current output:  %R\n", NULL);
	printf("Expected length: [%d]\n", len_1);
	printf("Current length:  [%d]\n", len_2);

	/*Test case for empty string input:*/
	len_1 = printf("Expected output: %s\n", "");
	len_2 = _printf("Current output:  %R\n", "");
	printf("Expected length: [%d]\n", len_1);
	printf("Current length:  [%d]\n", len_2);

	/*Test case for lowercase string input:*/
	len_1 = printf("Expected output: %s\n", "hello");
	len_2 = _printf("Current output:  %R\n", "hello");
	printf("Expected length: [%d]\n", len_1);
	printf("Current length:  [%d]\n", len_2);

	/*Test case for uppercase string input:*/
	len_1 = printf("Expected output: %s\n", "WORLD");
	len_2 = _printf("Current output:  %R\n", "WORLD");
	printf("Expected length: [%d]\n", len_1);
	printf("Current length:  [%d]\n", len_2);

	/*Test case for mixed case string input:*/
	len_1 = printf("Expected output: %s\n", "HeLLo WoRLd");
	len_2 = _printf("Current output:  %R\n", "HeLLo WoRLd");
	printf("Expected length: [%d]\n", len_1);
	printf("Current length:  [%d]\n", len_2);


	return (0);
}
