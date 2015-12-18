/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_new_lst.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglavieu <cglavieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/23 12:40:09 by cglavieu          #+#    #+#             */
/*   Updated: 2015/12/18 19:35:18 by cglavieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

t_ls	*new_lst(t_ls *lst)
{
	t_ls	*new_lst;

	new_lst = (t_ls*)malloc(sizeof(t_ls));
	new_lst->fname = NULL;
	new_lst->next = lst;
	return (new_lst);
}
