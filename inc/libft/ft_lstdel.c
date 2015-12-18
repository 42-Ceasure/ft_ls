/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglavieu <cglavieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/02 19:11:26 by cglavieu          #+#    #+#             */
/*   Updated: 2015/12/18 20:19:57 by cglavieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list	*tmp;
	t_list	*next;

	if (alst || del)
	{
		tmp = *alst;
		while (tmp->next)
		{
			next = tmp->next;
			(*del)(tmp->content, tmp->content_size);
			free(tmp);
			tmp = next;
		}
		(*del)(tmp->content, tmp->content_size);
		*alst = NULL;
	}
}
