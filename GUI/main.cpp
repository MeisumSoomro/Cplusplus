#include <QApplication>
#include "ui/loginwindow.h"
#include "database/database.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    
    // Initialize database
    if (!Database::getInstance().init()) {
        return -1;
    }
    
    LoginWindow loginWindow;
    loginWindow.show();
    
    return app.exec();
}
