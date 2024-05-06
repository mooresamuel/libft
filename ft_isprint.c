/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samoore <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:02:51 by samoore           #+#    #+#             */
/*   Updated: 2023/10/31 11:05:04 by samoore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (16384);
	return (0);
}
/*
#include <ctype.h>
#include <stdio.h>
int main(void)
{
	int i = 0;

	for (i = 0; i < 256; i++)
	{
		printf("%d %d\n", ft_isprint(i), isprint(i));
	}
}*/
