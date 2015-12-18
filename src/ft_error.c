/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglavieu <cglavieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/23 13:49:27 by cglavieu          #+#    #+#             */
/*   Updated: 2015/12/18 19:36:33 by cglavieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	ft_error(const char *str, int str_errno)
{
	char	tmp[9];

	ft_strcpy(tmp, "fts_open\0");
	if (!str[0])
		str = tmp;
	if (str_errno == 0)
	{
		ft_putstr_fd("ls: ", 2);
		perror(str);
	}
	else
	{
		ft_putstr_fd("ls: ", 2);
		ft_putstr_fd(str, 2);
		ft_putstr_fd(": ", 2);
		ft_putstr_fd(strerror(str_errno), 2);
		ft_putstr_fd("\n", 2);
	}
	if (ft_strcmp(str, "fts_open\0") == 0)
		exit(0);
}
