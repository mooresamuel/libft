/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samoore <samoore@student.42london.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 14:55:57 by samoore           #+#    #+#             */
/*   Updated: 2023/11/13 10:14:25 by samoore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char const *s, char c)
{
	int	i;
	int	trigger;
	int	count;

	i = 0;
	count = 0;
	trigger = -1;
	while (s[i])
	{
		if (s[i] != c && trigger == -1)
		{
			count++;
			trigger = 1;
		}
		else if (s[i] == c)
			trigger = -1;
		i++;
	}
	return (count);
}

int	slen(char const *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	string_cpy(char *d, char const *s, int size)
{
	while (size-- > 0)
		*d++ = *s++;
	*d = 0;
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		start;
	int		i;
	int		j;

	start = -1;
	i = 0;
	j = 0;
	res = malloc(sizeof(char *) * (count_words(s, c) + 1));
	while (i <= slen(s))
	{
		if (s[i] != c && start < 0)
			start = i;
		else if (start >= 0 && (s[i] == c || i == slen(s)))
		{
			res[j] = malloc(sizeof(char) * i - start + 1);
			string_cpy(res[j++], &s[start], i - start);
			start = -1;
		}
		i++;
	}
	res[j] = 0;
	return (res);
}
/*

#include <stdio.h>
int main(void)
{
	int i = 0;

	char *str = {"11HELLO111WORLD f1f"};
	char **res = ft_split(str, '1');
	while (res[i])
	{
		printf("\n%d:  ", i);
		printf("%s", res[i++]);
	}
}*/
