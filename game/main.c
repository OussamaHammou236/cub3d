/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohammou- <ohammou-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 13:32:59 by ohammou-          #+#    #+#             */
/*   Updated: 2024/09/11 10:18:31 by ohammou-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

void	main_of_drawing(t_data *data)
{
	open_the_window(data);
	drawing(data);
	mlx_key_hook(data->mlx_win, esc, data);
	mlx_hook(data->mlx_win, 17, 0,krwa, NULL);
	// mlx_hook(data->mlx_win, 2, 0,krwa, NULL);
}
