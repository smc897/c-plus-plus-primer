IDIR = h
CC=g++
CFLAGS=-I$(IDIR)

ODIR=cpp
LDIR=cpp

LIBS=-lm

_DEPS = ex6_3.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = ex6_3.o getInput.o fact.o 
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))


$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS) 

ex6_3: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(IDIR)/*~ 
