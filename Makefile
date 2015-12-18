# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cglavieu <cglavieu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/18 15:49:16 by cglavieu          #+#    #+#              #
#    Updated: 2015/12/18 19:51:53 by cglavieu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: clean, fclean, re

CC = gcc

CFLAG = -Wall -Wextra -Werror

NAME = ft_ls

SRCDIR=		./src/
SRC=		main.c get_opt.c ft_new_lst.c ft_begin.c ft_error.c ft_write_files.c\
			ft_swap_error.c ft_ascii_sort.c ft_lst_del.c ft_time_sort.c get_stats.c\
			ft_ls.c ft_check_stats.c aff_stats.c aff_uid_grp.c aff_min_maj.c\
			ft_check_min_maj.c ft_ind_init.c ft_space_device.c little_check.c\
			ft_little_date.c ft_ind_stuff.c ft_main_do.c\

SRCFIL=		$(addprefix $(SRCDIR),$(SRC))

OBJ = $(SRC:.c=.o)
OBJDIR = ./obj/

LIBFT = ./inc/libft/

LIBFTEXE = $(LIBFT)libft.a

INC = ./inc/

INC_LIBFT = ./inc/libft/inc/

all:    $(NAME)

$(NAME): $(addprefix $(OBJDIR),$(OBJ)) $(LIBFTEXE)
		@$(CC) $(CFLAG) -o $(NAME)\
		$(addprefix $(OBJDIR), $(OBJ)) -L $(LIBFT) -lft


$(OBJDIR)%.o: $(SRCDIR)%.c
		@mkdir -p $(OBJDIR)
		@$(CC) $(CFLAG) -I $(INC) -I  $(INC_LIBFT) -o $@ -c $<

$(LIBFTEXE): $(LIBFT)
		@make -k -s -C $(LIBFT)

clean:	
		@rm -Rf  $(OBJ)
		@make -C $(LIBFT) clean

fclean: 
		@rm -Rf  $(OBJDIR)
		@rm -f $(NAME)
		@make -C $(LIBFT) fclean

re:		fclean all
