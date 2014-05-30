# fichier Makefile pour Oeuvre2...

CC=g++ -Wall

art	:	util.o Date.o Oeuvre.o Peinture.o main.o Ecrite.o Livre.o Plastique.o
	$(CC) util.o Date.o Oeuvre.o Peinture.o main.o Ecrite.o Livre.o Plastique.o -o $@

util.o : util.cc util.h
	$(CC) -c $<

Date.o : Date.cc Date.h util.h
	$(CC) -c $<

Oeuvre.o	:	Oeuvre.cc	Oeuvre.h util.h
	$(CC) -c Oeuvre.cc

Peinture.o	:	Peinture.cc 	Peinture.h	Oeuvre.h util.h
	$(CC) -c Peinture.cc

Ecrite.o	:	Ecrite.cc	Ecrite.h util.h
	$(CC) -c Ecrite.cc

Livre.o		:	Livre.cc	Livre.h util.h
	$(CC) -c Livre.cc

Plastique.o	:	Plastique.cc	Plastique.h util.h
	$(CC) -c Plastique.cc

main.o	:	main.cc	Peinture.h	Oeuvre.h util.h
	$(CC) -c main.cc

clean	:
	rm -f *.o *~ art

