#include "tapis.h"

Tapis::Tapis() :
    compteur(0)
{}

void Tapis::AjouterRouleau(const Rouleau _nouveau)
{
    queueRouleau.enqueue(_nouveau);
    compteur++;
}

bool Tapis::RetirerRouleau( Rouleau &_unRouleau)
{
    bool retour = false;
    if(!queueRouleau.isEmpty()){
        retour = true;
        _unRouleau = queueRouleau.dequeue();
        compteur--;
    }
    else{
        retour = false;
    }
    return retour;
}

int Tapis::initialiserCompteur()
{
    compteur = 0;
    return compteur;
}

int Tapis::getCompteur()
{
    return compteur;
}

// QStringList Tapis::ObtenirContenuTapis()
// {
//     QStringList description;
//     description << "Ref : " << Rouleau::getReference() << "- Diamètre :" << Rouleau::getDiametre();
//     return description;
// }
