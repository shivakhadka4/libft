/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkhadka <shkhadka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 11:32:09 by shkhadka          #+#    #+#             */
/*   Updated: 2026/05/26 18:44:23 by shkhadka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	countnum(long n)
{
	size_t	count;

	count = 1;
	if (n < 0)
	{
		count++;
		n = -n;
	}
	while (n >= 10)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	size_t	len;
	char	*result;
	long	nb;

	nb = n;
	len = countnum(nb);
	result = malloc(len + 1);
	if (!result)
		return (NULL);
	result[len] = '\0';
	if (nb == 0)
		result[0] = '0';
	if (nb < 0)
	{
		result[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		len--;
		result[len] = (nb % 10) + '0';
		nb = nb / 10;
	}
	return (result);
}
// int	main(void)
// {
// 	int n = -2147483648;
// 	printf("%s", ft_itoa(n));
// }