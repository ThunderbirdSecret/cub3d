/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsecret <tsecret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 20:24:40 by tsecret           #+#    #+#             */
/*   Updated: 2020/10/10 20:51:16 by tsecret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned long	*lp;
	unsigned char	*cp;

	i = -1;
	lp = s;
	while (++i < n / sizeof(long))
		*lp++ = 0;
	cp = (unsigned char *)lp;
	i = -1;
	while (++i < n % sizeof(long))
		*cp++ = 0;
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void *mem;

	if (size * nmemb > ULONG_MAX)
		return (NULL);
	mem = malloc(size * nmemb);
	if (!mem)
		return (NULL);
	ft_bzero(mem, size * nmemb);
	return (mem);
}
