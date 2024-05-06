/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samoore <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 12:25:17 by samoore           #+#    #+#             */
/*   Updated: 2023/11/13 15:21:17 by samoore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ss;
	char	n;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	n = (unsigned char)c;
	ss = (char *)s;
	while (ss[i] && ss[i] != n)
		i++;
	if (ss[i] == n)
		return (&ss[i]);
	return (0);
}
/*
int main(void)
{
	char str[15] = {"MNBVCXCZ"};
	char t = 0;

	printf("%p\n%p", ft_strchr(str, t), strchr(str, t));
}*/
