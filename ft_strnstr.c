/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samoore <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:06:34 by samoore           #+#    #+#             */
/*   Updated: 2023/11/13 15:31:32 by samoore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	slen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

static int	compare(const char *big, const char *small)
{
	size_t	i;

	i = 0;
	while (small[i] && big[i])
	{
		if (small[i] != big[i])
			return (1);
		i++;
	}
	if (small[i])
		return (1);
	return (0);
}

char	*ft_strnstr(const char *big, const char *small, size_t n)
{
	size_t	i;

	i = 0;
	if (!small[0])
		return ((char *)big);
	while (big[i] && i + slen(small) <= n)
	{
		if (!compare(&(big[i]), small))
			return ((char *)&(big[i]));
		i++;
	}
	return (NULL);
}
/*
char * strnstr(s, find, slen)
	const char *s;
	const char *find;
	size_t slen;
{
	char c, sc;
	size_t len;

	if ((c = *find++) != '\0') 
	{
		len = strlen(find);
		do 
		{
			do 
			{
				if ((sc = *s++) == '\0' || slen-- < 1)
					return (NULL);
			} 
			while (sc != c);
			if (len > slen)
				return (NULL);
		} 
		while (strncmp(s, find, len) != 0);
		s--;
	}
	return ((char *)s);
}int main(void)
{
	char big[10] = {"aaabcabcd"};
	char small[10] = {"cd"};
	int num = 9;

	printf("%s\n%s", ft_strnstr(big, small, num), strnstr(big, small, num));
}*/
