#include "main_window.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) {
    setFixedSize(1200, 800);
    label_ = new QLabel("hello", this);
}