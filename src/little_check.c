/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   little_check.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglavieu <cglavieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/23 12:20:32 by cglavieu          #+#    #+#             */
/*   Updated: 2015/12/18 19:32:41 by cglavieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int		little_check(char *str, t_opt opt)
{
	t_stat	st;

	lstat(str, &st);
	if (S_ISLNK(st.st_mode) && opt.l)
		return (1);
	return (0);
}
