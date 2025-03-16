NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
HEADER = ft_printf.h
SRCS =	ft_putchar.c ft_putstr.c ft_putnbr.c ft_putunbr.c \
		ft_puthex.c ft_putaddr.c ft_printf.c
OBJS =	ft_putchar.o ft_putstr.o ft_putnbr.o ft_putunbr.o \
		ft_puthex.o ft_putaddr.o ft_printf.o

all : $(NAME)

$(NAME) : $(OBJS)

%.o : %.c $(HEADER)
	$(CC) $(CFLAGS) -c $<
	ar -rc $(NAME) $@


clean :
	rm -f $(OBJS)
	
fclean : clean 
	rm -f $(NAME)

re : fclean all
