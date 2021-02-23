#include "animal.h"

animal::animal(QObject *parent,QString name) : QObject(parent)
{
    animal::name=name;
    qInfo()<<"Name changed in "<< this << " = " <<animal::name;
    /*this->name=name; //Si dejo esto así con el static en el .h no lo reconoce aunque se supone que esta definida esa variable en todo el proyecto
    qInfo()<<"Animal name param: "<<&name<<" = "<<name;
    qInfo()<<"Animal name: "<<&this->name<<" = "<<this->name;*/
}

/*void animal::sayHello(QString message)
{
    qInfo()<<message<<" from "<<name<<" at "<<&name;
    qInfo()<<message<<" from "<<this->name<<" at "<<&this->name;
}*/
