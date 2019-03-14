#include "TListe.hpp"
#include <iostream>
#include <stdio.h>
using namespace std;
using namespace tp;

TListe* new_liste(){
    TListe* tl = new TListe;
    tl->tete = NULL;
    tl->queue = NULL;
    return tl;
}

bool empty(const TListe* liste){
    //empty if liste has no anterior
    return liste->queue == NULL;
}

bool ajoute(TListe* liste, TPersonne* personne){

    //Test if liste was already created
    if(liste != NULL){
        if(exist_id(liste, personne->id)){
            return false;
        }
        //Creation of a new 'Noeud'
        TNoeud* tn = new TNoeud;
        //Verification tn was created 
        if(tn != NULL){
            //put data in struc
            tn->personne = personne;
            //set suivant to null...
            tn->suiv = NULL;

            //put anterior.

            if(empty(liste)){
                //no anterior for 'Noeud'
                tn->pred = NULL;
                //set tete and queue of liste
                liste->tete = tn;
                liste->queue = tn;
            }else{
                //put noeud on queue if new nom >= queue->personne->nom
                if(tn->personne->nom >= liste->queue->personne->nom){
                TNoeud* queue = liste->queue ;
                queue->suiv = tn;
                tn->pred = queue;
                //set reference for the new queue
                liste->queue = tn;
                }else{

                }

            }
        return true;
        }
    return false;

    }else{
        return false;
    }
}




void affiche(const TListe* liste){
    if(!empty(liste)){
        TNoeud* noeud = liste->tete;
        tp::affiche(noeud->personne);
        while(noeud->suiv != NULL){
            noeud = noeud->suiv;
            tp::affiche(noeud->personne);
        }
    }
}

bool exist_id(const TListe* liste, const std::string id){
    if(!empty(liste)){
        TNoeud* noeud = liste->tete;
        if(noeud->personne->id == id){
            return true;
        }
        while(noeud->suiv != NULL){
            noeud = noeud->suiv;
            if(noeud->personne->id == id){
                return true;
            }
        }
        return false;
    }else{
        return false;
    }


}

bool supprime(TListe* liste,const string id){

    if(exist_id(liste, id)){
        TNoeud* tn = getNoeud(liste,id);
        if(tn == liste->tete){
            TNoeud* futur_tete = tn->suiv;
            futur_tete->pred = NULL;
            liste->tete = futur_tete;
        }else if(tn == liste->queue){
            TNoeud* futur_queue = tn->pred;
            futur_queue->suiv = NULL;
            liste->queue = futur_queue;
        }else{
        TNoeud* pred = tn->pred;
        TNoeud* suiv = tn->suiv;
        pred->suiv = suiv;
        suiv->pred = pred;
        }
        delete tn;
        tn = nullptr;
        return true;

    }else{
        return false;
    }
}
//Call this function if you are sure id exist in this liste
TNoeud* getNoeud(TListe* liste, const string id){
    
    TNoeud* noeud = liste->tete;
    if(noeud->personne->id == id){
        return noeud;
    }
    while(noeud->suiv != NULL){
        noeud = noeud->suiv;
        if(noeud->personne->id == id){
            return noeud;
        }
    }
    
    
   
}