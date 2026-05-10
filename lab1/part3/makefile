CC      = gcc
CFLAGS  = -Wall -O0   

all: bench_dgemm.out

bench_dgemm.o: bench_dgemm.c
	$(CC) $(CFLAGS) -c $< -o $@

dgemm.o: dgemm.c
	$(CC) $(CFLAGS) -c $< -o $@

bench_dgemm.out: bench_dgemm.o dgemm.o
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f *.o *.out
