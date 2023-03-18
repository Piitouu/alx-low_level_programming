#include <stdio.h>

/**
 * main - min fnc
 *
 * Return: always 0 (succes)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
printf("Size of a char: %lu byte(s)", sizeof(a));
printf("Size of int: %lu byte(s)", sizeof(b));
printf("Size of long int: %lu byte(s)", sizeof(c));
printf("Size of long long int: %lu byte(s)", sizeof(d));
printf("Size of float: %lu byte(s)", sizeof(f));
return (0);
}
