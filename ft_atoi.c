/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samoore <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:36:05 by samoore           #+#    #+#             */
/*   Updated: 2023/11/10 16:33:18 by samoore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *np)
{
	long	num;
	int		i;
	int		sign;

	sign = 1;
	num = 0;
	i = 0;
	while (np[i] == ' ' || (np[i] >= 9 && np[i] <= 13))
		i++;
	if (np[i] == '-' || np[i] == '+')
	{
		if (np[i] == '-')
			sign = -1;
		i++;
	}
	while (np[i] >= '0' && np[i] <= '9')
	{
		num *= 10;
		num += np[i] - '0';
		i++;
	}
	return (num * sign);
}
/*
int main(void)
{
	char num[50] = {"3649"};
	printf("%d\n%d", atoi(num), ft_atoi(num));
}*/
