/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 18:00:07 by mchan             #+#    #+#             */
/*   Updated: 2019/04/05 14:24:39 by mchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char *argv[])
{
	int		index;

	argc = 1;
	index = 0;
	while (argv[0][index])
	{
		ft_putchar(argv[0][index]);
		index++;
	}
	return (0);
}
