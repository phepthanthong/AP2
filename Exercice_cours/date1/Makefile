CC=g++ 

OBJECTS= main.o Date.o

main : $(OBJECTS)
	$(CC) $(OBJECTS) -o main


Date.o : Date.cc Date.h
	$(CC) -c Date.cc

clean :
	rm -f *~ *.o main
