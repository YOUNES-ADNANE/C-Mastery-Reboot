#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	int age;

	write (1, "Enter you'r age: \n", 18);
	scanf("%d", &age);

	if ( age >= 18)
	{
		write (1, "you'r an adult.\n", 17);
	}

	else
	{
		write (1, "You'r an minor :)\n", 18);
	}

	return 0;
}
