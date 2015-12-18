/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_space_device.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglavieu <cglavieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 04:02:15 by cglavieu          #+#    #+#             */
/*   Updated: 2015/12/18 19:35:07 by cglavieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	ft_space_device(t_ind ind)
{
	size_t	i;

	i = 0;
	while (i < ind.major + ind.minor)
	{
		ft_putchar(' ');
		i++;
	}
}
