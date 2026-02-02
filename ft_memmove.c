#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *d;
	unsigned char *s;
	size_t	i;

	i = 0;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;

	if (!dest && !src)
		return (NULL);
	
	if (d < s)
	{
		while(i < n)
		{
			dst[i] = src[i];
			i++;
		}
	}
	else if (d > s)
	{
		while(n > 0)
		{
			d[n - 1] = s[n - 1];
			n--;
		}
	}
	return (dest);
}
