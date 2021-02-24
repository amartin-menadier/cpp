NAME = base

SRCS = main.cpp

CFLAGS = -Wall -Werror -Wextra 

BUILD_DIR = obj
OBJS = $(SRCS:.cpp=.o)
OBJ = $(addprefix $(BUILD_DIR)/,$(OBJS))

all: $(NAME)

$(NAME): $(OBJ)
	clang++ $(OBJ) -lm -o $(NAME) -g -fsanitize=address
	@echo "$(NAME) created"

$(BUILD_DIR)/%.o: %.cpp Makefile
	@mkdir -p $(BUILD_DIR)
	clang++ $(CFLAGS) -o $@ -c $<

clean:
	@/bin/rm -rf $(BUILD_DIR)

fclean: clean
	@/bin/rm -f $(NAME)

re : 
	@make fclean
	@make all

.PHONY: all, clean, fclean, re, all
