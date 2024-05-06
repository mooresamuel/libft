/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samoore <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 12:00:19 by samoore           #+#    #+#             */
/*   Updated: 2023/11/13 15:28:02 by samoore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	s_len;
	size_t	d_len;
	size_t	i;

	i = n;
	d_len = 0;
	s_len = 0;
	while (src[s_len])
		s_len++;
	while (i-- != 0 && dst[d_len])
		d_len++;
	if (d_len - n == 0)
		return (n + s_len);
	i = 0;
	while (src[i] && d_len + i + 1 < n)
	{
		dst[d_len + i] = src[i];
		i++;
	}
	if (d_len + s_len == n)
		dst[d_len + i] = 0;
	return (d_len + s_len);
}
/*
size_t
strlcat(char *dst, const char *src, size_t siz)
{
	char *d = dst;
	const char *s = src;
	size_t n = siz;
	size_t dlen;
	while (n-- != 0 && *d != '\0')
		d++;
	dlen = d - dst;
	n = siz - dlen;
	if (n == 0)
		return(dlen + strlen(s));
	while (*s != '\0') {
		if (n != 1) {
			*d++ = *s;
			n--;
		}
		s++;
	}
	*d = '\0';
	return(dlen + (s - src));	}

int main(void)
{
	int i, j;
	char *s = malloc(sizeof(char) * 15);
	char *s1 = malloc(sizeof(char) * 15);
	char str[10] = {"HELLO, "};
	char *str2 = {"WORLD!"};
	int num = 15;
	
	strcpy(s, str);
	strcpy(s1, str);
	i = strlcat(s, str2, num);
	j = ft_strlcat(s1, str2, num);
	printf("%d %s\n%d %s", i, s, j, s1);
}*/
