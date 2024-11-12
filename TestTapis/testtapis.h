#ifndef TESTTAPIS_H
#define TESTTAPIS_H

#include <QWidget>
#include <QListWidget>
#include <QLCDNumber>
#include <QMessageBox>
#include "tapis.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class TestTapis;
}
QT_END_NAMESPACE

class TestTapis : public QWidget
{
    Q_OBJECT

public:
    TestTapis(QWidget *parent = nullptr);
    ~TestTapis();
    void MettreAjourAffichageTapis(Tapis _tapis, QListWidget *_listWidget, QLCDNumber *_icdNumber);

private slots:
    void on_pushButtonSortirRouleau_clicked();

    void on_pushButtonRazTapisA_clicked();

    void on_pushButtonRazTapisB_clicked();

    void on_pushButtonRazTapisC_clicked();

    void on_pushButtonSortisTapisA_clicked();

    void on_pushButtonSortirTapisB_clicked();

    void on_pushButtonSortirTapisC_clicked();

private:
    Ui::TestTapis *ui;
    Tapis tapisA;
    Tapis tapisB;
    Tapis tapisC;
};
#endif // TESTTAPIS_H
