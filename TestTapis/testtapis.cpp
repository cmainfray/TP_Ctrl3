#include "testtapis.h"
#include "ui_testtapis.h"

TestTapis::TestTapis(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::TestTapis)
{
    ui->setupUi(this);
}

TestTapis::~TestTapis()
{
    delete ui;
}

// void TestTapis::MettreAjourAffichageTapis(Tapis _tapis, QListWidget *_listWidget, QLCDNumber *_icdNumber)
// {

// }

void TestTapis::on_pushButtonSortirRouleau_clicked()
{
    QString reference = ui->lineEditReference->text().toUpper();
    int diametre = ui->lineEditDiametre->text().toInt();
    Rouleau unRouleau(reference,diametre,this);
    if(reference.left(1) == "A"){
        ui->listWidgetTapisA->addItem("Reference: " + reference + " "+ "-" + " "+ "Diamètre: " + QString::number(diametre));
        tapisA.AjouterRouleau(unRouleau);
    }
    if(reference.left(1) == "B"){
        ui->listWidgetTapisB->addItem("Reference: " + reference +  " "+ "-" + " "+ "Diamètre: " + QString::number(diametre));
        tapisB.AjouterRouleau(unRouleau);
    }
    if(reference.left(1) == "C"){
        ui->listWidgetTapisC->addItem("Reference: " + reference + " "+ "-" + " "+ "Diamètre: " + QString::number(diametre));
        tapisC.AjouterRouleau(unRouleau);
    }
    if(reference.left(1) !="A" && reference.left(1) !="B" && reference.left(1) !="C"){
        QMessageBox messageErreur(QMessageBox::Warning, "Erreur ", "Référence de rouleau inconnue \n"
                                                                   "Veuillez sortir le rouleau manuellement");
        messageErreur.exec();
    }
}


void TestTapis::on_pushButtonRazTapisA_clicked()
{

}


void TestTapis::on_pushButtonRazTapisB_clicked()
{

}


void TestTapis::on_pushButtonRazTapisC_clicked()
{

}


void TestTapis::on_pushButtonSortisTapisA_clicked()
{
    // tapisA.RetirerRouleau();
}


void TestTapis::on_pushButtonSortirTapisB_clicked()
{

}


void TestTapis::on_pushButtonSortirTapisC_clicked()
{

}

