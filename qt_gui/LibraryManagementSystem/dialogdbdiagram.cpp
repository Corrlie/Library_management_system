#include "dialogdbdiagram.h"
#include "ui_dialogdbdiagram.h"

DialogDbDiagram::DialogDbDiagram(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogDbDiagram)
{
    ui->setupUi(this);
}

DialogDbDiagram::~DialogDbDiagram()
{
    delete ui;
}
