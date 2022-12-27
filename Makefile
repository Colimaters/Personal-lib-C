##
## Colimaters PROJECT, 2018
## Makefile
## File description:
## Makefile for library
##

##
## \file Makefile
## \brief Create a libmy.a to include to other programs
##

SRC = $(shell find . -wholename "./src/*.c")

TSRC = ./test/test_char_is.c \
		./test/test_get_content_file.c \
		./test/test_get_elem_str.c \
		./test/test_my_getnbr.c \
		./test/test_stwa.c \
		./test/test_str_is.c \
		./test/test_my_strcpy.c \
		./test/test_my_strcat.c \
		./test/test_int_to_str.c \
		./test/test_str_compare.c \
		./test/test_tab_to_str.c
#TEST = $(shell find . -wholename "./test/*.c")

OBJ = $(SRC:.c=.o)
TOBJ = $(TSRC:.c=.o)

NAME = libmy.a
TNAME = test_libmy
REPORT_NAME = test_report

CC = gcc

OPTI_CC = -O1 -fsigned-char

CFLAGS = -I ../include $(OPTI_CC)

TEST_FLAGS =

YELLOW = "\033[01;33m"
RED = "\033[01;31m"
GREEN = "\033[01;32m"
WHITE = "\033[00m"

IMPORTANT = $(RED) "=>" $(GREEN)
HIGHLIGHT = $(RED) "->" $(GREEN)
CHECK = "✅ "

all: $(NAME)

%.o: %.c
	@$(CC) -c $^ -o $@ $(TEST_FLAGS)
	@echo $(HIGHLIGHT) $(CHECK) $(notdir $^)

$(TNAME): test_compile $(OBJ) $(TOBJ)
	@$(CC) -o $@ $(OBJ) $(TOBJ) $(TEST_FLAGS)
	@echo $(IMPORTANT) "Build" $@
	@./$@
	@gcovr -s -e "test/*"

test_compile:
	$(eval TEST_FLAGS := --coverage -lcriterion -lgcov -fprofile-arcs -ftest-coverage)

viewcov: $(TNAME)
	@gcovr -e "test/*" -u --html-details -o $(REPORT_NAME).html --html-title $(REPORT_NAME)
	@#xdg-open $(REPORT_NAME).html

$(NAME): $(OBJ)
	@ar rc $@ $^
	@echo $(IMPORTANT) "Build" $@

clean:
	@rm -f $(OBJ) $(TOBJ)
	@find . -name "*.gcno" -delete -o -name "*.gcda" -delete -o -name "*.html" -delete -o -name "*.css" -delete
	@echo $(IMPORTANT) "Delete *.o"

fclean: clean
	@rm -f $(NAME) $(TNAME)
	@echo $(IMPORTANT) "Delete" $(NAME) $(TNAME)

re: fclean all

.PHONY: all clean fclean re
