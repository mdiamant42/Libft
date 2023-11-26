# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdiamant <mdiamant@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/22 09:28:12 by mdiamant          #+#    #+#              #
#    Updated: 2023/02/21 14:13:02 by mdiamant         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	ft_atoi.c \
			ft_bzero.c \
			ft_calloc.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_itoa.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memset.c \
			ft_strchr.c \
			ft_strdup.c \
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_strlen.c \
			ft_strncmp.c \
			ft_strnstr.c \
			ft_strrchr.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_strjoin.c \
			ft_split.c \
			ft_putstr_fd.c \
			ft_putnbr_fd.c \
			ft_putchar_fd.c \
			ft_putendl_fd.c \
			ft_substr.c \
			ft_strmapi.c \
			ft_striteri.c \
			ft_strtrim.c


BONUS_SRCS	=	ft_lstnew.c \
				ft_lstadd_front.c \
				ft_lstsize.c \
				ft_lstlast.c \
				ft_lstadd_back.c \
				ft_lstdelone.c \
				ft_lstclear.c \
				ft_lstiter.c \
				ft_lstmap.c

OBJS		= ${SRCS:.c=.o}
OBJSBONUS	= ${BONUS_SRCS:.c=.o}

NAME		= libft.a
CC			= gcc
RM			= rm -f
CFLAGS		= -Wall -Wextra -Werror

ifdef MAKEBONUS
	OBJS = $(OBJSBONUS) ${SRCS:.c=.o}
endif

all: 		${NAME}

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}
${NAME}:	${OBJS}
			ar rcs ${NAME} ${OBJS}
			ranlib $(NAME)
bonus:
			@make MAKEBONUS=1 all

all:		${NAME}

clean:
			${RM} ${OBJS} ${OBJSBONUS}
fclean:		clean
			${RM} ${NAME}
re:			fclean all

.PHONY: 	all clean fclean re .c.o
