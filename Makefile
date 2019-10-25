# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aougdal <aougdal@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/18 00:19:12 by aougdal           #+#    #+#              #
#    Updated: 2019/10/24 16:16:21 by aougdal          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FUNC = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
FUNC_O = $(FUNC:.c=.o)
BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c
BONUS_O = $(BONUS:.c=.o)

all: $(NAME)

$(NAME): $(FUNC_O)
	ar rc $(NAME) $(FUNC_O)
	ranlib $(NAME)

bonus: $(BONUS_O)
	ar rc $(NAME) $(BONUS_O)
	ranlib $(NAME)

%.o: %.c
	gcc -Wall -Wextra -Werror -c $<

clean:
	rm -rf $(FUNC_O) $(BONUS_O)

fclean: clean
	rm -rf $(NAME)

re: fclean all