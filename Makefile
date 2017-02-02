##
## Makefile for Makefile in /home/clement/Documents/libmy_extended/liblist/Makefile
##
## Made by LENOURS ClÃ©ment
## Login   <lenour_c@etna-alternance.net>
##
## Started on  Sat Oct 22 18:18:08 2016 LENOURS Clément
## Last update Sat Nov 12 12:17:00 2016 LENOURS Clément
##

CC=gcc
AR=ar rcs
CFLAGS=-Wall -Wextra -Werror
SRC=linked_list.c linked_list2.c my_strcmp.c
OBJS=$(SRC:.c=.o)
RM=rm -f
NAME=liblist.a

all	: $(OBJS)
	$(AR) $(NAME) $(OBJS)

objs : $(SRC)
	$(CC) -o $(OBJS) -c $(SRC) $(CFLAGS)

clean	:
		$(RM) $(OBJS)

fclean	:	clean
		$(RM) $(NAME)

re	:	fclean all

.PHONY	:	all clean fclean re
