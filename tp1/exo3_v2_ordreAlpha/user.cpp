#include <iostream>
#include "TListe.hpp"
using namespace std;
using namespace tp;

int main(){

    TListe *liste = new_liste();
    TPersonne* personne = tp::new_personne();
    ajoute(liste, personne);
    TPersonne* personne2 = tp::new_personne();
    ajoute(liste, personne2);
    TPersonne* personne3 = tp::new_personne();
    ajoute(liste, personne3);
    affiche(liste);
    string t = "id1";
    cout << supprime(liste, t);
    affiche(liste);
}