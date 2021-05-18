#include "tentative.h"
#include <iostream>
#include <string>
#include<QChar>
#include<QString>

using namespace std;


Tentative::Tentative(QString mot )
{
setmotsaisi(mot);
}
/////////////////////////////
Tentative::~Tentative()
{

}

/////////////////////////////
int Tentative::getNbessais(){
    return Nbessais;
}
/////////////////////////////
bool Tentative::controlesaisie(QString mot){
    if ((mot.length() == motsaisi.length())   ){
        return true;
    }
    else return false;
}


/////////////////////////////
void Tentative::setmotsaisi(QString mot){
    motsaisi=mot;
}
/////////////////////////////
QString Tentative::getmotsaisi()const{
    return motsaisi;
}


/////////////////////////////


