#include "qanimatedslider.h"

#include <QApplication>
#include <QTimer>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QAnimatedSlider w;
    w.setFixedSize(100,100);
    w.setOrientation(Qt::Orientation::Horizontal);
    w.setMaximum(100);
    w.setMinimum(0);
    w.show();

    QTimer::singleShot(1000, [&]{
        w.setValue(50,true);
    });

    QTimer::singleShot(1200, [&]{
        w.setValue(10,true);
    });
    return a.exec();
}
