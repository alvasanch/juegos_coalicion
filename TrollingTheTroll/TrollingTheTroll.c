#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if(argc == 2)
	{
		while(argv[1][i])
		{
			if((argv[1][i] == 'A') || (argv[1][i] == 'E') || (argv[1][i] == 'O') || (argv[1][i] == 'U'))
			{
				argv[1][i] = 'I';
			}
			else if((argv[1][i] == 'a') || (argv[1][i] == 'e') || (argv[1][i] == 'o') || (argv[1][i] == 'u'))
			{
				argv[1][i] = 'i';
			}
		write(1, &argv[1][i], 1);
		i++;
		}
	}
}
