#ifndef ROULEAU_H
#define ROULEAU_H
#include <QObject>
#include <QQueue>

class Rouleau : public QObject
{
public:
    Rouleau(const QString _reference, const int _diametre, const QObject *_parent);
    Rouleau(const Rouleau &_autre);
    Rouleau(const QObject *_parent);
    ~Rouleau();
   void AffecterAlveole(const int _rangee, const int _colonne);
   void ObtenirLocalisation(int &_rangee, int &_colonne);
   Rouleau operator =(const Rouleau &_autre);
   QString getReference();
   int getDiametre();
private:
    QString reference;
    int diametre;
    int rangee;
    int colonne;
};

#endif // ROULEAU_H
