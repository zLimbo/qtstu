#ifndef __MAINWINDOW_H__
#define __MAINWINDOW_H__

#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow() = default;

private:
    QLabel *label_;
};

#endif  //  __MAINWINDOW_H__