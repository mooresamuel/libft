/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samoore <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:28:29 by samoore           #+#    #+#             */
/*   Updated: 2023/11/06 19:36:53 by samoore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	s_length(char const *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

static char	*make_string(char *s1, int end, int start)
{
	char	*res;
	int		i;

	res = malloc(sizeof(char) * (end - start + 2));
	i = 0;
	while (i < end - start + 1)
	{
		res[i] = s1[start + i];
		i++;
	}
	res[i] = 0;
	return (res);
}

static int	in_set(char const *set, char c)
{
	int	i;

	i = 0;
	while (i < s_length(set))
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	set_len;

	set_len = s_length((char *)set);
	end = s_length((char *)s1) - 1;
	start = 0;
	while (s1[start] && in_set(set, s1[start]))
		start++;
	while (in_set(set, s1[end]) && end > start)
		end--;
	return (make_string((char *)s1, end, start));
}
/*
int main(void)
{
	char str[35] = {"2323"};
	char trim[5] = {"23"};
	printf("%s", ft_strtrim(str, trim));
	printf("\ndone");
}*/
