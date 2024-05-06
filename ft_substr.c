/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samoore <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:06:35 by samoore           #+#    #+#             */
/*   Updated: 2023/11/07 16:24:21 by samoore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	t_len;
	char	*res;

	i = 0;
	if (!s)
		return (NULL);
	if (start > (unsigned int)ft_strlen(s))
		return (ft_strdup(""));
	t_len = 0;
	while (s[start + t_len] && t_len < len)
		t_len++;
	res = malloc(sizeof(char) * (t_len + 1));
	if (!res)
		return (0);
	while (s[start + i] && i < t_len)
	{
		res[i] = s[start + i];
		i++;
	}
	res[i] = 0;
	return (res);
}
/*
int main(void)
{
	char str[50] = {"12345"};

	char *res = ft_substr(str, 4, 100);
	printf("%s", res);
	free (res);
}*/
