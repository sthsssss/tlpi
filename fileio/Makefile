include ../Makefile.inc

COPY = copy
BAD_EXCLUSIVE_OPEN = bad_exclusive_open

EXE = ${COPY} ${BAD_EXCLUSIVE_OPEN}

all : ${EXE}

copy : copy.o
	${CC} ${CFLAGS} -o $@ $^
copy.o: copy.c
	${CC} ${CFLAGS} -c -o $@ $^

bad_exclusive_open : bad_exclusive_open.o
	${CC} ${CFLAGS} -o $@ $^
bad_exclusive_open.o: bad_exclusive_open.c
	${CC} ${CFLAGS} -c -o $@ $^


check : 
	@echo "This is a message printed by the Makefile $(CFLAGS)"

clean :
	${RM} ${EXE} *.o

${EXE} : ${TLPI_LIB}