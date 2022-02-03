/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htomas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 13:11:17 by htomas-d          #+#    #+#             */
/*   Updated: 2022/02/02 11:38:33 by htomas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	else
	{
		array = (int *)malloc((max - min) * sizeof(int));
		while (min < max)
		{
			array[i] = min++;
			i++;
		}
		return (array);
	}
}
/*int	main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	i;
	int	size;

	i = 0;
	min = 7;
	max = 17;
	size = max - min;
	tab = ft_range(min, max);
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
}*/
