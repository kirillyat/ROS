SRCDIR=src
INCLUDEDIR=include
MPI_CC=mpicc
NPROC=3

.PHONY: all clean main

all: main
	mpiexec -n $(NPROC) ./main

debug: clean
	$(MPI_CC) $(SRCDIR)/main.c -o main -I$(INCLUDEDIR) -DDEBUG
	mpiexec -n $(NPROC) ./main

main: clean
	$(MPI_CC) $(SRCDIR)/main.c -o main -I$(INCLUDEDIR)

clean:
	rm -f main critical.txt