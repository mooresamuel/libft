/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samoore <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:29:48 by samoore           #+#    #+#             */
/*   Updated: 2023/10/31 16:39:39 by samoore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *dst, size_t n)
{
	unsigned char	*d;
	size_t			i;

	i = 0;
	d = (unsigned char *)dst;
	while (i < n)
	{
		d[i] = 0;
		i++;
	}
}
/*
int main(void)
{
	char *s = malloc(sizeof(char) * 5);
	char *s1 = malloc(sizeof(char) * 5);

	ft_bzero(s1, 10);
	bzero(s, 10);
}*/
