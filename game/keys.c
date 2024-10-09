/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keys.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohammou- <ohammou-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 14:16:40 by ohammou-          #+#    #+#             */
/*   Updated: 2024/09/11 10:05:43 by ohammou-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

int mouse(int botton,int key, int y, void *par)
{
    t_data *data = (t_data *)par;

    printf("%d\n", botton);
    // drawing_square(data, key, y, 10);
    return 0;
}

int esc(int key, void *param)
{
    t_data *data = param;
	if (key == 65307)
		exit(0);
    else if (key == 115)
    {
        mlx_clear_window(data->mlx, data->mlx_win);
    }
	return (0);
}

int	krwa()
{
	exit(0);
	return (0);
}