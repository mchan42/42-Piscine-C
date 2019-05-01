/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 21:41:17 by mchan             #+#    #+#             */
/*   Updated: 2019/03/30 22:26:24 by mchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int		i;
	int		answer;

	i = 1;
	answer = 1;
	if (nb > 1 && nb <= 12)
	{
		answer *= nb * ft_recursive_factorial(nb - 1);
		return (answer);
	}
	if (nb < 0 || nb > 12)
	{
		return (0);
	}
	if (nb == 1 || nb == 0)
	{
		return (1);
	}
}
