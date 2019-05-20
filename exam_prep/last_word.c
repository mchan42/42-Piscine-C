/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 13:19:07 by mchan             #+#    #+#             */
/*   Updated: 2019/04/11 13:34:19 by mchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char *argv[])
{
	int		i;
	char	*c;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] <= 32 && argv[1][i + 1] > 32)
				c = &argv[1][i + 1];
			i++;
		}
		i = 0;
		while (c && c[i] > 32)
		{
			write(1, &c[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}