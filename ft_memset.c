/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samoore <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:10:54 by samoore           #+#    #+#             */
/*   Updated: 2023/10/31 11:26:04 by samoore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dst, int c, size_t length)
{
	unsigned char	*d;
	size_t			i;

	i = 0;
	d = dst;
	while (i < length)
	{
		d[i] = (unsigned char)c;
		i++;
	}
	return (d);
}
/*
int	main(void)
{
	char	*str = malloc(sizeof(char) * 100);
	char    *str2 = malloc(sizeof(char) * 100);

	memset(str, '0' + 1, 5);
	str[1] = '\0';
	ft_memset(str2, '0' + 1, 5);
	str2[1] = 0;
	printf("%s\n%s", str, str2);
}*/
