#include <string>
#include "tpersonne.hpp"

struct TNoeud {
    TPersonne* personne;
    TNoeud* pred;
    TNoeud* suiv;

};

TNoeud* new_noeud();