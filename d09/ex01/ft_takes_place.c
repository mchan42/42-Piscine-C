/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 21:47:56 by mchan             #+#    #+#             */
/*   Updated: 2019/04/04 23:47:48 by mchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	int		h;

	h = hour;
	if (hour > 12)
		h = hour % 12;
	if (hour == 0)
		h = 12;
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	if (hour < 11)
		printf("%d.00 A.M. AND %d.00 A.M.\n", h, (h + 1) % 12);
	else if (hour == 11)
		printf("%d.00 A.M. AND %d.00 P.M.\n", h, (h + 1));
	else if (hour == 23)
		printf("%d.00 P.M. AND %d.00 A.M.\n", h, (h + 1));
	else if (hour == 24)
		printf("%d.00 A.M. AND %d.00 A.M.\n", (h + 12), (h + 1));
	else
		printf("%d.00 P.M. AND %d.00 P.M.\n", h, (h + 1) % 12);
}
