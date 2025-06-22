
#include "libft.h"

char upperfirst(unsigned int index, char c)
{
	if (index == 0)
		return (ft_toupper(c));
	return (ft_tolower(c));
}

int	main(void)
{
	char *s = "emre kart okula gitti";
	char *res = ft_strmapi(s, upperfirst);
	if (res)
	{
		printf("orjinal: %s\n", s);
		printf("yeni: %s\n", res);
		free(res);
	}
	return (0);
}
