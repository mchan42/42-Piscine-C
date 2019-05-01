/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 17:14:42 by mchan             #+#    #+#             */
/*   Updated: 2019/04/02 15:26:40 by mchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int		index;
	int		nb;
	int		neg_check;

	index = 0;
	nb = 0;
	neg_check = 0;
	while (str[index] >= 0 && str[index] <= 32)
		index++;
	if (str[index] == '-')
		neg_check = 1;
	if (str[index] == '-' || str[index] == '+')
		index++;
	while (str[index] >= '0' && str[index] <= '9')
	{
		nb = 10 * nb + (str[index] - '0');
		index++;
	}
	if (neg_check == 1)
		return (-nb);
	return (nb);
}
