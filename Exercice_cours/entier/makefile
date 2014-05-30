CC=g++
DEPS=operation.h
OBJ=operation.o main.o
EXECUTABLE=main

$(EXECUTABLE): $(OBJ)
	$(CC) $(OBJ) -o $@

%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $<

clean:
	rm -fr *~ *.o main
