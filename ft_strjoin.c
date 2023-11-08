/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboughra <mboughra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 21:06:18 by mboughra          #+#    #+#             */
/*   Updated: 2023/11/05 21:58:05 by mboughra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	s1len = ft_strlen(s1);
	size_t	s2len = ft_strlen(s2);

	if (!s1 || !s2)
		return (NULL);
	str = (char *)malloc(s1len + s2len + 1);
	if (!str)
		return (NULL);
	ft_strlcpy (str,s1,s1len + 1);
	ft_strlcpy (str + s1len, s2, s2len + 1);
	str[s1len + s2len ] = '\0';
return (str);
}
// int	main(void)
// {
// 	char *a = "summoners ";
// 	char *b = "rift";
// 	printf("%s",ft_strjoin(a,b));
// }