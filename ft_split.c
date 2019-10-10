/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saich <saich@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 12:17:59 by exam              #+#    #+#             */
/*   Updated: 2019/10/10 15:21:03 by saich            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		find_next_sep(char *str, char *to_find)
{
	int i;
	int n;

	i = 0;
	if (to_find[0] == '\0')
		return (-1);
	while (str[i])
	{
		n = 0;
		while (to_find[n])
		{
			if (to_find[n] == str[i])
				return (i);
			n++;
		}
		i++;
	}
	return (-1);
}

char	*ft_strdup(char *str, int n)
{
	char	*dest;
	int		i;

	i = 0;
	if (!(dest = malloc(sizeof(char) * n + 1)))
		return (NULL);
	while (i < n)
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		ft_count(char *str, char *charset)
{
	int i;
	int j;
	int count;

	i = 0;
	count = 0;
	while (str[i])
	{
		j = find_next_sep(&str[i], charset);
		if (j > 0)
		{
			count++;
		}
		else if (j == -1)
		{
			count++;
			j = 1;
			break ;
		}
		i += j + 1;
	}
	return (count);
}

char	**ft_split(char *str, char c)
{
	int		i;
	int		n;
	char	*charset;
	char	**re;

	i = 0;
	n = 0;
	charset = c;
	if (!(re = malloc(sizeof(char *) * ft_count(str, charset) + 1)))
		return (NULL);
	while (i < ft_strlen(str))
	{
		if (find_next_sep(&str[i], charset) > 0)
			re[n++] = ft_strdup(&str[i], find_next_sep(&str[i], charset));
		else if (find_next_sep(&str[i], charset) == -1)
		{
			re[n++] = ft_strdup(&str[i], ft_strlen(str));
			break ;
		}
		i += find_next_sep(&str[i], charset) + 1;
	}
	re[n] = NULL;
	return (re);
}
