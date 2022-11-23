NAME    		=    phoneBook

SRCS    		= 	main.cpp Contact.cpp PhoneBook.cpp

CPPFLAGS 			=	-Wall -Wextra -Werror 

OBJS			=    $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME):  $(OBJS)
	c++ $(FLAGS) $(SRCS) -o $(NAME)

clean:
	@rm -f ${OBJS}

fclean:    clean
	@rm -f ${NAME}

re: fclean all

.PHONY:		all clean fclean re
