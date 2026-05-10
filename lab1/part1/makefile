CC=gcc
CFLAGS=-Wall -O0

all: bench_iaxpy.out

bench_iaxpy.o: bench_iaxpy.c
	${CC} ${CFLAGS} -c $^ -o $@
iaxpy.o: iaxpy.c
	${CC} ${CFLAGS} -c $^ -o $@
bench_iaxpy.out: bench_iaxpy.o iaxpy.o
	${CC} ${CFLAGS} -o $@ $^
	
clean:
	rm -f *.o *.out
