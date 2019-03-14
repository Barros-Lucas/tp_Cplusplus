#include <string>

struct TPersonne {
    std::string id;
    std::string adresse;
    std::string mail;
    std::string prenom;
    std::string nom;

};

TPersonne* new_personne();
void affiche(TPersonne *p);