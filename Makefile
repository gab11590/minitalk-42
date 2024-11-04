# Nom des exécutables
SERVER = server
CLIENT = client
SERVER_BONUS = server_bonus
CLIENT_BONUS = client_bonus
PRINTF_LIB = libftprintf.a
LIBFT_DIR = libft
LIBFT_LIB = $(LIBFT_DIR)/libft.a

# Répertoires des fichiers source
SRC_DIR = .
PRINTF_DIR = printf

# Fichiers source
SRCS_SERVER = $(SRC_DIR)/server.c
SRCS_CLIENT = $(SRC_DIR)/client.c
SRCS_SERVER_BONUS = $(SRC_DIR)/server_bonus.c
SRCS_CLIENT_BONUS = $(SRC_DIR)/client_bonus.c

# Fichiers source de printf
PRINTF_SRCS = $(PRINTF_DIR)/ft_printf.c \
              $(PRINTF_DIR)/ft_putnbr_pf.c \
              $(PRINTF_DIR)/ft_putchar_pf.c \
              $(PRINTF_DIR)/ft_putstr_pf.c \
              $(PRINTF_DIR)/ft_putuint_pf.c \
              $(PRINTF_DIR)/ft_puthex_pf.c \
              $(PRINTF_DIR)/ft_putptr_pf.c \
              $(PRINTF_DIR)/ft_aux_pf.c

# Objets générés
OBJS_SERVER = $(SRCS_SERVER:.c=.o)
OBJS_CLIENT = $(SRCS_CLIENT:.c=.o)
OBJS_SERVER_BONUS = $(SRCS_SERVER_BONUS:.c=.o)
OBJS_CLIENT_BONUS = $(SRCS_CLIENT_BONUS:.c=.o)
PRINTF_OBJS = $(PRINTF_SRCS:.c=.o)

# Flags de compilation
CFLAGS = -Wall -Wextra -Werror -fPIE
LDFLAGS = -pie

# Règles de compilation
all: $(SERVER) $(CLIENT)

bonus: $(SERVER_BONUS) $(CLIENT_BONUS)

# Création de la bibliothèque printf
$(PRINTF_LIB): $(PRINTF_OBJS)
		ar rcs $(PRINTF_LIB) $(PRINTF_OBJS)

# Création de la bibliothèque libft
$(LIBFT_LIB):
		$(MAKE) -C $(LIBFT_DIR)

# Compilation des exécutables standards
$(SERVER): $(OBJS_SERVER) $(PRINTF_LIB) $(LIBFT_LIB)
		gcc $(CFLAGS) $(OBJS_SERVER) -o $(SERVER) -L. -lftprintf -L$(LIBFT_DIR) -lft $(LDFLAGS)

$(CLIENT): $(OBJS_CLIENT) $(PRINTF_LIB) $(LIBFT_LIB)
		gcc $(CFLAGS) $(OBJS_CLIENT) -o $(CLIENT) -L. -lftprintf -L$(LIBFT_DIR) -lft $(LDFLAGS)

# Compilation des exécutables bonus
$(SERVER_BONUS): $(OBJS_SERVER_BONUS) $(PRINTF_LIB) $(LIBFT_LIB)
		gcc $(CFLAGS) $(OBJS_SERVER_BONUS) -o $(SERVER_BONUS) -L. -lftprintf -L$(LIBFT_DIR) -lft $(LDFLAGS)

$(CLIENT_BONUS): $(OBJS_CLIENT_BONUS) $(PRINTF_LIB) $(LIBFT_LIB)
		gcc $(CFLAGS) $(OBJS_CLIENT_BONUS) -o $(CLIENT_BONUS) -L. -lftprintf -L$(LIBFT_DIR) -lft $(LDFLAGS)

# Nettoyage des fichiers objets
clean:
		rm -f $(OBJS_SERVER) $(OBJS_CLIENT) $(OBJS_SERVER_BONUS) $(OBJS_CLIENT_BONUS) $(PRINTF_OBJS)
		$(MAKE) -C $(LIBFT_DIR) clean

# Nettoyage complet
fclean: clean
		rm -f $(SERVER) $(CLIENT) $(SERVER_BONUS) $(CLIENT_BONUS) $(PRINTF_LIB)
		$(MAKE) -C $(LIBFT_DIR) fclean

# Recompiler tout
re: fclean all

.PHONY: all clean fclean re bonus
