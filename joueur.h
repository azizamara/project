#ifndef JOUEUR_H
#define JOUEUR_H


#include <iostream>
#include <string>
using namespace std;
#include<QString>


class Joueur
{
    QString name;
    int score , record ;
    public:
        Joueur(){}
        Joueur(QString a, int i=0,int j=0);
        ~Joueur();
        void setName (QString);
        QString getName();
        void setScore(int);
        int getScore();
        void setRecord(int);
        int getRecord();

    protected:
};
#endif // JOUEUR_H
