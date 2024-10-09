/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohammou- <ohammou-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 13:32:39 by ohammou-          #+#    #+#             */
/*   Updated: 2024/09/10 13:46:31 by ohammou-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

void	open_the_window(t_data *data)
{
	data->mlx = mlx_init();
	data->mlx_win = mlx_new_window(data->mlx, data->x * 60,
			data->y * 60, "window");
}

void	ft_pixelput(t_img *img, int x, int y, int color)
{
	char	*tmp;

	tmp = img->addr + (y * img->line_length + x * (img->bits_per_pixel / 8));
	*(unsigned int *)tmp = color;
}

void	drawing1(t_data *data, t_img *img, int x, int y, int color)
{
	int i;
	int x_max;
	int y_max;

	x_max = x + data->offset;
	y_max = y + data->offset;
	i = x;
	while (y < y_max - 3)
	{
		x = i;
		while(x < x_max - 3)
		{
			ft_pixelput(img, x, y, color);
			x++;
		}
		y++;
	}
}

void drawing(t_data *data)
{
	t_img img;
	int	x;
	int	y;

	y = 0;
	img.img = mlx_new_image(data->mlx,  data->x * 60,  data->y * 60);
	img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_length, &img.endian);
	while (data->map.map[y])
	{
		x = 0;
		while(data->map.map[y][x])
		{
			data->offset = 60;
			if (data->map.map[y][x] == '1')
				drawing1(data, &img, x * 60, y * 60, 0xFFFFFF);
			else if (data->map.map[y][x] != ' ')
				drawing1(data, &img, x * 60, y * 60, 0xFF0000);
			if (data->map.map[y][x] == 'W' || data->map.map[y][x] == 'E'
				|| data->map.map[y][x] == 'N' || data->map.map[y][x] == 'S')
			{
				data->offset = 20;
				drawing1(data, &img, (x * 60) + 20, (y * 60) + 20, 0xfcba03);
			}
			x++;
		}
		y++;
	}
	mlx_put_image_to_window(data->mlx, data->mlx_win, img.img, 0, 0);
}

