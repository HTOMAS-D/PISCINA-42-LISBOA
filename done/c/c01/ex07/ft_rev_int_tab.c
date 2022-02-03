/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htomas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 13:34:57 by htomas-d          #+#    #+#             */
/*   Updated: 2022/01/19 10:00:08 by htomas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	change;

	i = 0;
	while (i < size)
	{
	change = tab [i];
	tab [i] = tab [size -1];
	tab [size - 1] = change;
	i++;
	size--;
	}
}
