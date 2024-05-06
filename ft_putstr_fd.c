/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samoore <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 16:05:46 by samoore           #+#    #+#             */
/*   Updated: 2023/11/03 16:12:49 by samoore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	s_len(char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	ft_putstr_fd(char *s, int fd)
{
	unsigned int	i;

	i = 0;
	while (i < s_len(s))
	{
		write(fd, &s[i], 1);
		i++;
	}
}
/*
int main(void)
{
	int f;

	f = open("test.file", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR | S_IRGRP);
	ft_putstr_fd("HELLO", f);
	close(f);
}*/
