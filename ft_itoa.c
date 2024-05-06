/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samoore <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:51:59 by samoore           #+#    #+#             */
/*   Updated: 2023/11/07 17:05:23 by samoore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	slen(char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

static char	*reverse_string(char *s)
{
	char	c;
	int		i;
	int		j;

	j = slen(s);
	i = 0;
	while (i < j / 2)
	{
		c = s[i];
		s[i] = s[j - i - 1];
		s[j - i - 1] = c;
		i++;
	}
	return (s);
}

static int	findlen(int n)
{
	long	nn;
	int		i;

	i = 1;
	nn = n;
	if (nn < 0)
	{
		nn *= -1;
		i++;
	}
	while (nn / 10 > 0)
	{
		i++;
		nn /= 10;
	}
	return (i);
}

static char	*build_num(char *num, long nnum, int n)
{
	int	i;

	i = 0;
	while (nnum > 0)
	{
		num[i] = nnum % 10 + '0';
		nnum /= 10;
		i++;
	}
	if (n < 0)
	{
		num[i] = '-';
		i++;
	}
	num[i] = 0;
	return (num);
}

char	*ft_itoa(int n)
{
	char	*num;
	long	nnum;

	nnum = n;
	if (n < 0)
		nnum *= -1;
	num = malloc(sizeof(char) * (findlen(n) + 1));
	if (!num)
		return (NULL);
	if (n == 0)
	{
		num[0] = '0';
		num[1] = 0;
		return (num);
	}
	num = build_num(num, nnum, n);
	return (reverse_string(num));
}
/*
int	main(void)
{
//	printf("%s", ft_itoa(1112233));
	printf("%d", findlen(-2147483648));
}*/
