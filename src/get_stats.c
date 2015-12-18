/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_stats.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglavieu <cglavieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 16:08:03 by cglavieu          #+#    #+#             */
/*   Updated: 2015/12/18 19:33:07 by cglavieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

t_ls	*get_stats(t_ls *lst, t_opt opt)
{
	t_ls	*tmp;
	int		ret;

	tmp = lst;
	while (tmp)
	{
		if ((ret = lstat(tmp->path, &tmp->st)) == -1)
			ft_error(tmp->fname, 0);
		if (ret == -1)
			tmp = ft_lst_del(tmp);
		else
			tmp = tmp->next;
	}
	if (opt.t)
		ft_time_sort(&lst, opt.r1);
	return (lst);
}
