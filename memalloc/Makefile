include ../Makefile.inc

EXE = free_and_sbrk
all : ${EXE}

free_and_sbrk : free_and_sbrk.o
	${CC} ${CFLAGS} -o $@ $^ ${TLPI_LIB}
free_and_sbrk.o : free_and_sbrk.c
	${CC} ${CFLAGS} -c -o $@ $^

clean :
	@echo "delete ${EXE}"
	${RM} ${EXE} *.o
