/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkhadka <shkhadka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 11:39:38 by shivakhadka       #+#    #+#             */
/*   Updated: 2026/05/26 15:31:25 by shkhadka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const unsigned char	*ptrsrc;
	unsigned char		*ptrdst;

	if (dst == NULL && src == NULL)
		return (NULL);
	ptrsrc = (const unsigned char *)src;
	ptrdst = (unsigned char *)dst;
	while (n > 0)
	{
		*ptrdst = *ptrsrc;
		ptrdst++;
		ptrsrc++;
		n--;
	}
	return (dst);
}

// int main()
// {
//     char src[] = "";
//     char dst[] = "";
//     char *result;
//     char s[] = "";
//     char d[] = "";
//     char *nresult;

//     result = ft_memcpy(dst, src, 3);
//     nresult = memcpy(d, s, 3);
//     printf("%s\n", result);
//     printf("%s", nresult);
//     return (0);
// }