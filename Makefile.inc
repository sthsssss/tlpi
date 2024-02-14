TLPI_DIR = ..

TLPI_INCL_DIR = ${TLPI_DIR}/lib

IMPL_CFLAGS = -std=c99 \
              -D_DEFAULT_SOURCE \
		          -g -I${TLPI_INCL_DIR}

CC = gcc

CFLAGS = ${IMPL_CFLAGS}

RM = rm -f