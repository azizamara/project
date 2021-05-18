#ifndef TENTATIVE_H
#define TENTATIVE_H

#include <iostream>
#include <string>
#include<QChar>
#include<QString>


using namespace std;

class Tentative
{


    QString motsaisi;
    int Nbessais;

    public:
        Tentative(){}
        Tentative( QString );
        ~Tentative();
        QString getmotsaisi()const;
        void setmotsaisi(QString);
        int getNbessais();
        bool controlesaisie(QString);
};

#endif // TENTATIVE_H
