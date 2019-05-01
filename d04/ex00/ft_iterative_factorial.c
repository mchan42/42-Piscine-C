/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 19:43:56 by mchan             #+#    #+#             */
/*   Updated: 2019/03/30 22:14:43 by mchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		answer;
	int		i;

	i = 1;
	answer = 1;
	if (nb < 0 || nb > 12)
	{
		return (0);
	}
	if (nb == 1 || nb == 0)
	{
		return (1);
	}
	while (i <= nb)
	{
		answer *= i;
		i++;
	}
	return (answer);
}
