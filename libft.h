#ifndef LIBFT_H_   
#define LIBFT_H_
#include <string.h>

int	ft_isdigit(int c);
int	ft_isalpha(int c);
int	ft_isalnum(int c);
int     ft_isascii(int c);
void	*ft_memcpy(void *dest, const void *src, size_t n);
int     ft_atoi(const char *str);
char	*ft_substr(char const *s, unsigned int start,size_t len);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

#endif
