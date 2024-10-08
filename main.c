/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohammou- <ohammou-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 20:51:29 by ohammou-          #+#    #+#             */
/*   Updated: 2024/09/10 16:47:22 by ohammou-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int    get_x(char **map)
{
    int j;
    int nb;

    j = 0;
    nb = 0;
    while (map[j])
    {
        if (ft_strlen(map[j]) >= nb)
            nb = ft_strlen(map[j]);
        j++;
    }
    return nb;
}

int main(int ac, char **av)
{
    t_data data;

    if (ac < 2)
        return 1;
    check_option(av[1]);
    data.map = read_map(av[1]);
    data.y = ft_strlen_blm9lob(data.map.map);
    data.x = get_x(data.map.map);

    main_of_drawing(&data);
    mlx_loop(data.mlx);
    
    return 0;
}