#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;

	if (!dst || !src)
		return (0);
	i = 0;
	while (i < n)
	{
		*(u_char *)(dst + i) = *(u_char *)(src + i);
		if (*(u_char *)(src + i) == (u_char)c)
			return (dst + i + 1);
		i++;
	}
	return (0);
}
