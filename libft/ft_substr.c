/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkhadka <shkhadka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 19:08:37 by shkhadka          #+#    #+#             */
/*   Updated: 2026/05/26 16:48:40 by shkhadka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	a;
	size_t	s_len;

	s_len = ft_strlen(s);
	if (start > s_len)
		return (ft_strdup(""));
	if (len >= s_len - start)
		len = (s_len - start);
	dst = malloc(len + 1);
	if (!dst)
		return (NULL);
	a = 0;
	while (a < len)
	{
		dst[a] = s[start + a];
		a++;
	}
	dst[a] = '\0';
	return (dst);
}
/*
int	main(void)
{
	char	s[];
	char	*result;

	result = ft_substr(s, 5, 5);
	printf("%s", result);
	free(result);
	return (0);
}
	*/