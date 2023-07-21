#include <qlabel.h>

#include <QWidget>


class Board;

class MainWindow : public QObject {
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);

private:
    Board *board_;
    QLabel *next_piece_lbl_;
};