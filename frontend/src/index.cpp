#include "./view/MainWindow.hpp"


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QMainWindow mainWindow(nullptr);
    Ui_MainWindow window;
    window.setupUi(&mainWindow);
    mainWindow.show();
    return app.exec();
}