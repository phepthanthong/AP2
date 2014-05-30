CC=g++
DEPS=complexe.h
OBJ=complexe.o main_complexe.o
EXECUTABLE=main_complexe

$(EXECUTABLE): $(OBJ)
	$(CC) $(OBJ) -o $@

%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $<

clean:
	rm -fr *~ *.o $(EXECUTABLE)
