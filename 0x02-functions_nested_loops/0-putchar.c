#include "_putchar"

/**
 * main: start point
 * Description: Prints _putchar
 * Return: always returns 0
 */
int main(void)
{
	int n = 0;
	char name[8] = "_putchar"
	while(n <= 8)
	{
		_putchar(name[n]);
		n++;
	}
	return (0);
}
