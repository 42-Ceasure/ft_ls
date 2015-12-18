/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_min_maj.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglavieu <cglavieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 02:16:09 by cglavieu          #+#    #+#             */
/*   Updated: 2015/12/18 19:45:34 by cglavieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	next_min_maj(t_stat buff, t_ind ind)
{
	size_t	i;
	char	*tmp;

	tmp = ft_itoa((int)((char)buff.st_rdev));
	i = ft_strlen(tmp);
	while (i < ind.minor)
	{
		ft_putchar(' ');
		i++;
	}
	ft_putstr(tmp);
	free(tmp);
	ft_putchar(' ');
}

void	aff_min_maj(t_stat buff, t_ind ind)
{
	char	*tmp;
	size_t	i;

	tmp = ft_itoa((int)
		((char)((int32_t)(((u_int32_t)(buff.st_rdev) >> 24)
		& 0xff))));
	i = ft_strlen(tmp);
	ft_putstr(" ");
	while (i <= ind.major)
	{
		ft_putchar(' ');
		i++;
	}
	ft_putstr(tmp);
	free(tmp);
	ft_putstr(",");
	ft_putstr(" ");
	next_min_maj(buff, ind);
}
