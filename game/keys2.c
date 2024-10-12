/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keys2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohammou- <ohammou-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 18:14:08 by ohammou-          #+#    #+#             */
/*   Updated: 2024/10/12 10:39:20 by ohammou-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"


void move2(int key, int *x, int *y)
{
    if (key == 65363 && (*x != 60 || data_global()->map.map[data_global()->j][data_global()->i + 1] != '1'))
    {
        data_global()->x += 20;
        printf("s\n");
        *x += 20;
    }
    else if (key == 65362)
    {
        data_global()->y -= 20;
        *y -= 20;
    }
    else if (key == 65361 && (*x != 0 || data_global()->map.map[data_global()->j][data_global()->i - 1] != '1'))
    {
        data_global()->x -= 20;
        *x -= 20;
    }
    else if (key == 65364)
    {
        data_global()->y += 20;
        *y += 20;
    }  
}

int move(int key, void *parm)
{
    static int x = 40;
    static int y = 40;

    if (key == 65363 && x == 60 && data_global()->map.map[data_global()->j][data_global()->i + 1] != '1')
    {
        data_global()->map.map[data_global()->j][data_global()->i + 1] = data_global()->map.map[data_global()->j][data_global()->i];
        data_global()->map.map[data_global()->j][data_global()->i] = '0';
        data_global()->i++;
        x = 0;
    }
    else if (key == 65361 && x == 0 && data_global()->map.map[data_global()->j][data_global()->i - 1] != '1')
    {
        data_global()->map.map[data_global()->j][data_global()->i - 1] = data_global()->map.map[data_global()->j][data_global()->i];
        data_global()->map.map[data_global()->j][data_global()->i] = '0';
        data_global()->i--;
        x = 60;     
    }
    move2(key, &x, &y);
    return 0;
}
