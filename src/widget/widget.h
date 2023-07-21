#include <QtWidgets/QWidget>
#include <QtWidgets/QLabel>

class Widget: public QWidget 
{
        Q_OBJECT
    public:
        explicit Widget(QWidget *parent = nullptr);

    private:
        QLabel *label_{nullptr};
};