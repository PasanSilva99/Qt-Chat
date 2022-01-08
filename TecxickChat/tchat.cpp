#include "tchat.h"
#include "ui_tchat.h"

Tchat::Tchat(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Tchat)
{
    ui->setupUi(this);
}

Tchat::~Tchat()
{
    delete ui;
}

