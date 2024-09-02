/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohammou- <ohammou-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 20:51:20 by ohammou-          #+#    #+#             */
/*   Updated: 2024/08/27 13:07:41 by ohammou-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CUB3D_H
#define CUB3D_H

#include <stdio.h>
#include "minilibx-linux/mlx.h"
#include "tools/libft/libft.h"
#include "tools/get_next_line/get_next_line.h"

typedef struct s_data
{
	void	*mlx;
	void	*mlx_win;
	int		x;
	int		y;
}	t_data;


#endif
