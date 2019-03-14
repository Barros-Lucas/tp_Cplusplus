#include <string>
#include "TNoeud.hpp"

struct TListe {
    TNoeud* tete;
    TNoeud* queue;

};

TListe* new_liste();
bool ajoute(TListe*, TPersonne*);
void affiche(const TListe*);
bool empty(const TListe*);
bool exist_id(const TListe*, const std::string);
bool supprime(TListe*,const std::string);
TNoeud* getNoeud(TListe* liste, const std::string id);