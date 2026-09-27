/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rajlouni <rajlouni@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 14:05:48 by rajlouni          #+#    #+#             */
/*   Updated: 2026/09/17 15:23:32 by rajlouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	dest_size;
	char	*result;

	dest_size = ft_strlen(s1) + ft_strlen(s2);
	result = malloc(dest_size + 1);
	if (!result)
		return (NULL);
	ft_strlcpy(result, s1, dest_size + 1);
	ft_strlcat(result, s2, dest_size + 1);
	return (result);
}
