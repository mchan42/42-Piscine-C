/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 14:33:12 by mchan             #+#    #+#             */
/*   Updated: 2019/04/05 14:40:24 by mchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_antidote(int i, int j, int k)
{
	if ((i > k && i < j) || (i > j && i < k))
		return (i);
	if ((j > k && j < i) || (j > i && j < k))
		return (j);
	if ((k > i && k < j) || (k > j && k < i))
		return (k);
	return (0);
}
