include ../Makefile.inc

EXE = mem_segments necho

all : ${EXE}

mem_segments : mem_segments.o
	${CC} ${CFLAGS} -o $@ $^
mem_segments.o : mem_segments.c
	${CC} ${CFLAGS} -c -o $@ $^

necho : necho.o
	${CC} ${CFLAGS} -o $@ $^ ${TLPI_LIB}
necho.o : necho.c
	${CC} ${CFLAGS} -c -o $@ $^ 

clean :
	@echo "delete ${EXE}"
	${RM} ${EXE} *.o
