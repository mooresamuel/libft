/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samoore <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 16:13:21 by samoore           #+#    #+#             */
/*   Updated: 2023/11/03 16:16:18 by samoore          ###   ########.fr       */
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

void	ft_putendl_fd(char *s, int fd)
{
	unsigned int	i;
	char			eol;

	eol = '\n';
	i = 0;
	while (i < s_len(s))
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, &eol, 1);
}
/*
int main(void)
{
	int f;

	f = open("test.file", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR | S_IRGRP);
	ft_putendl_fd("HELLO", f);
	close(f);
}*/
