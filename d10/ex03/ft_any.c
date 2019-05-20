/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 17:22:11 by mchan             #+#    #+#             */
/*   Updated: 2019/04/09 18:03:59 by mchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_any(char **tab, int (*f)(char*))
{
	int		index;

	index = 0;
	while (tab[index] != '\0')
	{
		if ((*f)(tab[index]) == 1)
			return (1);
		index++;
	}
	return (0);
}