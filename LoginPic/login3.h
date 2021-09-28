#ifndef LOGIN3_H
#define LOGIN3_H

#include <QDialog>

namespace Ui {
class login3;
}

class login3 : public QDialog
{
    Q_OBJECT

public:
    explicit login3(QWidget *parent = nullptr);
    ~login3();

private:
    Ui::login3 *ui;
};

#endif // LOGIN3_H
