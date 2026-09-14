/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkhadka <shkhadka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 13:50:07 by shkhadka          #+#    #+#             */
/*   Updated: 2026/05/21 17:58:41 by shkhadka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	a;

	if (!s || !f)
		return ;
	a = 0;
	while (s[a])
	{
		f(a, &s[a]);
		a++;
	}
}

// void ft_toupper(unsigned int n, char *c)
// {
//     (void)n;
//     if (*c >= 'a' && *c <= 'z')
//         *c -= 32;
// }
// int main()
// {
//     char s[] = "shiva";
//     ft_striteri(s, ft_toupper);
//     printf("%s", s);
// }