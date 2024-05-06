/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samoore <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 16:17:11 by samoore           #+#    #+#             */
/*   Updated: 2023/11/07 16:27:24 by samoore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*reverse_string(char *s)
{
	char	c;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	j = ft_strlen(s);
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

static int	check_length(int n)
{
	long	nn;
	int		i;

	nn = n;
	i = 1;
	if (nn < 0)
	{
		i++;
		nn *= -1;
	}
	while (nn / 10 > 0)
	{
		i++;
		nn /= 10;
	}
	return (i);
}

static char	*f_itoa(int n)
{
	char	*num;
	long	nnum;
	int		i;
	int		j;

	i = 0;
	if (n == 0)
		return (ft_strdup("0"));
	nnum = n;
	if (n < 0)
		nnum *= -1;
	num = malloc(sizeof(char) * (check_length(n) + 1));
	while (nnum > 0)
	{
		num[i] = nnum % 10 + '0';
		nnum /= 10;
		i++;
	}
	if (n < 0)
		num[i++] = '-';
	num[i] = 0;
	j = 0;
	num = reverse_string(num);
	return (num);
}

void	ft_putnbr_fd(int n, int fd)
{
	char	*s;
	int		i;
	int		len;

	s = f_itoa(n);
	if (!s)
		return ;
	i = 0;
	len = ft_strlen(s);
	while (i < len)
	{
		write(fd, &s[i], 1);
		i++;
	}
	free (s);
}
/*
int main(void)
{
	int f;

	f = 0;
	f = open("test.file", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR | S_IRGRP);
	ft_putnbr_fd(-2147483648, f);
	close(f);
}*/
