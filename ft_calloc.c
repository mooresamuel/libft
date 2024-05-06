/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samoore <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:55:28 by samoore           #+#    #+#             */
/*   Updated: 2023/11/07 15:49:13 by samoore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "limits.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*buf;
	size_t	t_size;

	t_size = nmemb * size;
	if (nmemb == 0 || size == 0)
	{
		buf = malloc(0);
		return (buf);
	}
	if (INT_MAX / nmemb < size)
	{
		return (0);
	}
	buf = malloc(t_size);
	if (!buf)
		return (buf);
	ft_bzero(buf, t_size);
	return (buf);
}
/*
int main(void)
{
	char *buf = ft_calloc(47, sizeof(char));
	char *b2 = calloc(47, sizeof(char));
	for (int i = 0; i < 30; i++)
	{
		char c = buf[i];
		c += '0';
		printf("%c", c);
	}
	printf("\n\n");
	for (int i = 0; i < 30; i++)
	{
		char c = b2[i];
		c += '0';
		printf("%c", c);
	}
	free (buf);
	free (b2);
}*/
