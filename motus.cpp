#include "motus.h"
#include "ui_motus.h"
#include "jeu.h"
#include<QChar>
#include<QString>

MOTUS::MOTUS(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MOTUS)
{
    ui->setupUi(this);
}

MOTUS::~MOTUS()
{
    delete ui;
}


void MOTUS::on_lancer_clicked()
{
    QString name= ui->nom->text();
    hide();
    jeu= new Jeu(this);
    jeu->show();

}

