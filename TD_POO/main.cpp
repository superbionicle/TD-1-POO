//
//  main.cpp
//  TD_POO
//
//  Created by Arthur on 23/03/2022.
//

#include <iostream>
#include "combinaison.h"
using namespace std;

int main(){
    Combinaison combi;
    combi.afficher();
    cout<<combi.getNbCouleurs()<<endl;
    cout<<combi.getTaille()<<endl;
    combi.saisir();
    combi.afficher();
    Combinaison tab(combi);
    //tab.afficher();
    //combi.copie(tab);
    tab.afficher();
    tab.saisir();
    tab.afficher();
    combi=tab;
    combi.afficher();
}
