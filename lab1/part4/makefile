CC      = gcc
CFLAGS  = -Wall -O0  

all: bench_sdot.out

bench_sdot.o: bench_sdot.c
	$(CC) $(CFLAGS) -c $< -o $@

sdot.o: sdot.c
	$(CC) $(CFLAGS) -c $< -o $@

bench_sdot.out: bench_sdot.o sdot.o
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f *.o *.out
