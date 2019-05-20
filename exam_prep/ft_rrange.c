/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 14:20:12 by mchan             #+#    #+#             */
/*   Updated: 2019/04/14 23:51:29 by mchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int start, int end)
{
	int		*tab;
	int		i;

	if (start >= end)
		return (NULL);
	i = 0;
	tab = (int*)malloc(sizeof(*tab) * (end - start + 1));
	while (end >= start)
	{
		tab[i] = end;
		i++;
		end--;
	}
	return (tab);
}
