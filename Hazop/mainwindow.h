#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionQuit_triggered();

    void on_setupButton_clicked();

    void on_messagingButton_clicked();

    void on_summaryButton_clicked();

    void on_personnelButton_clicked();

    void on_sessionsButton_clicked();

    void on_drawingsButton_clicked();

    void on_deviationsButton_clicked();

    void on_nodesButton_clicked();

    void on_riskRankingButton_clicked();

    void on_studyButton_clicked();

    void on_analysisButton_clicked();

    void on_actionsButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
