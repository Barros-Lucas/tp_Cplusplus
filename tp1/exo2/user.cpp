#include <iostream>
#include "tpersonne.hpp"
using namespace std;

int main(){

    TPersonne* tp = new_personne();
    affiche(tp);
    delete tp;
    tp = nullptr;
    //affiche(new_personne()); -> fuite memoire

    return 0;
}