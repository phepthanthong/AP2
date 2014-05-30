CC=g++
DEPS=date.h
OBJ=main.o date.o
EXE=main

$(EXE): $(OBJ)
	$(CC) $(OBJ) -o $@

%.o: %.cc $(DEPS)
	$(CC) -c -o $@ $< 

clean:
	rm -fr *~ *.o $(EXE)
