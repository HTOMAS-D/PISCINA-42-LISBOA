/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akergoat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 15:09:16 by akergoat          #+#    #+#             */
/*   Updated: 2022/01/29 13:25:10 by htomas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	c;

	c = 0;
	while ((s1[c] == s2[c]) && (s1[c] != '\0') && (s2[c] != '\0'))
			c++;
	return (s1[c] - s2[c]);
}
/*
int main()
{
	char s1[] = "hENRIQUE";
	char s2[] = "h3nrique";

	int x = ft_strcmp(s2, s1);
	printf("%d\n", x);
}
*/
