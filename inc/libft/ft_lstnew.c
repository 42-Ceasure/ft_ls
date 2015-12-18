/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglavieu <cglavieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/02 15:29:34 by cglavieu          #+#    #+#             */
/*   Updated: 2015/12/18 20:20:25 by cglavieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new_lst;

	if (!(new_lst = (t_list*)malloc(sizeof(t_list*))))
		return (NULL);
	if (!content || !content_size)
	{
		new_lst->content = NULL;
		new_lst->content_size = 0;
	}
	else
	{
		new_lst->content = ft_memalloc(content_size);
		new_lst->content = ft_memcpy(new_lst->content, content, content_size);
		new_lst->content_size = content_size;
	}
	return (new_lst);
}
