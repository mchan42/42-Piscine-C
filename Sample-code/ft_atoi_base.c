/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 01:12:26 by mchan             #+#    #+#             */
/*   Updated: 2019/10/17 06:24:17 by mchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_base(char c, int str_base)
{
	char base[] = "0123456789abcdef";
	char base2[] = "0123456789ABCDEF";
	int count = 0;
	while (count < str_base)
	{
		if (base[count] == c || base2[count] == c)
			return (1);
		count++;
	}
	return (0);
}

int		ft_atoi_base(const char *str, int str_base)
{
	int i = 0;
	int sign = 1;
	int num = 0;
	if (str[0] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] && is_base(str[i], str_base))
	{
		if (str[i] >= '0' && str[i] <= '9')
			num = num * str_base + (str[i] - 48);
		if (str[i] >= 'A' && str[i] <= 'F')
			num = num * str_base + (str[i] - 55);
		if (str[i] >= 'a' && str[i] <= 'f')
			num = num * str_base + (str[i] - 87);
		i++;
	}
	return (num * sign);
}
