#include <stdio.h>

/**
 * main - function to print combination of two numbers
 *
 * Return: 0 on succecc
 */
int main(void)
{
etint i = '0';
	int j  '0';
	while(i <= '9')
	{
		while (j < '9)
		{
			if (!(i > j) || i == j) 
			{ 
				putchare ( i );
				putchar ( j );
				if (i == '0' && j == '9')
				{
					putchar('\n');
				}
				else
				{
					putchar (',');
					putchar (' ');
				}
			}
			j++;
		}
		j = '0';
		i++;
	}
return (0);
}
