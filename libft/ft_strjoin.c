/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkhadka <shkhadka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 11:02:41 by shkhadka          #+#    #+#             */
/*   Updated: 2026/05/21 18:08:21 by shkhadka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(char const *s)
{
	int	a;

	a = 0;
	while (s[a])
	{
		a++;
	}
	return (a);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		s1len;
	int		s2len;
	char	*result;

	s1len = ft_len(s1);
	s2len = ft_len(s2);
	result = malloc(s1len + s2len + 1);
	if (!result)
		return (NULL);
	s1len = 0;
	while (s1[s1len])
	{
		result[s1len] = s1[s1len];
		s1len++;
	}
	s2len = 0;
	while (s2[s2len])
	{
		result[s1len + s2len] = s2[s2len];
		s2len++;
	}
	result[s1len + s2len] = '\0';
	return (result);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char s[] = "shiva ";
// 	char s1[] = "khadka";

// 	printf("%s", ft_strjoin(s, s1));
// }