#include "motus.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MOTUS w;
    w.show();
    return a.exec();
}
////
#include <iostream>
#include "joueur.h"
#include "lettre.h"
#include "tentative.h"
#include <vector>
#include<algorithm>
using namespace std;

int affiche(vector<int> v)
{
    for (int i=0;i<v.size();i++)
    {
        cout<<i<<endl;
    }
    return 0;
}
/*
int main (){
    vector<string> v;
    v.push_back("rouge");
    v.push_back("jaune");
    v.push_back("blanc");

    string nom ,mot;
    cout << "veuillez entrer votre Nom :"<<endl;
    cin >> nom ;
    Joueur l(nom);


    string motadeviner="accuser";




    int nbessai=0;bool test=false;
    do{
    cout<<"Saisir votre essai numéro:"<< nbessai+1 <<endl;
    string ch;
        cin>>mot;
        if (mot==motadeviner){test=true;break;}
    Tentative t(mot);
    if (t.controlesaisie(motadeviner))
        { nbessai++;//essai validé

     vector<int> red; //recherche des lettres bien placées
     for (int i=0;i<7;i++){
            Lettre j(mot[i],i,blanc);
      for (int k=0;k<7;k++){
            Lettre m(motadeviner[k],k,blanc);
            j.Comparer(m);
            if (j.getCouleur()==rouge) {red.push_back(k);break;}
     }
     }
     vector<int> yellow;//recherche des lettres mal placées
    for (int i=0;i<7;i++)
    {   Lettre j(mot[i],i,blanc);

        for (int k=0;k<7;k++)
        {if ((!(std::count(red.begin(), red.end(), k))))//k pas dans red
                                {//recherche des jaunes
         Lettre m(motadeviner[k],k,blanc);
         j.Comparer(m);
         if (j.getCouleur()==jaune) {yellow.push_back(k);}
                                }

        }//fin parcours lettre mot a deviner

        if ((std::count(red.begin(), red.end(), i))){j.setCouleur(rouge);}
        if ((std::count(yellow.begin(), yellow.end(), i))){j.setCouleur(jaune);}


        cout<<"lettre "<<j.getval()<<" est de couleur "<<v[j.getCouleur()]<<endl;
        yellow.clear();
    }//fin parcours de la lettre lettre
    }//fin parcours de l'essai
    }//fin parcours de tous les essais
    while (nbessai<7);
    if (test) {cout <<"BRAVO !! Vous avez gagné en "<<nbessai+1<<" coup(s)"<<endl;}
        else {cout<<"Dommage, vous avez perdu"<<endl;}
    int x;
    x=7-nbessai;
    l.setScore(x);
    l.setRecord(x);










    return 0;

}*/
