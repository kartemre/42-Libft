#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void	print_result(char **res)
{
	int i = 0;

	if (!res)
	{
		printf("Result is NULL\n");
		return ;
	}
	while (res[i])
	{
		printf("res[%d] = \"%s\"\n", i, res[i]);
		i++;
	}
	printf("res[%d] = NULL\n", i);
}

int	main(void)
{
	char	*input = "hello!";
	char	delimiter = ' '; // ASCII 32

	char **result = ft_split(input, delimiter);

	print_result(result);

	// Free memory
	int i = 0;
	while (result && result[i])
		free(result[i++]);
	free(result);

	return (0);
}
