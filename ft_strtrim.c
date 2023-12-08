/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboughra <mboughra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:52:52 by mboughra          #+#    #+#             */
/*   Updated: 2023/12/05 14:29:54 by mboughra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	trisize;
	char	*trimmed;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	if (s1[0] == '\0')
		return (ft_strdup(""));
	while (start < ft_strlen(s1) && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end]))
		end--;
	trisize = (end - start +1);
	trimmed = (char *) malloc(trisize + 1);
	if (!trimmed)
		return (NULL);
	ft_strlcpy(trimmed, s1 + start, trisize + 1);
	return (trimmed);
}
