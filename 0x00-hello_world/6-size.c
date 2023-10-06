#include <stdio.h>
/**
 * main - A program that print the size of various computer types
 *
 * Return: 0 (Success)
 *
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %lu 1  byte(s)\n", sizeof(a));
	printf("size of an int: %lu 4 byte(s)\n", sizeof(b));
	printf("size of a long int: %lu 8 byte(s)\n", sizeof(c));
	printf("size of a long long int: %lu  8 byte(s)\n", sizeof(d));
	printf("size of a float: %lu 4 byte(s)\n", sizeof(e));
	return (0);
}
