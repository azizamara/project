#ifndef LETTRE_H
#define LETTRE_H
#include <string>
#include <iostream>
#include <vector>
#include<QChar>
#include<QString>
using namespace std;
enum Color { rouge, jaune, blanc };



class Lettre
{   QChar val;
    int Position;
    Color Couleur;
    public:
        Lettre(){}
        Lettre(QChar,int,Color);
        virtual ~Lettre();
        int getPosition()const;
        Color getCouleur()const;
        QChar getval(){return val;}
        void setval(QChar x){val=x;}
        void setPosition(int );
        void setCouleur(Color );
        void Comparer(Lettre );


};

#endif // LETTRE_H
