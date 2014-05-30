CC=g++
OBJ=main.o Point.o polygone.o
DEPS=polygone.h 
EXECUTABLE=run

$(EXECUTABLE): $(OBJ)
	$(CC) $(OBJ) -o $@

%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $<

clean:
	rm -fr *~ *.o $(EXECUTABLE)
