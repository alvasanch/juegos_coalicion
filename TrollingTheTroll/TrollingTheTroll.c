#include <unistd.h>

void	change_vowel(char *str)
{
	int	i;

	i = 0;
	while(str[i])
		{
			if((str[i] == 'A') || (str[i] == 'E') || (str[i] == 'O') || (str[i] == 'U'))
			{
				str[i] = 'I';
			}
			else if((str[i] == 'a') || (str[i] == 'e') || (str[i] == 'o') || (str[i] == 'u'))
			{
				str[i] = 'i';
			}
		write(1, &str[i], 1);
		i++;
		}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		change_vowel(argv[1]);
	}
}
