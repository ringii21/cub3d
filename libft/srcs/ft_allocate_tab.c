/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_allocate_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seozcan <seozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 15:44:01 by seozcan           #+#    #+#             */
/*   Updated: 2023/01/02 19:26:47 by seozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

int	**allocate_tab(int **tab, size_t size)
{
	size_t	i;

	i = 0;
	tab = (int **)malloc(sizeof(int *) * size);
	if (!tab)
		return (NULL);
	while (i < size)
	{
		tab[i] = (int *)malloc(sizeof(int) * 2);
		if (!tab[i])
		{
			free(tab);
			return (NULL);
		}
		i++;
	}
	return (tab);
}
