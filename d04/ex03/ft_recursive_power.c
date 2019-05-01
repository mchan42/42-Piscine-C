/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 22:46:01 by mchan             #+#    #+#             */
/*   Updated: 2019/03/30 22:53:54 by mchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	int		i;
	int		answer;

	i = 1;
	answer = 1;
	if (i <= power)
	{
		answer *= nb * ft_recursive_power(nb, power - 1);
		return (answer);
	}
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
}
