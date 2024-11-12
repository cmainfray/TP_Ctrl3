#ifndef TAPIS_H
#define TAPIS_H
#include <QQueue>
#include "rouleau.h"

class Tapis
{
public:
    Tapis();
    void AjouterRouleau(const Rouleau _nouveau);
    bool RetirerRouleau(Rouleau &_unRouleau);
    int initialiserCompteur();
    int getCompteur();
    QStringList ObtenirContenuTapis();
private:
    int compteur;
    QQueue<Rouleau>  queueRouleau;
};

#endif // TAPIS_H
