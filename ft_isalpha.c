/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samoore <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 10:50:08 by samoore           #+#    #+#             */
/*   Updated: 2023/10/31 10:54:16 by samoore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1024);
	if (c >= 'A' && c <= 'Z')
		return (1024);
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
		printf("%d %d\n", ft_isalpha(i), isalpha(i));
	}
}*/
