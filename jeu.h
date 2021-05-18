#ifndef JEU_H
#define JEU_H
#include <QTableWidget>
#include <QDialog>
#include <QString>
#include<string>
#include "lettre.h"
using namespace std;

namespace Ui {
class Jeu;
}

class Jeu : public QDialog
{
    Q_OBJECT

public:
    explicit Jeu(QWidget *parent = nullptr);
    ~Jeu();

private slots:

    void on_valider_clicked();
    void affichage(int, QString);
    void couleur(Lettre ,int,int );
private:
    Ui::Jeu *ui;
    QTableWidget* tableWidget;

};

#endif // JEU_H
