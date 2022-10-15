#include <stdio.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	size_t		j;
	char		*p;

	p = (char *)(malloc(sizeof(*s) * (len + 1)));
	i = 0;
	j = 0;
	if (!p)
	{
		return (0);
	}
	while (s[i])
	{
		if (i > start && j < len)
		{
			p[j] = s[i];
			j++;
		}
		i++;
	}
	p[j] = '\0';
	return (p);
}
