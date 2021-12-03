#include "accountview.h"
#include "ui_accountview.h"

accountview::accountview(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::accountview)
{
    ui->setupUi(this);
}

accountview::~accountview()
{
    delete ui;
}
