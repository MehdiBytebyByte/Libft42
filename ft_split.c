/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboughra <mboughra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:30:25 by mboughra          #+#    #+#             */
/*   Updated: 2023/11/19 16:28:12 by mboughra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_subscounter(char *str, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			count++;
			while (str[i] && str[i] != c)
				i++;
		}
		while (str[i] && str[i] == c)
			i++;
	}
	return (count);
}

static char	*coppier(char *s, int y, int x)
{
	int		i;
	int		len;
	char	*splited;

	i = 0;
	len = (x - y);
	splited = (char *)malloc(sizeof(char) * (len + 1));
	if (splited == NULL)
		return (NULL);
	while (s[i] && i < len && s[i + y])
	{
		splited[i] = s[i + y];
		i++;
	}
	splited[i] = '\0';
	return (splited); 
}

static void	freemem(char **splited)
{
	int	i;

	i = 0;
	while (splited[i])
	{
		free(splited[i]);
		i++;
	}
}

static char	**allocater(char *str, char c, int nsubs, char **splited)
{
	int	x;
	int	y;
	int	index;

	x = 0;
	index = 0;
	while (index < nsubs && str[x])
	{
		if (str[x] != c)
		{
			y = x;
			while (str[x] != c && str[x])
				x++;
			splited[index++] = coppier(str, y, x);
			if (splited[index - 1] == NULL)
			{
				freemem(splited);
				free(splited);
				return (NULL);
			}
		}
		else
			x++;
	}
	return (splited);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		nsubs;
	char	**splited;

	if (!s)
		return (NULL);
	i = 0;
	nsubs = ft_subscounter((char *)s, c);
	splited = (char **)malloc(sizeof(char *) * (nsubs + 1));
	if (!splited)
		return (NULL);
	splited = allocater((char *)s, c, nsubs, splited);
	if (splited == NULL)
		return (NULL);
	splited[nsubs] = NULL;
	return (splited);
}
