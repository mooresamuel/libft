/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samoore <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:50:49 by samoore           #+#    #+#             */
/*   Updated: 2023/11/07 11:44:04 by samoore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	s_len;

	i = 0;
	s_len = 0;
	while (src[s_len])
		s_len++;
	if (n > 0)
	{
		while (*src && (i + 1) < n)
		{
			*dst++ = *src++;
			i++;
		}
		if ((i) < n)
			*dst = '\0';
	}
	return (s_len);
}
/*
size_t
ft_strlcpy(char *dst, const char *src, size_t siz)
{
	char *d = dst;
	const char *s = src;
	size_t n = siz;
		if (n != 0) {
		while (--n != 0) {
			if ((*d++ = *s++) == '\0')
				break;
		}
  }
	if (n == 0) {
		if (siz != 0)
			*d = '\0';				while (*s++)
			;
	}
	return(s - src - 1);	

size_t
ft_strlcpy(char *dst, const char *src, size_t siz)
{
	char *d = dst;
	const char *s = src;
	size_t n = siz;
		if (n != 0) {
		while (--n != 0) {
			if ((*d++ = *s++) == '\0')
				break;
		}
  }
		if (n == 0) {
		if (siz != 0)
			*d = '\0';				
		while (*s++)
			;
	}
	return(s - src - 1);
}

int main(void)
{
	char *s = malloc(sizeof(char) * 15);
	char *s1 = malloc(sizeof(char) * 15);
	
	memset(s, 'A', 15);
	memset(s1, 'A', 15);

	int i, j, k;
	char str[15] = {"hello world"};
	int num = 1;

	i = strlcpy(s, str, num);
	j = ft_strlcpy(s1, str, num);
	printf("%d %s\n%d %s\n", i, s, j, s1);
	printf("\n%c %c", s[num - 1], s1[num - 1]);
}*/
