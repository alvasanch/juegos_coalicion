#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

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
		printf("%s", cambiar_vocal(argv[1]));
	}
	return(0);
}
