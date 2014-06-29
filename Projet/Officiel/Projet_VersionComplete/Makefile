###############################################################################

SRC_CXX=zoo.cc workAnimal.cc workVeterinaire.cc workCage.cc workEmploye.cc workalimentation.cc menu.cc alimentation.cc employe.cc ouvrier.cc viande.cc legume.cc fonction_list_meat.cc fonction_list_vege.cc fonction_list_ouvrier.cc fonction_list_cage.cc animal.cc carnivore.cc animal_lion.cc cage.cc fonction_list_animal.cc animal_tiger.cc animal_elephant.cc animal_ours.cc omnivore.cc herbivore.cc zone.cc workZone.cc enter_value.cc ticket.cc workTicket.cc veterinaire_General.cc dentiste.cc chiropracteur.cc
MAIN_CXX=main.cc

BIN_CXX=$(MAIN_CXX:.cc=)

CXX=g++
LDXX=g++

#------- Mettre en commentaires l'une des deux lignes suivantes --------------
#OPT_TRACE=
OPT_TRACE=-DTRACE_LISTE

###############################################################################

OBJ_CXX=$(SRC_CXX:.cc=.o)
MAIN_OBJ_CXX=$(MAIN_CXX:.cc=.o)
ALL_OBJ_CXX=$(OBJ_CXX) $(MAIN_OBJ_CXX)

all: cxx-binaries
	@echo --- fini

cxx-binaries: $(BIN_CXX)

main: main.o $(OBJ_CXX)
	@echo --- Making $@
	@$(LDXX) $(LDXXFLAGS) $(OBJ_CXX) $< -o $@

%.o: %.cc
	@echo ----- Compiling $<
	@$(CXX) $(CXXFLAGS) $(OPT_TRACE) -c $<

clean:
	$(RM) $(BIN_CXX) $(ALL_OBJ_CXX) *~

