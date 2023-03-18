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
printf("Size of a char: %1u byte(s)", sizeof(a));
printf("Size of int: %1u byte(s)", sizeof(b));
printf("Size of long int: %1u byte(s)", sizeof(c));
printf("Size of long long int: %1u byte(s)", sizeof(d));
printf("Size of float: %1u byte(s)", sizeof(f));
return (0);
}
