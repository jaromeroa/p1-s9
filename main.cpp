#include <QCoreApplication>
#include <QDebug>
#include "animal.h"

//Global memory
QString animal::name="";

//static QString name = "Paco"; //OJO con esto que el codigo la puede modificar de forma rara

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    /*
    QString name = "Juan";
    qInfo()<<"MI nombre esta en: "<<&name<<" = "<<name;
    animal cat(&a, "gato");
    animal dog(&a, "perro");
    animal persona(&a,name);

    persona.sayHello("hola");
    bool ts=true;
    if(ts){
        QString name = "Marc";
        qInfo()<<name;
    }
    qInfo()<<name; // como se ve en el static de arriba, hace lo que le da la gana
    */
    animal cat(&a, "gato");
    animal dog(&a, "perro");
    animal persona(&a,"Juan");

    qInfo()<<cat.name; //Sale Juan, porque al ser global cada vez que cambia en cualquier lado cambia para todos.

    return a.exec();
}
