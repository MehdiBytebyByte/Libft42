/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboughra <mboughra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 20:14:20 by mboughra          #+#    #+#             */
/*   Updated: 2023/11/15 10:35:01 by mboughra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	i;
	char	*re;

	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	re = (char *)malloc(sizeof(char) * (len + 1));
	if (!re)
		return (NULL);
	i = 0;
	while (i < len)
	{
		re[i] = (*f)(i, s[i]);
		i++;
	}
	re[i] = '\0';
	return (re);
}
// char add_one(unsigned int index, char c)
// {
//     // Add 1 to the ASCII value of the character
//     return c - 32;
// }
// int main()
// {
//     const char *input = "hello world";
//     // Test ft_strmapi with the add_one function
//     char *result = ft_strmapi(input, add_one);
//     if (result != NULL)
//     {
//         printf("Original string: %s\n", input);
//         printf("Mapped string: %s\n", result);
//         // Don't forget to free the allocated memory
//         free(result);
//     }
//     else
// 		printf("Memory allocation failed.\n");
// 	return 0;
// }