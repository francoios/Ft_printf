NAME = libftprintf.a

SRC_O =		ft_accu.o	ft_flag_diese.o	ft_flag_h.o	ft_flag_hh.o
SRC_O +=	ft_flag_j.o	ft_flag_l.o	ft_flag_ll.o	ft_flag_space.o
SRC_O +=	ft_flag_z.o	ft_isnotype.o	ft_istype.o	ft_istype_pursent.o
SRC_O +=	ft_istype_c.o	ft_istype_cup.o	ft_istype_d.o	ft_istype_i.o
SRC_O +=	ft_istype_o.o	ft_istype_oup.o	ft_istype_p.o	ft_istype_s.o
SRC_O +=	ft_istype_u.o	ft_istype_uup.o	ft_istype_x.o	ft_istype_xup.o
SRC_O +=	ft_lenght.o	ft_opt_dieze.o	ft_opt_hub.o	ft_opt_moins.o
SRC_O +=	ft_opt_plus.o	ft_opt_space.o	ft_opt_zero.o	ft_printf.o
SRC_O +=	ft_putnbr_base_spe.o	ft_putnbr_spe.o	ft_putwchar.o	o_tochar.o
SRC_O +=	size_of_int.o	ft_istype_hub.o	ft_istype_hub2.o	ft_opt_hub2.o

LIBSRC = ft_atoi.o			ft_bzero.o		ft_memcpy.o		ft_memccpy.o	\
	  ft_memmove.o		ft_memchr.o		ft_strlen.o		ft_strdup.o		\
	  ft_strcpy.o		ft_strncpy.o	ft_strcat.o		ft_strncat.o	\
	  ft_strlcat.o		ft_strchr.o		ft_strrchr.o	ft_strstr.o		\
	  ft_strnstr.o		ft_strcmp.o		ft_strncmp.o	ft_atoi.o		\
	  ft_isalpha.o		ft_isdigit.o	ft_isalnum.o	ft_isascii.o	\
	  ft_isprint.o		ft_toupper.o	ft_tolower.o	ft_memalloc.o	\
	  ft_memdel.o		ft_strnew.o		ft_strdel.o		ft_strclr.o		\
	  ft_striter.o		ft_striteri.o	ft_strmap.o		ft_strmapi.o	\
	  ft_strequ.o		ft_strnequ.o	ft_strsub.o		ft_strjoin.o	\
	  ft_strtrim.o		ft_itoa.o		ft_putchar.o	ft_putstr.o		\
	  ft_putendl.o		ft_putnbr.o		ft_putchar_fd.o	ft_putstr_fd.o	\
	  ft_putendl_fd.o	ft_putnbr_fd.o	ft_memcmp.o		ft_memset.o		\
	  ft_strsplit.o		ft_lstmap.o		ft_lstadd.o		ft_lstiter.o	\
	  ft_lstdel.o		ft_lstdelone.o	ft_isxdigit.o	ft_lstnew.o		\
	  ft_isspace.o		ft_putnbr_base.o

SRC = ./proj/src/

OBJ = ./proj/obj/

CFLAGS = -Wall -Wextra -Werror

INC = ./includes

LIB = libft/

LFLAGS = -lft

LIB2 =

L2FLAGS =

CC = gcc

OBJ_O = $(addprefix $(OBJ), $(SRC_O))
OBJ_LIB = $(addprefix $(LIB), $(LIBSRC))

DFLAGS = -g

.SILENT :

all: $(OBJ) $(NAME)

$(OBJ):
ifeq ($(wildcard $(OBJ)),)
	@$(shell mkdir $(OBJ))
endif

$(NAME): $(OBJ_O)
	echo "[33; 1m Creation objets[0m"
	make -C $(LIB)
	ar rc $@ $(OBJ_O) $(OBJ_LIB)
	ranlib $@
	echo "[31; 1m Creation Exe[0m"

proper: $(NAME) clean

clean:
	rm -f $(addprefix $(OBJ), $(SRC_O))
	make clean -C $(LIB)
	echo "[32; 1m Clean obj[0m"

fclean: clean
	rm -f $(NAME)
	rm -f $(LIB)/$(LIB).a
	echo "[34; 1m Clean exe[0m"

re: fclean all

$(addprefix $(OBJ), %.o): $(addprefix $(SRC), %.c)
	$(CC) $(CFLAGS)  -c  $< -o $@ -I $(INC)
