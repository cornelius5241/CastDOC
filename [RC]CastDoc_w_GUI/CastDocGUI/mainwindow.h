#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButtonConnect_clicked();

    void on_pushButtonChooseFile_clicked();

    void on_pushButtonSendType();

    void on_pushButtonSendType_clicked();

    void on_pushButtonSEND_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
