/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglavieu <cglavieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 20:31:19 by cglavieu          #+#    #+#             */
/*   Updated: 2015/12/18 20:27:55 by cglavieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	unsigned int	i;
	size_t			len;

	if (!s)
		return (0);
	i = 0;
	while (ft_isspace(s[i]))
		i++;
	len = ft_strlen(s) - 1;
	while (len && ft_isspace(s[len]))
		len--;
	if (len < i)
		return (ft_strdup(""));
	return (ft_strsub(s, i, len - (size_t)i + 1));
}
