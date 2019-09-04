#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QModbusTcpClient>
#include <QUrl>
#include"modbus.h"
#define AddressTest 40001
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
    void on_btn_Connect_clicked();

    void on_btn_Send_clicked();

    void on_btn_Read_clicked();

private:
    modbus_t *mb;
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
