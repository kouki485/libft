/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkohki <kkohki@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 03:07:54 by kkohki            #+#    #+#             */
/*   Updated: 2021/10/20 06:49:25 by kkohki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_numlen(int m)
{
	size_t	str_len;

	str_len = 1;
	while (m >= 10)
	{
		m /= 10;
		str_len++;
	}
	return (str_len);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	str_len;

	str_len = ft_numlen(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	str = (char *)malloc(str_len + 1);
	if (!str)
		return (NULL);
	str[str_len--] = '\0';
	str[str_len] = n % 10 + '0';
	while (n >= 10)
	{
		n /= 10;
		str[--str_len] = n % 10 + '0';
	}
	if (n < 0)
		return (ft_strjoin("-", ft_itoa(-n)));
	return (str);
}
