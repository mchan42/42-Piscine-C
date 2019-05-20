/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 21:01:58 by lusanche          #+#    #+#             */
/*   Updated: 2019/05/20 14:55:03 by mchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int		will_it_work(char array[9][9], int a, int b)
{
	int i;
	int j;
	int bottom_right_i;
	int bottom_right_j;

	i = 0;
	j = 0;
	bottom_right_i = i + 2;
	bottom_right_j = j + 2;
	while (i < 9 && j < 9)
	{
		if (array[a][b] == array[a][j] && b != j)
		{
			return (0);
		}
		j++;
		if (array[a][b] == array[i][b] && a != i)
		{
			return (0);
		}
		i++;
	}
	i = a / 3 * 3;
	j = b / 3 * 3;
	while (i <= bottom_right_i && j <= bottom_right_j)
	{
		while (j <= bottom_right_j)
		{
			if (array[a][b] == array[i][j] && !(b == j && a == i))
			{
				return (0);
			}
			j++;
		}
		i++;
		j = b / 3 * 3;
	}
	return (1);
}

int		solve(char array[9][9])
{
	int		x;
	int		y;
	char	i;

	x = 0;
	y = 0;
	i = '1';
	while (x < 9)
	{
		if (i > '9')
		{
			return (0);
		}
		if (array[x][y] != '.')
		{
			y++;
			if (y == 9)
			{
				y = 0;
				x++;
			}
		}
		else if (array[x][y] == '.')
		{
			array[x][y] = i;
			if (will_it_work(array, x, y))
			{
				if (solve(array))
				{
					return (1);
				}
				else
				{
					array[x][y] = '.';
					i++;
				}
			}
			else
			{
				array[x][y] = '.';
				i++;
			}
		}
	}
	return (1);
}

int		main(int argc, char const *argv[])
{
	int		x;
	int		y;
	char	array[9][9];

	(void)argc;
	x = 0;
	y = 0;
	while (x < 9)
	{
		y = 0;
		while (y < 9)
		{
			array[x][y] = argv[x + 1][y];
			y++;
		}
		x++;
	}
	if (solve(array))
	{
		x = 0;
		y = 0;
		while (x < 9)
		{
			y = 0;
			while (y < 9)
			{
				write(1, &(array[x][y]), 1);
				y++;
			}
			write(1, "\n", 1);
			x++;
		}
	}
	else
	{
		write(1, "Error\n", 7);
	}
	return (0);
}
