//
//  combinaison.h
//  TD_POO
//
//  Created by Arthur on 23/03/2022.
//

#ifndef combinaison_h
#define combinaison_h

class Combinaison{
    int taille_,nbCouleurs_;
    int* tab_;
public:
    Combinaison(int n=4, int p=8);
    Combinaison(Combinaison & tab);
    ~Combinaison();
    void afficher();
    void saisir();
    int getTaille(){return(taille_);};
    int getNbCouleurs(){return(nbCouleurs_);};
    int & operator [](int i);
    void operator =(Combinaison & tab);
    void aleatoire();
};

#endif /* combinaison_h */
