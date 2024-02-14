include ../Makefile.inc

COPY = copy

EXE = ${COPY}

copy : copy.o
	${CC} ${CFLAGS} -o $@ $^
copy.o: copy.c
	${CC} ${CFLAGS} -c -o $@ $^

check : 
	@echo "This is a message printed by the Makefile $(CFLAGS)"

clean :
	${RM} ${EXE} *.o