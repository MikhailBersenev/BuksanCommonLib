#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "db/CDatabaseConnection.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    CDatabaseConnection* PcONN;
}

MainWindow::~MainWindow()
{
    delete ui;
}
