/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 18:12:23 by mchan             #+#    #+#             */
/*   Updated: 2019/04/03 18:38:19 by mchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char *argv[])
{
	int		index;
	int		params;

	index = 0;
	params = 1;
	while (params < argc)
	{
		while (argv[params][index])
		{
			ft_putchar(argv[params][index]);
			index++;
		}
		ft_putchar('\n');
		params++;
		index = 0;
	}
}
