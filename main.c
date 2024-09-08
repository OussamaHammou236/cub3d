/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohammou- <ohammou-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 20:51:29 by ohammou-          #+#    #+#             */
/*   Updated: 2024/09/07 10:47:47 by ohammou-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int main(int ac, char **av)
{
    t_data data;

    if (ac < 2)
        return 1;
    check_option(av[1]);
    data.map = read_map(av[1]);
    // data.mlx = mlx_init();
    // data.mlx_win = mlx_new_window(data.mlx, 1000, 1000, "window");
    //while (1);
    
    return 0;
}