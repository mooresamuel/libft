/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samoore <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:44:37 by samoore           #+#    #+#             */
/*   Updated: 2023/10/31 13:59:44 by samoore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *buf, int ch, size_t n)
{
	unsigned char	*b;
	size_t			i;

	b = (unsigned char *)buf;
	i = 0;
	while (i < n)
	{
		if (b[i] == (unsigned char)ch)
			return (&b[i]);
		i++;
	}
	return (0);
}
/*
int main(void)
{
	char buf[100] = {"kj;asdnbabdf[ihe[08yy53;jbwrte"};
	char c = 's';
	int num = 6;

	printf("%p\n%p", memchr(buf, c, num), ft_memchr(buf, c, num));
}*/
