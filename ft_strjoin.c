/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samoore <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:14:21 by samoore           #+#    #+#             */
/*   Updated: 2023/11/13 15:44:45 by samoore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	s_len(char const *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	char	*res_p;

	if (!s1 && !s2)
		return (NULL);
	res = malloc(sizeof(char) * (s_len(s1) + s_len(s2) + 1));
	if (!res)
		return (0);
	res_p = res;
	while (s1 && *s1)
		*res++ = *s1++;
	while (s2 && *s2)
		*res++ = *s2++;
	*res = 0;
	return (res_p);
}
/*
int main(void)
{
	char s1[10] = {"HELLO "};
	char s2[10] = {"WORLD"};
	printf("%s", ft_strjoin(s1, s2));
}*/
