#include "exercise.h"


QString Exercise::getData() const
{
    return data;
}

int Exercise::getNumber() const
{
    return number;
}

Exercise::Exercise()
{

}

Exercise::Exercise(QString data, int number)
{
    this->data = data;
    this->number = number;
}

QString Exercise::toString()
{
    return QString("Data: %1,Number: %2")
        .arg(data)
        .arg(number);
}
