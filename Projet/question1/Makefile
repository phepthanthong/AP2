CC=g++
DEPS=zoo.h employe.h ouvrier.h
OBJ=main.o zoo.o employe.o ouvrier.o
EXE=main

$(EXE): $(OBJ)
	$(CC) $(OBJ) -o $@

%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $<

clean:
	rm -fr *~ *.o $(EXE)
