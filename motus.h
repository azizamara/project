#ifndef MOTUS_H
#define MOTUS_H

#include <QMainWindow>
#include "jeu.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MOTUS; }
QT_END_NAMESPACE

class MOTUS : public QMainWindow
{
    Q_OBJECT

public:
    MOTUS(QWidget *parent = nullptr);
    ~MOTUS();

private slots:
    void on_lancer_clicked();

private:
    Ui::MOTUS *ui;
    Jeu *jeu;
};
#endif // MOTUS_H
