/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samoore <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:24:37 by samoore           #+#    #+#             */
/*   Updated: 2023/11/13 15:37:29 by samoore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	s_len(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
/*
static void	add_i(unsigned int i, char *c)
{
	*c = i + '0';
}
*/

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !(*s) || !f)
		return ;
	while (i < s_len(s))
	{
		(*f)(i, &s[i]);
		i++;
	}
}
/*
int main(void)
{
	char s[10] = {"01111"};

	ft_striteri(s, add_i);
	printf("%s", s);
}*/
