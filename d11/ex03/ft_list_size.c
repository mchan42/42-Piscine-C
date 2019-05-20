/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 23:10:39 by mchan             #+#    #+#             */
/*   Updated: 2019/04/10 23:25:32 by mchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_list_size(t_list *begin_list)
{
	t_list	*tmp;
	int		count;

	count = 0;
	if (!begin_list)
		return (0);
	tmp = begin_list;
	while (tmp->next)
	{
		tmp = tmp->next;
		count++;
	}
	return (count);
}
