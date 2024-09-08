/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_wall.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohammou- <ohammou-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 15:03:02 by ohammou-          #+#    #+#             */
/*   Updated: 2024/09/08 18:45:19 by ohammou-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

void check_wall(t_map *map)
{
    int i;
    int j;
    int len;

    i = 0;
    while (map->map[i])
    {
        j = 0;
        len = ft_strlen(map->map[i]) - 1;
        while (map->map[i][j] == ' ')
            j++;
        while (len && map->map[i][len] == ' ')
            len--;
        if (map->map[i][j] != '1' || map->map[i][len] != '1')
            ft_error("lmap mam9adach");
        i++;
    }
}

int ft_strlen_blm9lob(char **map)
{
    int len;

    len = 0;
    while (map[len])
        len++;
    return (len);
}

void    check_floodfile(char **map)
{
    int i;
    int j;

    j = 0;
    while (map[j])
    {
        i = 0;
        while (map[j][i])
        {
            if (map[j][i] == 'F')
            {
                if (map[j][i + 1] == ' ' || (i - 1 >= 0 && map[j][i - 1] == ' '))
                    ft_error("mamsdodach\n");
                if (map[j + 1][i] == ' ' || (j - 1 >= 0 && map[j - 1][i] == ' '))
                    ft_error("masd9atch\n");
                if (map[j][i + 1] == '\0' || (i - 1 >= 0 && map[j][i - 1] == '\0'))
                    ft_error("mamsdodach2\n");
                if (map[j + 1][i] == '\0' || (j - 1 >= 0 && map[j - 1][i] == '\0'))
                    ft_error("masd9atch2\n");
            }
            i++;
        }
        j++;
    }
}

void    flodfile(char **map, int i, int j)
{
    if (j < 0 || j >= ft_strlen_blm9lob(map) ||i < 0 || i >= ft_strlen(map[j]))
        return ;
    if (map[j][i] == '1' || map[j][i] == 'F' || map[j][i] == ' ')
        return ;
    map[j][i] = 'F';
    flodfile(map, i + 1,j);
    flodfile(map, i,j + 1);
    flodfile(map, i - 1,j);
    flodfile(map, i,j - 1);
}

void check_wall2(t_map *map)
{
    char **mapp;

    mapp = duplicate_map(map->map);
    flodfile(mapp,26,11);
    // for (int h = 0;mapp[h];h++)
    //     printf("%s\n", mapp[h]);
    check_floodfile(mapp);
    free_map(mapp);
}
