#include "jeu.h"
#include "ui_jeu.h"
#include <iostream>
#include "joueur.h"
#include "lettre.h"
#include "tentative.h"
#include <vector>
#include<algorithm>
#include<QBrush>
#include<QColor>
#include <QTableWidgetItem>
using namespace std;


Jeu::Jeu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Jeu)
{

    ui->setupUi(this);
}

Jeu::~Jeu()
{
    delete ui;

}

void Jeu::affichage(int i,QString mot){
ui->tableWidget->setItem(i, 0, new QTableWidgetItem(mot[0]));
ui->tableWidget->setItem(i, 1, new QTableWidgetItem(mot[1]));
ui->tableWidget->setItem(i, 2, new QTableWidgetItem(mot[2]));
ui->tableWidget->setItem(i, 3, new QTableWidgetItem(mot[3]));
ui->tableWidget->setItem(i, 4, new QTableWidgetItem(mot[4]));
ui->tableWidget->setItem(i, 5, new QTableWidgetItem(mot[5]));
ui->tableWidget->setItem(i, 6, new QTableWidgetItem(mot[6]));
}

void Jeu::couleur(Lettre j,int nb,int i)
{

}

void Jeu::on_valider_clicked()
{

    int nbessai=0;bool test=false;
    do{

    QString motadeviner="accuser";
    QString mot=ui->lineEdit->text();
    if (mot==motadeviner){test=true;}

    Tentative t(mot);
    if (t.controlesaisie(motadeviner))//essai validé
    {

        affichage(nbessai,mot);
        nbessai++;
         vector<int> red; //recherche des lettres bien placées
         for (int i=0;i<7;i++){
              Lettre j(mot[i],i,blanc);
          for (int k=0;k<7;k++){
                Lettre m(motadeviner[k],k,blanc);
                j.Comparer(m);
                if (j.getCouleur()==rouge) {
                    ui->tableWidget->itemAt(nbessai,i)->setBackground(Qt::green);
                    red.push_back(k);
                    break;}


             }
         }
          vector<int> yellow;//recherche des lettres mal placées et existantes
             for (int i=0;i<7;i++)
             {   Lettre j(mot[i],i,blanc);

                 for (int k=0;k<7;k++)
                 {if ((!(std::count(red.begin(), red.end(), k)))&&(!(std::count(yellow.begin(), yellow.end(), k))))//k pas dans red
                                         {//recherche des jaunes
                  Lettre m(motadeviner[k],k,blanc);
                  j.Comparer(m);
                  if (j.getCouleur()==jaune) {
                      ui->tableWidget->itemAt(nbessai,i)->setBackground(Qt::yellow);
                      yellow.push_back(k);}
                                         }

                 }

                 //fin parcours lettre mot a deviner
                 /*if (j.getCouleur()==rouge){  ui->tableWidget->item(nb,i)->setBackground(Qt::red);}
                 else if (j.getCouleur()==jaune) {ui->tableWidget->item(nb,i)->setBackground(Qt::yellow);}
                     else {ui->tableWidget->item(nb,i)->setBackground(Qt::white);}*/

             }//fin parcours de la lettre lettre
              yellow.clear();

                        }//fin parcours de l'essai
                }//fin parcours de tous les essais
             while (nbessai<7);





     }

