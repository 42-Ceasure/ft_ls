/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglavieu <cglavieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 18:13:17 by cglavieu          #+#    #+#             */
/*   Updated: 2015/12/18 20:22:36 by cglavieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char		*dest;
	const char	*s;
	size_t		n;
	size_t		dlen;

	dest = dst;
	s = src;
	n = size;
	while (n-- != 0 && *dest != '\0')
		dest++;
	dlen = dest - dst;
	n = size - dlen;
	if (n == 0)
		return (dlen + strlen(s));
	while (*s)
	{
		if (n != 1)
		{
			*dest++ = *s;
			n--;
		}
		s++;
	}
	*dest = '\0';
	return (dlen + (s - src));
}
