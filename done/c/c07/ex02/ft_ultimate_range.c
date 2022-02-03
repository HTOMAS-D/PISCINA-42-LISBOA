/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htomas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:48:11 by htomas-d          #+#    #+#             */
/*   Updated: 2022/02/02 11:41:35 by htomas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	i = 0;
	size = max - min;
	if (max <= min)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *) malloc (size * sizeof (int));
	if (!*range)
		return (-1);
	while (min < max)
		(*range)[i++] = min++;
	return (i);
}
/*int main()
{
	int *res;
	int j;
	j = ft_ultimate_range(&res, 0, 5);
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", res[i]);
	}
	printf("\n%d", ft_ultimate_range(&res, 0, 5));
	return 0;
}*/
