CC=g++
OBJ=date.o
DEPS=date.h
EXE=main

$(EXE): $(OBJ)
	$(CC) $(OBJ) -o $@

%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $<

clean:
	rm -fr *~ *.o $(EXE)
