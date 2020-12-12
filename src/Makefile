# Makefile for SDL_bgi
# For GNU/Linux, macOS, and MSYS2 + Mingw

VERSION := $(shell cat ../VERSION)
NAME    = SDL_bgi
SRC     = $(NAME).c
OBJ     = $(NAME).o
HEADER1 = SDL_bgi.h 
HEADER2 = graphics.h
FONTS   = bold.h euro.h goth.h lcom.h \
          litt.h sans.h scri.h simp.h \
	  trip.h tscr.h

# Detect the platform: GNU/Linux, macOS, or MSYS2
PLATFORM := $(shell uname -s)

# GNU/Linux
ifeq ($(PLATFORM),Linux)
INC_DIR = /usr/include
SDL_INC = $(INC_DIR)/SDL2
LIB_DIR = /usr/lib/
LIB     = lib$(NAME).so
LDFLAGS = -lSDL2
PIC     = -fPIC
STRIP   = strip -x
endif

# macOS
ifeq ($(PLATFORM),Darwin)
INC_DIR = /usr/local/include
SDL_INC = /usr/local/include/SDL2
LIB_DIR = /usr/local/lib
LIB     = lib$(NAME).so
LDFLAGS = -lSDL2
PIC     = -fPIC
STRIP   = strip -x
endif

# MSYS2
msys := $(findstring MSYS, $(PLATFORM))
ifeq ($(msys),MSYS)
PLATFORM = MSYS
INC_DIR = /mingw64/include
SDL_INC = $(INC_DIR)/SDL2
LIB_DIR = /mingw64/bin
LIB     = $(NAME).dll
LDFLAGS = -L/mingw64/bin -lSDL2
PIC     =
STRIP   = strip
endif

# $(info *** Building on $(PLATFORM) ***)
# $(info )

# C compiler: tested with gcc and clang
CC = gcc
# -Wextra
CFLAGS = -O2 -std=gnu99 -g -c -Wall -I $(INC_DIR) -I $(SDL_INC) $(PIC)

.PHONY : all
all: $(LIB)

$(OBJ):	$(SRC) $(FONTS) $(HEADER1)
	$(CC) $(CFLAGS) $(SRC)

$(LIB): $(OBJ)
	$(CC) -shared -o $(LIB) $(OBJ) $(LDFLAGS) ; \
	$(STRIP) $(LIB)

install: $(LIB) $(HEADER1)
	install -m 755 $(LIB) $(LIB_DIR) ; \
	install -m 644 $(HEADER1) $(SDL_INC) ; \
	install $(HEADER2) $(INC_DIR)

uninstall:
	rm -f $(SDL_INC)/$(HEADER1) ; \
	rm -f $(INC_DIR)/$(HEADER2)
	rm -f $(LIB_DIR)/$(LIB)

test: all
	cd ../test; make

clean:
	rm -f $(OBJ) $(LIB) a.out
