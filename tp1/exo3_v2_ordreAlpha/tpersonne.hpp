#include <string>

struct TPersonne {
    std::string id;
    std::string adresse;
    std::string mail;
    std::string prenom;
    std::string nom;

};
namespace tp{
    TPersonne* new_personne();
    void affiche(TPersonne*);
    void affiche_unique(TPersonne*);
    TPersonne* new_personne(std::string, std::string, std::string, std::string, std::string);
}

