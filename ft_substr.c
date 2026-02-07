#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	string_len;
	char	*substring;
	
	i = 0;
	string_len = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start >= string_len)
		return (ft_strdup(""));
	if (len > string_len - start)
	       len = string_len - start;
	substring = malloc(sizeof(char) * (len + 1));
	if (!substring)
		return (NULL);
	while(s[i + start] != '\0' && i < len)
	{
		substring[i] = s[i + start];
		i++;
	}
	substring[i] = '\0';
	return (substring);
}
