#include "tpersonne.hpp"
#include <iostream>
#include <stdio.h>

using namespace std;


TPersonne* new_personne(){
    TPersonne* personne = new TPersonne;
    string str;
    cout << "Entrez le nom: ";
	cin >> str;
    personne->nom = str;

    cout << "Entrez le prenom: ";
    cin >> str;
    personne->prenom = str;

    cout << "Entrez le mail: ";
    cin >> str;
    personne->mail = str;

    cout << "Entrez l'adresse: ";
    cin >> str;  
    personne->adresse = str;

    cout << "Entrez l'id: ";
    cin >> str ;
    personne->id = str;

    return personne;
}
void affiche(TPersonne *p){
   
    cout << "\nSon nom: " << p->nom;
    cout << "\nSon prenom:" << p->prenom;
    cout << "\nSon mail: " << p->mail;
    cout << "\nSon adresse: " << p->adresse;
    cout << "\nSon id: " << p->id;
}