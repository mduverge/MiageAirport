#include "Consumer.hpp"
#include "menu.hpp"

using namespace std;

int menu_create_consumer(){
  string fname,lname,bdate,npass;
  cout << "----- Création d'un employé ----" << endl;
  cout << "Prénom : ";
  cin >> fname;
  cout << "Nom : ";
  cin >> lname;
  cout << "Date de naissance (JJ/MM/AAAA) : ";
  cin >> bdate;
  cout << "Numéro de passport : ";
  cin >> npass;
  Consumer e(fname,lname,bdate,npass);
  cout << "Vous avez créé : " << endl;
  e.display();
  // TODO : ajouter à un vecteur
  return EXIT_SUCCESS;
}
int menu_create_flight(){
  // TODO : créer un vol
  return EXIT_SUCCESS;
}

int menu_personnel(){
  while (1){

    string choice="";
    cout << "Sélectionnez (Menu des employés):" << endl;
    cout << "1 - Chercher un employé" << endl;
    cout << "2 - Ajouter un employé" << endl;
    cout << "3 - Supprimer un employé" << endl;
    cout << "Q - Revenir au menu principal" << endl;
   
    cin >> choice;
    if(choice=="1"){}
    else 
      if(choice=="2"){}
      else 
	if(choice=="3"){}
	else
	  if(choice=="Q"){return 0;}
	  else
	    cout << "Commande non reconnue" << endl;

  }
  return 0;
}

int menu_client(){
  while (1){

    string choice="";
    cout << "Sélectionnez (Menu des clients):" << endl;;
    cout << "1 - Chercher un client" << endl;
    cout << "2 - Ajouter un client" << endl;
    cout << "3 - Supprimer un client" << endl;
    cout << "Q - Revenir au menu principal" << endl;
   
    cin >> choice;
    if(choice=="1"){}
    else 
      if(choice=="2"){menu_create_consumer();}
      else 
	if(choice=="3"){}
	else
	  if(choice=="Q"){return 0;}
	  else
	    cout << "Commande non reconnue" << endl;

  }
  return 0;
}


int menu_vol(){
  while (1){

    string choice="";
    cout << "Sélectionnez (Menu des vols):" << endl;
    cout << "1 - Chercher un vol" << endl;
    cout << "2 - Ajouter un vol" << endl;
    cout << "3 - Supprimer un vol" << endl;
    cout << "Q - Revenir au menu principal" << endl;
   
    cin >> choice;
    if(choice=="1"){menu_vol();}
    else 
      if(choice=="2"){}
      else 
	if(choice=="3"){}
	else
	  if(choice=="Q"){return 0;}
	  else
	    cout << "Commande non reconnue" << endl;

  }
  return 0;
}



int main_menu(){

  while (1){

    string choice="";
    cout << "Bienvenue dans l'application de gestion de la MiageAirport" << endl;
    cout << "Si vous avez des difficultés à utiliser le programme, veuillez consulter l'aide." << endl;
    cout << "Contact : 06 11 22 33 44" << endl;
    cout << "Sélectionnez (Menu Principal):" << endl;
    cout << "1 - Vols" << endl;
    cout << "2 - Clients" << endl;
    cout << "3 - Personnel" << endl;
    cout << "Q - Quitter le programme" << endl;
   
    cin >> choice;
    if(choice=="1"){menu_vol();}
    else 
      if(choice=="2"){menu_client();}
      else 
	if(choice=="3"){menu_personnel();}
	else
	  if(choice=="Q"){return 0;}
	  else
	    cout << "Commande non reconnue" << endl;

  }
  return 0;
}
