/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samoore <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:34:06 by samoore           #+#    #+#             */
/*   Updated: 2023/10/31 11:40:12 by samoore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
/*
int main(void)
{
	char *s = malloc(sizeof(char) * 10);
	char *s1 = malloc(sizeof(char) * 10);
	char st[10] = "asd";
	int	num = 1;

	ft_memcpy(s, st, num);
	memcpy(s1, st, num);
	printf("%s\n%s", s, s1);
}*/
