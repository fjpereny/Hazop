#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionQuit_triggered()
{
    close();
}


void MainWindow::on_setupButton_clicked()
{
    ui->curViewLabel->setText(ui->setupButton->text());
    ui->stackedMainView->setCurrentIndex(0);
}


void MainWindow::on_messagingButton_clicked()
{
    ui->curViewLabel->setText(ui->messagingButton->text());
    ui->stackedMainView->setCurrentIndex(1);
}


void MainWindow::on_summaryButton_clicked()
{
    ui->curViewLabel->setText(ui->summaryButton->text());
    ui->stackedMainView->setCurrentIndex(2);
}


void MainWindow::on_personnelButton_clicked()
{
    ui->curViewLabel->setText(ui->personnelButton->text());
    ui->stackedMainView->setCurrentIndex(3);
}


void MainWindow::on_sessionsButton_clicked()
{
    ui->curViewLabel->setText(ui->sessionsButton->text());
    ui->stackedMainView->setCurrentIndex(4);
}


void MainWindow::on_drawingsButton_clicked()
{
    ui->curViewLabel->setText(ui->drawingsButton->text());
    ui->stackedMainView->setCurrentIndex(5);
}


void MainWindow::on_deviationsButton_clicked()
{
    ui->curViewLabel->setText(ui->deviationsButton->text());
    ui->stackedMainView->setCurrentIndex(6);
}


void MainWindow::on_nodesButton_clicked()
{
    ui->curViewLabel->setText(ui->nodesButton->text());
    ui->stackedMainView->setCurrentIndex(7);
}


void MainWindow::on_riskRankingButton_clicked()
{
    ui->curViewLabel->setText(ui->riskRankingButton->text());
    ui->stackedMainView->setCurrentIndex(8);
}


void MainWindow::on_studyButton_clicked()
{
    ui->curViewLabel->setText(ui->studyButton->text());
    ui->stackedMainView->setCurrentIndex(9);
}


void MainWindow::on_analysisButton_clicked()
{
    ui->curViewLabel->setText(ui->analysisButton->text());
    ui->stackedMainView->setCurrentIndex(10);
}


void MainWindow::on_actionsButton_clicked()
{
    ui->curViewLabel->setText(ui->actionsButton->text());
    ui->stackedMainView->setCurrentIndex(11);
}

