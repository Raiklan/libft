SHELL               =   /bin/zsh
# Executable name
NAME                =   libft.a
# Compilation
CC                  =   gcc -Wall -Wextra -Werror
# Name
SRC_NAME            =   ft_atoi.c               \
						ft_bzero.c              \
						ft_calloc.c             \
						ft_isalnum.c            \
						ft_isalpha.c            \
						ft_isascii.c            \
						ft_isdigit.c            \
						ft_isprint.c            \
						ft_itoa.c               \
						ft_memccpy.c            \
						ft_memchr.c             \
						ft_memcmp.c             \
						ft_memcpy.c             \
						ft_memmove.c            \
						ft_memset.c             \
						ft_putchar_fd.c         \
						ft_putendl_fd.c         \
						ft_putnbr_fd.c          \
						ft_putstr_fd.c          \
						ft_split.c              \
						ft_strchr.c             \
						ft_strdup.c             \
						ft_strjoin.c            \
						ft_strlcat.c            \
						ft_strlcpy.c            \
						ft_strlen.c             \
						ft_strmapi.c            \
						ft_strncmp.c            \
						ft_strnstr.c            \
						ft_strrchr.c            \
						ft_strtrim.c            \
						ft_substr.c             \
						ft_tolower.c            \
						ft_toupper.c            \

INCLUDE_NAME        =   libft.h
# Path
SRC_PATH            =   ./
OBJ_PATH            =   ./obj/
INCLUDE_PATH        =   ./
# Name + Path
SRC                 =   $(addprefix $(SRC_PATH),        $(SRC_NAME))
OBJ                 =   $(patsubst  $(SRC_PATH)%.c,     $(OBJ_PATH)%.o, $(SRC))
INCLUDE             =   $(addprefix $(INCLUDE_PATH),    $(INCLUDE_NAME))
# Text format
_DEF                =   $'\033[0m
_END                =   $'\033[0m
_GRAS               =   $'\033[1m
_SOUL               =   $'\033[4m
_CLIG               =   $'\033[5m
_SURL               =   $'\033[7m
# Colors
_BLACK              =   $'\033[30m
_RED                =   $'\033[31m
_GREEN              =   $'\033[32m
_YELLOW             =   $'\033[33m
_BLUE               =   $'\033[34m
_PURPLE             =   $'\033[35m
_CYAN               =   $'\033[36m
_GREY               =   $'\033[37m
# Background
_IBLACK             =   $'\033[40m
_IRED               =   $'\033[41m
_IGREEN             =   $'\033[42m
_IYELLOW            =   $'\033[43m
_IBLUE              =   $'\033[44m
_IPURPLE            =   $'\033[45m
_ICYAN              =   $'\033[46m
_IGREY              =   $'\033[47m
.PHONY: all bonus clean fclean re
all: $(NAME)
$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
$(OBJ_PATH)%.o: $(SRC_PATH)%.c $(INCLUDE)
	@mkdir -p $(OBJ_PATH)
	@$(CC) -I $(INCLUDE_PATH) -c $< -o $@
	@echo "$(_END)$(_GREEN)[OK]\t$(_UNDER)$(_YELLOW)\t"   \
		"COMPILE :$(_END)$(_BOLD)$(_WHITE)\t$<"
clean:
	rm -rf $(OBJ_PATH)
	@echo "$(_YELLOW)Remove :\t$(_RED)" $(OBJ_PATH)"$(_END)"
fclean: clean
	@rm -f $(NAME)
	@echo "$(_YELLOW)Remove :\t$(_RED)" $(NAME)
re: fclean all
