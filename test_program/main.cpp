#include <QApplication>
#include <QPushButton>
#include <dialogue.h>
    int main (int argc, char *argv[]){
        QApplication app(argc, argv);
        MaFenetre fenetre;
        fenetre.show();
        return app.exec();
}
