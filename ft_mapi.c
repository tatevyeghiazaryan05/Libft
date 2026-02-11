#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, chari))
{
	char	*res;
	unsigned int	i;
	size_t		len;

	i = 0;
	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	while(s[i] != '\0')
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
