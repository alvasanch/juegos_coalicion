#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int	palabra_prohibida(char *s1, char *s2)
{
	unsigned long	i;
	int	j;

	i = 0;
	j = 0;
	while(s1[i])
	{
		while(s2[j])
		{
			if(s1[i] == s2[j])
			{
				i++;
				break;
			}
			j++;
		}
		if(s2[j] == '\0')
			return(0);
	}
	return(1);
}

char	*cambiar_vocal(char *str)
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
		i++;
		}
	return(str);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		if(palabra_prohibida(argv[1], argv[2]))
		{
			printf("%s", argv[2]);
		}
		else
		{
			printf("%s", cambiar_vocal(argv[2]));
		}
	}
	return(0);
}
