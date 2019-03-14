#include "tpersonne.hpp"
#include <iostream>
#include <stdio.h>

using namespace std;


TPersonne* tp::new_personne(){
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
TPersonne* tp::new_personne(string nom, string prenom, string mail, string adresse, string id){
    TPersonne* personne = new TPersonne;
    personne->nom = nom;
    personne->prenom = prenom;
    personne->mail = mail; 
    personne->adresse = adresse;
    personne->id = id;

    return personne;
}

void tp::affiche_unique(TPersonne *p){
   
    cout << "\nSon nom: " << p->nom;
    cout << "\nSon prenom:" << p->prenom;
    cout << "\nSon mail: " << p->mail;
    cout << "\nSon adresse: " << p->adresse;
    cout << "\nSon id: " << p->id;
}

void tp::affiche(TPersonne *p){
   
    cout << "\nnom: " << p->nom;
    cout << ", prenom: " << p->prenom;
    cout << ", mail: " << p->mail;
    cout << ", adresse: " << p->adresse;
    cout << ", id: " << p->id;
    cout << "\n";
}