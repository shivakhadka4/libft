/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkhadka <shkhadka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 13:01:32 by shkhadka          #+#    #+#             */
/*   Updated: 2026/05/28 14:42:59 by shkhadka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	a;

	if (n == 0)
		return (0);
	a = 0;
	while (a < n - 1 && s1[a] && s2[a] && s1[a] == s2[a])
		a++;
	return ((unsigned char)s1[a] - (unsigned char)s2[a]);
}

// int main()
// {
//     char s1[] = "shiva";
//     char s2[] = "";
//     char s[] = "shiva";
//     char p[] = "";
//     printf("%d\n", ft_strncmp(s1, s2, 4));
//     printf("%d", strncmp(s, p, 4));
//     return (0);
// }