/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samoore <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 12:34:47 by samoore           #+#    #+#             */
/*   Updated: 2023/11/13 15:33:37 by samoore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = 0;
	c = (char)c;
	if (s)
	{
		while (s[i])
			i++;
		while (i >= 0 && s[i] != c)
			i--;
		if (i >= 0 && s[i] == c)
			return ((char *)&s[i]);
	}
	return (0);
}
/*
int main(void)
{
	char str[15] = {"MNBVCXCZ"};
	char t = 'Z';

	printf("%p\n%p", ft_strrchr(str, t), strrchr(str, t));
}*/
