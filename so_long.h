/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaoual <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 15:51:37 by szaoual           #+#    #+#             */
/*   Updated: 2025/02/12 16:03:41 by szaoual          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# define TITLE_SIZE 128
# define Q_KEY 113
# define ESC_KEY 65307
# define PLAYER 'P'
# define WALL '1'
# define EMPTY '0'
# define MONEY 'C'
# define EXIT 'X'
# define UP_KEY 119
# define DOWN_KEY 115
# define RIGHT_KEY 100
# define LEFT_KEY 97
# define MAX_WIDTH 100
# define MAX_HEIGHT 100
# define BUFFER_SIZE 1

# include <mlx.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdio.h>
# include "./ft_printf/ft_printf.h"

#include "libft/libft.h"

typedef struct s_game
{
	void	*mlx;
	void	*window;
	char	**map;
	int		player_x;
	int		player_y;
	void	*textures[5];
	int		map_height;
	int		map_width;
  int   collectibles_collected;
  int   collectibles_total;
}	t_game;
void cleanup_game(t_game *game);
int		is_key(int keycode);
int		handle_key_press(int keycode, void *param);
char	*get_next_line(int fd);
char	*ft_extract_line(char **str);
char	**read_map(const char *file_name);
void	render_map(void *mlx, void *window, char **map, void **textures);
void	free_map(char **map);
#endif
