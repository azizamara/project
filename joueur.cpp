#include "joueur.h"
#include <iostream>
#include<fstream>
#include <string>
#include<QChar>
#include<QString>
using namespace std;

Joueur::Joueur(QString a , int i ,int j):score(i),record(j),name(a)
{

}

Joueur::~Joueur()
{


}
void Joueur::setName(QString a){
    name=a;
}
QString Joueur::getName(){
    return name ;
}
void Joueur::setScore(int nb){
    for (int i =1;i<=7;i++) {
        if (nb==i)
        score=+7-i+1;
    }

}
int Joueur::getScore(){
    return score ;
}
void Joueur::setRecord(int x){
    int bestScore;
    ifstream ff("best_score.txt");
    ff>>bestScore;
    ofstream f("best_score.txt");
    if (!f.is_open())
    cout << "Impossible d'ouvrir le fichier en écriture !" << endl;
    else{
    if (x > bestScore){
        f<<x;
        record=x;
    }
    else{
        f<<bestScore;
        record=bestScore;

    }
    }
}

int Joueur::getRecord(){
    return record ;
}


