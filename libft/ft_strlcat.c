/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkhadka <shkhadka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 19:18:50 by shkhadka          #+#    #+#             */
/*   Updated: 2026/05/26 16:12:10 by shkhadka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	a;
	size_t	srclen;
	size_t	dstlen;

	srclen = ft_strlen(src);
	dstlen = 0;
	while (dst[dstlen] && dstlen < dstsize)
		dstlen++;
	if (dstsize == dstlen)
		return (srclen + dstsize);
	a = 0;
	while (src[a] && a < dstsize - dstlen - 1)
	{
		dst[dstlen + a] = src[a];
		a++;
	}
	dst[a + dstlen] = '\0';
	return (srclen + dstlen);
}

// #include <bsd/string.h>
// int main()
// {
//     char src[] = "42berlinschool";
//     char dst[] = "fg";
//     char s[] = "42berlinschool";
//     char d[] = "fg";
//     printf("%zu\n", ft_strlcat(dst, src, 4));
//     printf("%zu\n", strlcat(d, s, 4));
//     printf("%s\n", dst);
//     printf("%s\n", d);
//     return(0);
// }
