include ../Makefile.inc

allgen : ${TLPI_LIB}

${TLPI_LIB} : *.c ename.c.inc
	${CC} -c -g ${CFLAGS} *.c
	${RM} ${TLPI_LIB}
	${AR} rs ${TLPI_LIB} *.o

clean :
	${RM} *.o ${TLPI_LIB}
