#include "menu.h"
using namespace std;

void menu_main()
{
  cout << endl;
  cout << "\t\t MENU PRINCIPAL" << endl;
  cout << endl <<"\t1. CONSULTER L'INFORMATION DU ZOO" << endl;
  cout << "\t2. GESTION DE ZONE" << endl;
  cout << "\t3. GESTION DE CAGE" << endl;
  cout << "\t4. GESTION DE ANIMAL" << endl;
  cout << "\t5. GESTION DE ALIMENTATION" << endl;
  cout << "\t6. GESTION DE OUVRIER" << endl;
  cout << "\t7. VENTE DE TICKET" << endl;
  cout << "\t8. GESTION DE VETERINAIRE" << endl;
  cout << "\t9. FINIR LE PROGRAMME" << endl  << endl;
  cout << "\t\tVEUILLEZ CHOISIR UN NOMBRE CI-DESSUS: ";
}

void menu_zone()
{
  cout << endl;
  cout << "\t1. CONSULTER LA LISTE DE ZONE" << endl;
  cout << "\t2. AJOUTER UNE ZONE" << endl;
  cout << "\t3. SUPPRIMER UNE ZONE" << endl;
  cout << "\t4. NETTOYER L'ECRAN" << endl;
  cout << "\t5. REVENIR AU MENU PRINCIPAL" << endl  << endl;
  cout << "\t\tVEUILLEZ CHOISIR UN NOMBRE CI-DESSUS: ";
}

void menu_cage()
{
  cout << endl;
  cout << "\t1. CONSULTER LA LISTE DE CAGE" << endl;
  cout << "\t2. CONSULTER L'INFORMATION DE CAGE" << endl;
  cout << "\t3. AJOUTER UNE CAGE" << endl;
  cout << "\t4. SUPPRIMER UNE CAGE" << endl;
  cout << "\t5. FAIRE MANGER LES ANIMAUX" << endl;
  cout << "\t6. NETTOYER L'ECRAN" << endl;
  cout << "\t7. REVENIR AU MENU PRINCIPAL" << endl  << endl;
  cout << "\t\tVEUILLEZ CHOISIR UN NOMBRE CI-DESSUS: ";
}

void menu_animal()
{
  cout << endl;
  cout << "\t1. CONSULTER LA LISTE DE ANIMAL" << endl;
  cout << "\t2. CONSULTER L'INFORMATION EN FONCTION DE ANIMAL" << endl;
  cout << "\t3. CONSULTER L'INFORMATION EN FONCTION DE CAGE" << endl;
  cout << "\t4. AJOUTER UN ANIMAL" << endl;
  cout << "\t5. SUPPRIMER UN ANIMAL" << endl;
  cout << "\t6. VISITE MEDICALE" << endl;
  cout << "\t7. ECHANGER 2 CAGES" << endl;
  cout << "\t8. NETTOYER L'ECRAN" << endl;
  cout << "\t9. REVENIR AU MENU PRINCIPAL" << endl  << endl;
  cout << "\t\tVEUILLEZ CHOISIR UN NOMBRE CI-DESSUS: ";
}

void menu_alimentation()
{
  cout << endl;
  cout << "\t1. CONSULTER LA LISTE VIANDE" << endl;
  cout << "\t2. CONSULTER LA LISTE LEGUME" << endl;
  cout << "\t3. IMPORTER UNE NOUVELLE VIANDE" << endl;
  cout << "\t4. IMPORTER UN NOUVEAU LEGUME" << endl;
  cout << "\t5. REVENIR AU MENU PRINCIPAL" << endl  << endl;
  cout << "\t\tVEUILLEZ CHOISIR UN NOMBRE CI-DESSUS: ";
}

void menu_ouvrier()
{
  cout << endl;
  cout << "\t1. CONSULTER LA LISTE DES EMPLOYE(E)S" << endl;
  cout << "\t2. CONSULTER L'INFORMATION D'UN(E) EMPLOYE(E)" << endl;
  cout << "\t3. AJOUTER UN(E) EMPLOYE(E)" << endl;
  cout << "\t4. SUPPRIMER UN(E) EMPLOYE(E)" << endl;
  cout << "\t5. ATTRIBUER UNE PLACE DE TRAVAIL" << endl;
  cout << "\t6. NETTOYER L'ECRAN" << endl;
  cout << "\t7. REVENIR AU MENU PRINCIPAL" << endl  << endl;
  cout << "\t\tVEUILLEZ CHOISIR UN NOMBRE CI-DESSUS: ";
}

void menu_list_animal()
{
  cout << endl;
  cout << "\t1. LION" << endl;
  cout << "\t2. TIGRE " << endl;
  cout << "\t3. ELEPHANT" << endl;
  cout << "\t4. OURS" << endl;
  cout << "\t5. REVENIR AU MENU PRINCIPAL" << endl  << endl;
  cout << "\t\tVEUILLEZ CHOISIR UN NOMBRE CI-DESSUS: ";  
}

void menu_ticket()
{
  cout << endl;
  cout << "\t1. VENDRE TICKET \n";
  cout << "\t2. VERIFIER L'INFORMATION \n";
  cout << "\t3  INPRIMER TICKET\n";
  cout << "\t4  SUPPRIMER TICKET ET REVENIR AU NEMU PRINCIPAL \n";
  cout << "\t5. VERIFIER LE RESULTAT\n";
  cout << "\t6. NETTOYER L'ECRAN\n";
  cout << "\t7. REVENIR AU MENU PRINCIPAL\n\n";
  cout << "\t\tVEUILLEZ CHOISIR UN NOMBRE CI-DESSUS: "; 
  
}

void menu_veterinaire()
{
  cout << endl;
  cout << "\t1. Veterinaire General \n";
  cout << "\t2. Send to Doctor Special \n";
  cout << "\t3  Dentiste\n";
  cout << "\t4  Dentiste chua benh \n";
  cout << "\t5. Chiropracteur\n";
  cout << "\t6. Chiropracteur chua benh\n";
  cout << "\t7. NETTOYER L'ECRAN\n";
  cout << "\t8. REVENIR AU MENU PRINCIPAL\n\n";
  cout << "\t\tVEUILLEZ CHOISIR UN NOMBRE CI-DESSUS: "; 
  
}
