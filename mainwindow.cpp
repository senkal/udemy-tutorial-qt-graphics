#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnAsteroid_clicked()
{
    this->ui->renderArea->setShape(RenderArea::Asteroid);
    this->ui->renderArea->repaint();
}

void MainWindow::on_btnCycloid_clicked()
{
    this->ui->renderArea->setShape(RenderArea::Cycloid);
    this->ui->renderArea->repaint();
}

void MainWindow::on_btnHyugens_clicked()
{
    this->ui->renderArea->setShape(RenderArea::HyugensCycloid);
    this->ui->renderArea->repaint();
}

void MainWindow::on_btnHypo_clicked()
{
    this->ui->renderArea->setShape(RenderArea::HypoCycloid);
    this->ui->renderArea->repaint();
}
