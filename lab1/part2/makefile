CC      = gcc
CFLAGS  = -Wall -O0         

all: bench_sscal.out

bench_sscal.o: bench_sscal.c
	$(CC) $(CFLAGS) -c $< -o $@

sscal.o: sscal.c
	$(CC) $(CFLAGS) -c $< -o $@

bench_sscal.out: bench_sscal.o sscal.o
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f *.o *.out
