CC=g++
DEPS=personne.h
OBJECTS=main.o personne.o
EXECUTABLE=main

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(OBJECTS) -o $@

%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< 

clean:
	rm -fr *~ *.o $(EXECUTABLE)
