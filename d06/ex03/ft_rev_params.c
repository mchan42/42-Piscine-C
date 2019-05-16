/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 18:41:30 by mchan             #+#    #+#             */
/*   Updated: 2019/04/03 18:46:09 by mchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char *argv[])
{
	int		index;
	int		params;

	index = 0;
	params = argc - 1;
	while (params > 0)
	{
		while (argv[params][index])
		{
			ft_putchar(argv[params][index]);
			index++;
		}
		ft_putchar('\n');
		params--;
		index = 0;
	}
}
