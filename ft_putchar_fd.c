/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samoore <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:45:07 by samoore           #+#    #+#             */
/*   Updated: 2023/11/03 16:05:20 by samoore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int main(void)
{
	int f;

	f = open("test.file", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR | S_IRGRP);
	ft_putchar_fd('a', f);
	close(f);
}*/
