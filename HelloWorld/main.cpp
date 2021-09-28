#include<QApplication>
#include<QLabel>
int main(int argc,char* argv[])
{
    QApplication app(argc,argv);
    QLabel *label=new QLabel("Hello World");
    label->show();
    label->setWindowTitle("My App 1");
    label->resize(450,450);



    return app.exec();
}
