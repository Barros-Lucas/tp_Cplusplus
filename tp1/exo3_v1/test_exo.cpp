#include <iostream>
#include "TListe.hpp"
using namespace std;
using namespace tp;

int main(){

    TListe *liste = new_liste();
    TPersonne* personne = tp::new_personne("barros","lucas","mail","adresse","id1");
    ajoute(liste, personne);
    TPersonne* personne2 = tp::new_personne("barros2","lucas2","mail2","adresse2","id2");
    ajoute(liste, personne2);
    TPersonne* personne3 = tp::new_personne("barros3","lucas3","mail3","adresse3","id3");
    ajoute(liste, personne3);
    TPersonne* personne4 = tp::new_personne("barros4","lucas4","mail4","adresse4","id4");
    ajoute(liste, personne4);
    affiche(liste);
    cout << "\nOn supprime la tete qui a l'id = id1";
    supprime(liste,"id1");
    cout << "\nOn supprime l'id = id3";
    supprime(liste,"id3");
    affiche(liste);
}