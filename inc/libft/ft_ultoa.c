/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglavieu <cglavieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/16 13:26:07 by cglavieu          #+#    #+#             */
/*   Updated: 2015/12/18 20:23:50 by cglavieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_ultoa(unsigned long n)
{
	char				buff[22];
	char				*str;
	int					i;
	unsigned long		ntmp;

	i = 0;
	ntmp = n;
	while (ntmp > 0)
	{
		buff[i++] = (ntmp % 10) + 48;
		ntmp = ntmp / 10;
	}
	str = ft_memalloc((unsigned long)i + 1);
	if (n == 0)
		str[0] = '0';
	while (--i >= 0)
		str[ntmp++] = buff[i];
	return (str);
}
