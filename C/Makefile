# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: rlossy <marvin@le-101.fr>                  +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/03/14 14:34:00 by rlossy       #+#   ##    ##    #+#        #
#    Updated: 2018/06/14 14:15:10 by rlossy      ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME				=	Dr_Quine
COLLEEN				=	Colleen
GRACE				=	Grace
SULLY				=	Sully
COLLEEN_FILENAMES	=	Colleen.c
GRACE_FILENAMES		=	Grace.c
SULLY_FILENAMES		=	Sully.c

COLLEEN_SOURCES		=	$(addprefix Colleen_dir/, $(COLLEEN_FILENAMES))
GRACE_SOURCES		=	$(addprefix Grace_dir/, $(GRACE_FILENAMES))
SULLY_SOURCES		=	$(addprefix Sully_dir/, $(SULLY_FILENAMES))
COLLEEN_OBJECTS		=	$(addprefix build/, $(COLLEEN_FILENAMES:.c=.o))
GRACE_OBJECTS		=	$(addprefix build/, $(GRACE_FILENAMES:.c=.o))
SULLY_OBJECTS		=	$(addprefix build/, $(SULLY_FILENAMES:.c=.o))

FLAGS				=	-Wall -Wextra -Werror

LOADIR				=	../extra/Progress_Bar-for-Makefile
LOADF				=	$(LOADIR)/loading.sh

.PHONY: all clean fclean re


all: $(NAME)

clean:
	@echo "\033[31m"
	@sh $(LOADF) $(LOADIR) $@ r n $(NAME)
	@rm -rf build/
	@printf "\n\033[1m\033[34m\t\t\t\t⥷ $(NAME)⭃\tObject Files\t\033[0m\
	\033[1m⟿ \t\033[31mDeletion Success\033[0m ✅\n"

fclean: clean
	@echo "\033[31m"
	@sh $(LOADF) $(LOADIR) $@ r n $(NAME)
	@rm -f $(COLLEEN)
	@rm -f $(GRACE)
	@rm -f $(SULLY)
	@printf "\n\033[1m\033[34m\t\t\t\t⥷ $(NAME)⭃\tCompiled Files\t\033[0m\
	\033[1m⟿ \t\033[31mDeletion Success\033[0m ✅\n"

re:
	@$(MAKE) fclean
	@$(MAKE) all

build:
	@echo "\033[35m"
	@mkdir build/

$(NAME): $(COLLEEN) $(GRACE) $(SULLY)

$(COLLEEN): $(COLLEEN_OBJECTS)
	@printf "\n\033[1m\033[34m\t\t\t\t⥷ $@⭃\tObject Files\033[0m \
		\033[1m⟿ \t\033[32mCreation Success\033[0m ✅\n"
	@echo "\033[42m\033[30m"
	@sh $(LOADF) $(LOADIR) $@ e n $(COLLEEN)
	@echo "\033[0m"
	@gcc $(FLAGS) $(COLLEEN_OBJECTS) -o $@
	@printf "\n\033[1m\033[34m\t\t\t\t⥷ $@⭃\tExecutable\t\t\033[0m \033[1m⟿  \
		\033[32mCreation Success\033[0m ✅\n"

$(GRACE): $(GRACE_OBJECTS)
	@printf "\n\033[1m\033[34m\t\t\t\t⥷ $@⭃\tObject Files\033[0m \
		\033[1m⟿ \t\033[32mCreation Success\033[0m ✅\n"
	@echo "\033[42m\033[30m"
	@sh $(LOADF) $(LOADIR) $@ e n $(GRACE)
	@echo "\033[0m"
	@gcc $(FLAGS) $(GRACE_OBJECTS) -o $@
	@printf "\n\033[1m\033[34m\t\t\t\t⥷ $@⭃\tExecutable\t\t\033[0m \033[1m⟿  \
		\033[32mCreation Success\033[0m ✅\n"

$(SULLY): $(SULLY_OBJECTS)
	@printf "\n\033[1m\033[34m\t\t\t\t⥷ $@⭃\tObject Files\033[0m \
		\033[1m⟿ \t\033[32mCreation Success\033[0m ✅\n"
	@echo "\033[42m\033[30m"
	@sh $(LOADF) $(LOADIR) $@ e n $(SULLY)
	@echo "\033[0m"
	@gcc $(FLAGS) $(SULLY_OBJECTS) -o $@
	@printf "\n\033[1m\033[34m\t\t\t\t⥷ $@⭃\tExecutable\t\t\033[0m \033[1m⟿  \
		\033[32mCreation Success\033[0m ✅\n"

build/%.o: Colleen_dir/%.c | build
	@echo "\033[35m"
	@sh $(LOADF) $(LOADIR) $< o y
	@gcc $(FLAGS) -c $< -o $@

build/%.o: Grace_dir/%.c | build
	@echo "\033[35m"
	@sh $(LOADF) $(LOADIR) $< o y
	@gcc $(FLAGS) -c $< -o $@

build/%.o: Sully_dir/%.c | build
	@echo "\033[35m"
	@sh $(LOADF) $(LOADIR) $< o y
	@gcc $(FLAGS) -c $< -o $@