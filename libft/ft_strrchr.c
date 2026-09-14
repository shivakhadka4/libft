/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkhadka <shkhadka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 13:01:58 by shkhadka          #+#    #+#             */
/*   Updated: 2026/05/26 16:33:17 by shkhadka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		a;
	char	*last;

	a = 0;
	last = 0;
	while (s[a])
	{
		if (s[a] == (char)c)
			last = ((char *)&s[a]);
		a++;
	}
	if ((char)c == s[a])
		return ((char *)&s[a]);
	return (last);
}

// int main()
// {
//     char s1[] = "shiva khadka";
//     char *result;
//     char s[] = "shiva khadka";
//     char *nresult;

//     result = ft_strrchr(s1, 'l');
//     nresult = strrchr(s, 'l');

//     printf("%s\n", result);
//     printf("%s", nresult);
//     return (0);
// }