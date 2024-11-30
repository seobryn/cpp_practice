#include <QApplication>
#include <QPushButton>
#include <QVBoxLayout>
#include <QGridLayout>
#include <QWidget>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QWidget window;
    window.setWindowTitle("Grid layout example");

    QGridLayout *grid = new QGridLayout;

    QPushButton *button1 = new QPushButton("Button 1");
    QPushButton *button2 = new QPushButton("Button 2");
    QPushButton *button3 = new QPushButton("Button 3");
    QPushButton *button4 = new QPushButton("Button 4");

    grid->addWidget(button1, 0, 0);
    grid->addWidget(button2, 0, 1);
    grid->addWidget(button3, 1, 0);
    grid->addWidget(button4, 1, 1);

    window.setLayout(grid);
    window.resize(800, 600);
    window.show();

    return app.exec();
}