// fichier "main.cc"

#include <iostream>
#include "Peinture.h"
#include "Ecrite.h"
#include "Livre.h"

using namespace std;

int
main()
{
  Ecrite maison("Hugo","Miserable","Roman",15,5,1817,9,"Humain","Francais",07,05,2014);
  cout << maison.toString();
  cout << endl;
  Livre hanoi("Anh Khang","Ngay troi ve phia cu","Roman",
	      20,02,2014,25,"Amour","Vietnamien",
	      19,04,2014,"Phuong Nam",15,3,2014);
  cout << hanoi.toString();
  cout << endl;
  Plastique hcm("Leonard Da Vinci","La Joconde","Impressionnisme",
		01,02,1785,3000,
		"Musee du Louvre",30,4,2001);
  cout << hcm.toString();
  cout << endl;
  Peinture radeau("Theodore Gericault", "Le Radeau de la Meduse", "Romantisme",
		  26, 5, 1819, 10,
		  "Musee du Louvre", 23, 5, 2001,
		  "Toile","Aquarelle");
  // utilise la fonction membre de Peinture
  cout << radeau.toString();
  cout << endl;
  radeau.setNouveauPoss("TRUNG HIEU");
  radeau.getNouveauPoss();
  radeau.setNouvelleDate(07,05,2014);
  cout << radeau.toString();
}
