/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 13:16:41 by mchan             #+#    #+#             */
/*   Updated: 2019/05/01 14:35:58 by mchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int     main(int argc, char *argv[])
{
    int     i;
    int     nb;

    if (argc == 2)
    {
        i = 2;
        nb = atoi(argv[1]);
        if (nb == 1)
            printf("1");
        while (nb >= i)
        {
            if (nb % i == 0)
            {
                printf("%d", i);
                if (nb != i)
					printf("*");
                nb /= i;
                i = 1;
            }
			i++;
        }
    }
    printf("\n");
    return (0);
}
