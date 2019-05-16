/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 16:53:19 by mchan             #+#    #+#             */
/*   Updated: 2019/04/09 20:09:22 by mchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int		index;
	int		*dst;

	index = 0;
	dst = (int*)malloc(sizeof(dst) * length);
	while (index < length)
	{
		dst[index] = (*f)(tab[index]);
		index++;
	}
	return (dst);
}
