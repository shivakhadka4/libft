/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkhadka <shkhadka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 13:00:57 by shkhadka          #+#    #+#             */
/*   Updated: 2026/05/26 16:35:16 by shkhadka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	a;

	a = 0;
	while (s[a])
	{
		if (s[a] == (char)c)
			return ((char *)&s[a]);
		a++;
	}
	if ((char)c == s[a])
		return ((char *)&s[a]);
	return (NULL);
}

/*int main()
{
	char s1[] = "shiva khadka";
	char *result;
	char s[] = "shiva khadka";
	char *nresult;

	nresult = strchr(s, 'v');
	result = ft_strchr(s1, 'v');
	printf("%s\n", result);
	printf("%s", nresult);
	return (0);
}*/