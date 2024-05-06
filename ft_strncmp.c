/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samoore <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 12:41:40 by samoore           #+#    #+#             */
/*   Updated: 2023/11/13 15:30:45 by samoore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] == s2[i] && i < n)
		i++;
	if (i == n)
		return (0);
	return (s1[i] - s2[i]);
}
/*int main (void)
{
	char a1[10] = "ABCD";
	char a2[10] = "ABC";
	char b1[10] = "ABC";
	char b2[10] = "ABCD";
	char c1[10] = "";
	char c2[10] = "1243";
	int n1 = 2;
	int n2 = 4444;
	int n3 = 3;

	printf("%d %d\n%d %d\n%d %d", strncmp(a1, a2, n1), 
	ft_strncmp(a1, a2, n1), strncmp(b1, b2, n2), 
	ft_strncmp(b1, b2, n2), strncmp(c1, c2, n3), ft_strncmp(c1, c2, n3));
}
*/
