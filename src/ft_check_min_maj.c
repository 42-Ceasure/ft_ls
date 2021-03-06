/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_min_maj.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglavieu <cglavieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 02:26:00 by cglavieu          #+#    #+#             */
/*   Updated: 2015/12/18 19:38:12 by cglavieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	ft_check_min_maj(t_stat buff, t_ind *ind)
{
	char	*tmp;

	if (S_ISBLK(buff.st_mode) || S_ISCHR(buff.st_mode))
	{
		tmp = ft_itoa((int)
			((char)((int32_t)(((u_int32_t)(buff.st_rdev) >> 24) & 0xff))));
		if (ind->major < ft_strlen(tmp))
			ind->major = ft_strlen(tmp);
		free(tmp);
		tmp = ft_itoa((int)((char)buff.st_rdev));
		if (ind->minor < ft_strlen(tmp))
			ind->minor = ft_strlen(tmp);
		free(tmp);
	}
}
