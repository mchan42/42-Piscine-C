/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 00:23:31 by mchan             #+#    #+#             */
/*   Updated: 2019/04/09 19:46:40 by mchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		letter_count(char c)
{
	int		repeat;

	if (c >= 'A' && c <= 'Z')
		repeat = c - 'A' + 1;
	else if (c >= 'a' && c <= 'z')
		repeat = c - 'a' + 1;
	else
		repeat = 1;
	return (repeat);
}

int		main(int argc, char *argv[])
{
	int		rep;
	int		i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			rep = letter_count(argv[1][i]);
			while (rep > 0)
			{
				write(1, &argv[1][i], 1);
				rep--;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
