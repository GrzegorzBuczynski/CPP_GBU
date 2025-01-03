# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbuczyns <gbuczyns@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/18 17:20:02 by gbuczyns          #+#    #+#              #
#    Updated: 2025/01/03 17:37:21 by gbuczyns         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic -Iinclude
RM = rm -f

NAME = harlFilter

SRCS = $(wildcard srcs/*.cpp)	
OBJS_DIR = objs
OBJS = $(patsubst srcs/%.cpp,$(OBJS_DIR)/%.o,$(SRCS))

all: 
	@$(MAKE) -s $(NAME)

# ------------  BUILD EXECUTABLE  -------------------------------------------- #
$(NAME):$(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME) 

# ------------  COMPILE OBJECT FILES  ---------------------------------------- #
$(OBJS_DIR)/%.o: srcs/%.cpp | $(OBJS_DIR)
	@echo "Compiling $< "
	@$(CC) $(FLAGS) -c $< -o $@

$(OBJS_DIR):
	mkdir -p $(OBJS_DIR)

clean:
	@if [ -d "$(OBJS_DIR)" ]; then \
		$(RM) -r $(OBJS_DIR); \
	fi

fclean: clean
	@if [ -f "$(NAME)" ]; then \
		$(RM) $(NAME); \
	fi

re: fclean all

.PHONY: all clean fclean re

run: all
