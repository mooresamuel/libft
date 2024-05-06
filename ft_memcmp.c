/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samoore <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:01:05 by samoore           #+#    #+#             */
/*   Updated: 2023/10/31 14:05:44 by samoore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;
	size_t			i;

	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (a[i] != b[i])
			return (a[i] - b[i]);
		i++;
	}
	return (0);
}
/*
int main (void)
{
	char a1[10] = "ABCD";
	char a2[10] = "ABC";
	char b1[10] = "ABC";
	char b2[10] = "";
	char c1[10] = "";
	char c2[10] = "1243";
	int n1 = 0;
	int n2 = 4444;
	int n3 = 3;

	printf("%d %d\n%d %d\n%d %d", memcmp(a1, a2, n1), 
	ft_memcmp(a1, a2, n1), memcmp(b1, b2, n2), 
	ft_memcmp(b1, b2, n2), memcmp(c1, c2, n3), ft_memcmp(c1, c2, n3));
}*/
