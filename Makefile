NAME		=	cub3d
CC			=	cc
CFLAGS		=	-Wall -Wextra -Werror
MINILBX		=	minilibx-linux/libmlx_Linux.a
PATH_MLX	=	minilibx-linux/
LIBFT		=	tools/libft/libft.a
LIBFT_PATH	=	tools/libft
SRC			=	main.c tools/get_next_line/get_next_line.c tools/get_next_line/get_next_line_utils.c 
SRC_O		=	$(SRC:.c=.o)

all: $(NAME)

$(LIBFT): 
	@make -C $(LIBFT_PATH) > test
	@echo libft DONE

$(MINILBX):
	@make -C $(PATH_MLX) > test
	@echo minilibx DONE

$(NAME): $(LIBFT) $(MINILBX) $(SRC_O)
	@echo objecte DONE
	@$(CC) $(CFLAGS) $(SRC_O) $(MINILBX) $(LIBFT) -L$(PATH_MLX) -lmlx -lXext -lX11 -lm  -lSDL2 -lSDL2_mixer -o $(NAME)
	@echo $(NAME) DONE
	@rm -f test

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(SRC_O)
	@make -C $(LIBFT_PATH) clean > test
	@echo all objecte clean
	@rm test
	 

fclean: clean
	@rm -f $(NAME)
	@echo the programe clean
	@make -C $(LIBFT_PATH) fclean > test
	@rm test

re: fclean all

.SECONDARY: $(SRC_O)

.PHONY: all clean fclean re test
