/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglavieu <cglavieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/02 19:06:46 by cglavieu          #+#    #+#             */
/*   Updated: 2015/12/18 20:27:36 by cglavieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*tmp;

	if (alst != NULL && (*del) != NULL)
	{
		tmp = *alst;
		(*del)(tmp->content, tmp->content_size);
		(tmp->next) = NULL;
		ft_memdel((void**)alst);
	}
}
