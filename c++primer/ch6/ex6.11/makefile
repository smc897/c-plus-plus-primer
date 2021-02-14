IDIR = h
CC=g++
CFLAGS=-I$(IDIR)

ODIR=cpp
LDIR=cpp

LIBS=-lm

_DEPS = ex6_11.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = ex6_11.o getInput.o getFirstOcurrence.o showOutput.o 
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))


$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS) -std=c++11

ex6_11: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS) -std=c++11

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(IDIR)/*~ 
