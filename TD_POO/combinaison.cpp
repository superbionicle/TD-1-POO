//
//  combinaison.cpp
//  TD_POO
//
//  Created by Arthur on 23/03/2022.
//

#include <stdio.h>
#include <iostream>
#include "combinaison.h"
using namespace std;


Combinaison::Combinaison(int taille, int nbCouleurs)
{
    taille_ = taille;
    if (taille_<0)
    {
        taille_ = 0;
    }
    if (nbCouleurs<taille)
        nbCouleurs=taille;
    nbCouleurs_=nbCouleurs;

    tab_ = new int[taille_];
    for (int i = 0; i < taille_; i++)
    {
        tab_[i] = 0;
    }
}

Combinaison::Combinaison(Combinaison & tab){
    taille_=tab.taille_;
    nbCouleurs_=tab.nbCouleurs_;
    tab_=new int[taille_];
    for(int i=0;i<taille_;i++){
        tab_[i]=tab.tab_[i];
    }
}

Combinaison::~Combinaison()
{
    delete [] tab_;
}

void Combinaison::afficher(){
    cout << "La combinaison est : " << endl;
    for (int i = 0; i < taille_; i++)
    {
        cout <<" "<< tab_[i];
    }
    cout << endl;
}

void Combinaison::saisir()
{
    int couleur;
    cout<<"Veuillez saisir une nouvelle combinaison"<<endl;
    cout<<"Rappel : les saisies sont comprises entre 1 et "<<nbCouleurs_<<endl;
    for(int i=0;i<taille_;i++){
        do{
           cout<<"Saisir un chiffre : ";
           cin>>couleur;
            if(couleur<1 || couleur>nbCouleurs_){
                cout<<"Erreur de saisie"<<endl;
            }
           }while(couleur<1 or couleur>nbCouleurs_);
        tab_[i]=couleur;
    }

}


int & Combinaison::operator [](int i){
    if(i<0 || i>=taille_){
        cerr<<"Dépassement d'indice : "<<i<<endl;
        abort();
    }
    else{
        return(tab_[i]);
    }
}

void Combinaison::operator =(Combinaison &tab){
    if(tab.taille_!=taille_){
        cerr<<"Erreur de taille"<<endl;
        abort();
    }
    else{
        for(int i=0;i<taille_;i++){
            tab_[i]=tab.tab_[i];
        }
    }
}


