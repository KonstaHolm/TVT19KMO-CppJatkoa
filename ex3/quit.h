#ifndef QUIT_H
#define QUIT_H

#include <QWidget>

namespace Ui {
class Quit;
}

class Quit : public QWidget
{
    Q_OBJECT

public:
    explicit Quit(QWidget *parent = 0);
    ~Quit();

private:
    Ui::Quit *ui;
};

#endif // QUIT_H
