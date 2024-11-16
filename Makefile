SRC =  	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c\
		ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c	\
		ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c	\
		ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c		\
		ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

SRCB =	ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c\
		ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

CC = cc
NAME = libft.a
FLAGS = -Wall -Wextra -Werror
HEADER = libft.h
OBJB = $(SRCB:.c=.o)
OBJ	= $(SRC:.c=.o)
LINK = ar rcs

all: $(NAME)

$(NAME): $(OBJ)
	$(LINK) $(NAME) $(OBJ)

bonus: $(OBJB) $(NAME)
	$(LINK) $(NAME) $(OBJB)

%.o: %.c $(HEADER)
	$(CC) $(FLAGS) -c $< -o $(<:.c=.o)

# handled bonus in the rule above, now removed and only kept the mandatory handeling. #

clean:
	rm -f $(OBJ) $(OBJB)
	
fclean: clean
	rm -f $(NAME) bonus

re: fclean all

push: fclean
	@git add .
	@git commit -m "Committed by: `whoami`, On `date`."
	@git push

norm:
	@norminette

.PHONY: clean norm
