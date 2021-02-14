IDIR = h
CC=g++
CFLAGS=-I$(IDIR)

ODIR=cpp
LDIR=cpp

LIBS=-lm

_DEPS = ex6_10.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = main.o getInput.o swap.o showOutput.o 
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))


$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS) -std=c++11

ex6_10: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS) -std=c++11

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(IDIR)/*~ 
