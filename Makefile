NAME	=	libasm.a
SRCS	=	ft_strlen.s\
			ft_strcmp.s\
			ft_strdup.s\
			ft_strcpy.s\
			ft_write.s\
			ft_read.s

OBJS	=	$(SRCS:.s=.o)

%.o:		%.s
			nasm -fmacho64 $<

$(NAME):	$(OBJS)
			ar rc $(NAME) $(OBJS)


all:		$(NAME)

clean:
			rm -rf $(OBJS)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all