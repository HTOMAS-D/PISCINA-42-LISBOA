/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htomas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 11:07:06 by htomas-d          #+#    #+#             */
/*   Updated: 2022/01/29 10:58:16 by htomas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < nb && src[j] != '\0')
	{
		dest[i + j] = src [j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
/*int main()
{
	char dest[50] = "using strncat function, ";
	char src[50] = "this part is added and this is ignored";
	char dest1[50] = "using strncat function, ";
	char src1[50] = "this part is added and this is ignored";

	strncat(dest, src, 19);
	printf("%s\n\n", dest);

	ft_strncat(dest1, src1, 19);
	printf("%s", dest1);
}*/
