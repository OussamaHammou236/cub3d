/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_player.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohammou- <ohammou-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 18:39:45 by ohammou-          #+#    #+#             */
/*   Updated: 2024/09/08 18:44:14 by ohammou-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

void	check_player(char **map)
{
	int	i;
	int	flag;

	flag = 0;
	i = 0;
	while (map[i])
	{
		if (ft_strchr(map[i], 'W') || ft_strchr(map[i], 'E')
			|| ft_strchr(map[i], 'N') || ft_strchr(map[i], 'E'))
			flag = 1;
		i++;
	}
	if (!flag)
		ft_error("no player !\n");
}