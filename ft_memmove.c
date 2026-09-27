/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rajlouni <rajlouni@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 13:23:48 by rajlouni          #+#    #+#             */
/*   Updated: 2026/09/25 19:21:25 by rajlouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_ptr;
	unsigned char	*src_ptr;

	if (dest < src)
		return (ft_memcpy(dest, src, n));
	dest_ptr = (unsigned char *)dest;
	src_ptr = (unsigned char *)src;
	while (n > 0)
	{
		n--;
		dest_ptr[n] = src_ptr[n];
	}
	return (dest);
}
