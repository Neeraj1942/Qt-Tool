#ifndef LOGIN2_H
#define LOGIN2_H

#include <QDialog>

namespace Ui {
class Login2;
}

class Login2 : public QDialog
{
    Q_OBJECT

public:
    explicit Login2(QWidget *parent = nullptr);
    ~Login2();

private:
    Ui::Login2 *ui;
};

#endif // LOGIN2_H
