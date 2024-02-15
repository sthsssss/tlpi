include ../Makefile.inc

EXE = mem_segments necho display_env modify_env longjmp setjmp_vars\
				badlongjmp

all : ${EXE}

mem_segments : mem_segments.o
	${CC} ${CFLAGS} -o $@ $^
mem_segments.o : mem_segments.c
	${CC} ${CFLAGS} -c -o $@ $^

necho : necho.o
	${CC} ${CFLAGS} -o $@ $^ ${TLPI_LIB}
necho.o : necho.c
	${CC} ${CFLAGS} -c -o $@ $^ 

display_env : display_env.o
	${CC} ${CFLAGS} -o $@ $^ ${TLPI_LIB}
display_env.o : display_env.c
	${CC} ${CFLAGS} -c -o $@ $^

modify_env : modify_env.o
	${CC} ${CFLAGS} -o $@ $^ ${TLPI_LIB}
modify_env.o : modify_env.c
	${CC} ${CFLAGS} -c -o $@ $^

longjmp : longjmp.o
	${CC} ${CFLAGS} -o $@ $^ ${TLPI_LIB}
longjmp.o : longjmp.c
	${CC} ${CFLAGS} -c -o $@ $^

badlongjmp : badlongjmp.o
	${CC} ${CFLAGS} -o $@ $^ ${TLPI_LIB}
badlongjmp.o : badlongjmp.c
	${CC} ${CFLAGS} -c -o $@ $^

setjmp_vars : setjmp_vars.o
	${CC} ${CFLAGS} -o $@ $^ ${TLPI_LIB}
setjmp_vars.o : setjmp_vars.c
	${CC} ${CFLAGS} -c -o $@ $^

clean :
	@echo "delete ${EXE}"
	${RM} ${EXE} *.o
