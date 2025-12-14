BUILD_PATH =	build
CFILES_PATH =	src
CFILES =	$(CFILES_PATH)/main.c \
		$(CFILES_PATH)/io.c \

OBJ =		$(CFILES:$(CFILES_PATH)/%.c=$(BUILD_PATH)/%.o)

NAME =		baseSwap
CC =		gcc
MAKEFLAGS +=	--no-print-directory
CFLAGS =	-Wall -Werror -Wextra -Iinclude

all:
	@echo "Building $(NAME)...\n"
	@$(MAKE) $(NAME)
	@echo "Done."

$(NAME): $(OBJ) 
	@echo "Linking $(NAME)...\n"
	@$(CC) $(OBJ) -o $(NAME)

$(BUILD_PATH)/%.o: $(CFILES_PATH)/%.c
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo "Cleaning object files...\n"
	@rm -f $(BUILD_PATH)/*.o

fclean: clean
	@echo "Fully cleaning project...\n"
	@rm -f $(NAME)
	@rm -rf $(BUILD_PATH)

re: fclean all

leaks: all
	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./$(NAME)

.PHONY: all clean fclean re
