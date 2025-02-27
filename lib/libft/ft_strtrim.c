/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkul <tkul@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 18:04:05 by tkul              #+#    #+#             */
/*   Updated: 2025/02/17 18:04:06 by tkul             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	offset_start;
	size_t	length;
	char	*str;

	offset_start = 0;
	while (s1[offset_start] && \
		ft_strchr(set, s1[offset_start]) != 0)
		offset_start++;
	length = ft_strlen(s1) - offset_start;
	while (s1[offset_start] && \
		ft_strchr(set, s1[offset_start + length - 1]) != 0)
		length--;
	str = (char *) malloc(sizeof(char) * (length + 1));
	if (!str)
		return (0);
	ft_strlcpy(str, s1 + offset_start, length + 1);
	return (str);
}
