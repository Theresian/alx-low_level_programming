#include <stdio.h>
/**
 * main-print out sizess of data types in c
 * code by bwave ict
 * Return: 0
*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("size of an float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
