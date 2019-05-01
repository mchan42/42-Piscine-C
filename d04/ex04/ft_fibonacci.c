/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 22:56:14 by mchan             #+#    #+#             */
/*   Updated: 2019/03/31 14:40:33 by mchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_fibonacci(int index)
{
	int		answer;

	answer = 0;
	if (index < 0)
	{
		return (-1);
	}
	if (index == 0)
	{
		return (0);
	}
	if (index == 1)
	{
		return (1);
	}
	else
	{
		answer += ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	}
	return (answer);
}

int main()
{
	int a;
	a = ft_fibonacci(0);
	printf("%d\n", a);
}
