#include <unistd.h>
#include <string.h>
#include <stdio.h>

int	palabra_prohibida(char *s1, char *s2)
{
	int	i;
	int lengh;
	int	j;

	i = 0;
	lengh = strlen(s2);
	while(s1[i])
	{
		i++;
		if(s1[i] == s2[i])
		{
			j = 1;
			while(s2[j])
			{
				j++;
				if(s1[i + j] != s2[j])
				{
					break;
				}
			}
			if(s2[j])
			{
				return(1);
			}
		}
	}
	return(0);
}

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
