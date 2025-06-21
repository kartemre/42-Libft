#include <stdio.h>
#include <stdlib.h>
#include <limits.h> // INT_MAX, INT_MIN
#include "libft.h"

int	main(void)
{
	int		values[] = {0, 1, -1, 42, -42, INT_MAX, INT_MIN};
	int		i = 0;
	char	*str;

	while (i < (int)(sizeof(values) / sizeof(values[0])))
	{
		str = ft_itoa(values[i]);
		if (!str)
			printf("ft_itoa(%d) → malloc failed\n", values[i]);
		else
		{
			printf("ft_itoa(%d) → \"%s\"\n", values[i], str);
			free(str);
		}
		i++;
	}
	return (0);
}
